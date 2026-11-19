import CJson.Number
import CJson.Str

/-!
# Parser (cJSON `parse_value`, `parse_array`, `parse_object`, `cJSON_ParseWithOpts`)
-/

namespace CJson

def isWs (c : UInt8) : Bool := c.toNat ≤ 32

/-- `buffer_skip_whitespace`: cJSON treats every byte ≤ 32 as whitespace. -/
def skipWs (s : Bytes) : Bytes := s.dropWhile isWs

/-- The non-container cases of `parse_value`: numbers, strings, `null`, `true`, `false`.
`len` is any upper bound on the length of the input (computed once by the caller); it is
the fuel for the string loop. -/
def parseScalar (len : Nat) (s : Bytes) : Option (JSON × Bytes) :=
  match s with
  | [] => none
  | c :: r =>
    if c = 45 ∨ isDigit c then
      match parseNumber s with
      | none => none
      | some (n, r') => some (.number n, r')
    else if c = 34 then
      match parseStrBody len r [] with
      | none => none
      | some (b, r') => some (.string b, r')
    else
      match s with
      | 110 :: 117 :: 108 :: 108 :: r' => some (.null, r')
      | 116 :: 114 :: 117 :: 101 :: r' => some (.bool true, r')
      | 102 :: 97 :: 108 :: 115 :: 101 :: r' => some (.bool false, r')
      | _ => none

/-- Elements of a non-empty array up to and including `]`. `pv` parses one value;
`acc` holds the elements read so far, reversed. -/
def parseElems (pv : Bytes → Option (JSON × Bytes)) :
    Nat → Bytes → List JSON → Option (List JSON × Bytes)
  | 0, _, _ => none
  | n + 1, s, acc =>
    match pv (skipWs s) with
    | none => none
    | some (v, r) =>
      match skipWs r with
      | [] => none
      | c :: r' =>
        if c = 44 then parseElems pv n r' (v :: acc)
        else if c = 93 then some ((v :: acc).reverse, r')
        else none

/-- Members of a non-empty object up to and including `}`. `len` is the fuel for keys. -/
def parseMembers (pv : Bytes → Option (JSON × Bytes)) (len : Nat) :
    Nat → Bytes → List (Bytes × JSON) → Option (List (Bytes × JSON) × Bytes)
  | 0, _, _ => none
  | n + 1, s, acc =>
    match skipWs s with
    | [] => none
    | q :: r =>
      if q = 34 then
        match parseStrBody len r [] with
        | none => none
        | some (k, r1) =>
          match skipWs r1 with
          | [] => none
          | c :: r2 =>
            if c = 58 then
              match pv (skipWs r2) with
              | none => none
              | some (v, r3) =>
                match skipWs r3 with
                | [] => none
                | c' :: r4 =>
                  if c' = 44 then parseMembers pv len n r4 ((k, v) :: acc)
                  else if c' = 125 then some (((k, v) :: acc).reverse, r4)
                  else none
            else none
      else none

/-- `parse_value` with `d` levels of array/object nesting still allowed. `len` is an upper
bound on the input length, used as fuel for the element, member and string loops. -/
def parseValue : Nat → Nat → Bytes → Option (JSON × Bytes)
  | 0, len, s => parseScalar len s
  | d + 1, len, s =>
    if s.head? = some 91 then
      let r := skipWs s.tail
      if r.head? = some 93 then some (.array [], r.tail)
      else
        match parseElems (parseValue d len) len r [] with
        | none => none
        | some (xs, r') => some (.array xs, r')
    else if s.head? = some 123 then
      let r := skipWs s.tail
      if r.head? = some 125 then some (.object [], r.tail)
      else
        match parseMembers (parseValue d len) len len r [] with
        | none => none
        | some (ms, r') => some (.object ms, r')
    else parseScalar len s

/-- `skip_utf8_bom`. -/
def skipBom (s : Bytes) : Bytes :=
  match s with
  | 0xEF :: 0xBB :: 0xBF :: r => r
  | _ => s

/-- `cJSON_ParseWithOpts`: skip a BOM and whitespace, parse one value. Returns the value
and the unread input (`return_parse_end`). With `requireEnd` (cJSON's
`require_null_terminated`) only whitespace may follow the value. -/
def parseWithOpts (s : Bytes) (requireEnd : Bool) : Option (JSON × Bytes) :=
  match parseValue nestingLimit s.length (skipWs (skipBom s)) with
  | none => none
  | some (v, r) =>
    if requireEnd then (if skipWs r = [] then some (v, []) else none)
    else some (v, r)

/-- `cJSON_Parse`: like cJSON, anything after the first value is ignored. -/
def parse (s : Bytes) : Option JSON := (parseWithOpts s false).map (·.1)

/-- Strict parse: the whole input must be one JSON value (plus whitespace). -/
def parseStrict (s : Bytes) : Option JSON := (parseWithOpts s true).map (·.1)

end CJson
