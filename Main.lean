import CJson

/-!
IO shell (not covered by specs): read a file or stdin, run the verified core, write stdout.

    cjson print   [FILE]   parse, write formatted JSON      (cJSON_Print)
    cjson compact [FILE]   parse, write compact JSON        (cJSON_PrintUnformatted)
    cjson minify  [FILE]   strip whitespace and comments    (cJSON_Minify)
    cjson check   [FILE]   exit 0 iff the whole input is one JSON value
-/

open CJson

partial def readAll (h : IO.FS.Stream) (acc : ByteArray) : IO ByteArray := do
  let chunk ← h.read 65536
  if chunk.isEmpty then pure acc else readAll h (acc ++ chunk)

def readInput (path : Option String) : IO Bytes := do
  let data ← match path with
    | some p => if p == "-" then readAll (← IO.getStdin) .empty else IO.FS.readBinFile p
    | none => readAll (← IO.getStdin) .empty
  pure data.toList

def writeOut (b : Bytes) : IO Unit := do
  let out ← IO.getStdout
  out.write (ByteArray.mk b.toArray)
  out.flush

def usage : String :=
  "usage: cjson (print|compact|minify|check) [FILE]   (FILE defaults to stdin)"

def main (args : List String) : IO UInt32 := do
  match args with
  | cmd :: rest =>
    if rest.length > 1 then
      IO.eprintln usage; return 2
    let input ← readInput rest.head?
    match cmd with
    | "minify" => writeOut (minify input); return 0
    | "check" =>
      match parseStrict input with
      | some _ => return 0
      | none => IO.eprintln "cjson: not valid JSON"; return 1
    | "print" | "compact" =>
      match parse input with
      | some v =>
        writeOut (if cmd == "print" then print v else printUnformatted v)
        writeOut [10]
        return 0
      | none => IO.eprintln "cjson: parse error"; return 1
    | _ => IO.eprintln usage; return 2
  | [] => IO.eprintln usage; return 2
