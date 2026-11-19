import CJson.Basic

/-!
# Strings (cJSON `parse_string`, `parse_hex4`, `utf16_literal_to_utf8`, `print_string_ptr`)
-/

namespace CJson

/-- Lowercase hex digit for `n < 16`. -/
def hexDigit (n : Nat) : UInt8 := if n < 10 then (48 + n).toUInt8 else (87 + n).toUInt8

/-- `print_string_ptr`'s per-byte escaping: `"` `\` and control characters are escaped,
everything else (including bytes ≥ 0x80) is copied. -/
def escapeByte (c : UInt8) : Bytes :=
  if c = 34 then [92, 34]
  else if c = 92 then [92, 92]
  else if c = 8 then [92, 98]
  else if c = 12 then [92, 102]
  else if c = 10 then [92, 110]
  else if c = 13 then [92, 114]
  else if c = 9 then [92, 116]
  else if c.toNat < 32 then [92, 117, 48, 48, hexDigit (c.toNat / 16), hexDigit (c.toNat % 16)]
  else [c]

/-- `print_string`: the quoted, escaped form of a string. -/
def printStr (s : Bytes) : Bytes := 34 :: (s.flatMap escapeByte ++ [34])

/-- Value of one hex digit, either case. -/
def hexVal (c : UInt8) : Option Nat :=
  let n := c.toNat
  if 48 ≤ n ∧ n ≤ 57 then some (n - 48)
  else if 65 ≤ n ∧ n ≤ 70 then some (n - 55)
  else if 97 ≤ n ∧ n ≤ 102 then some (n - 87)
  else none

/-- `parse_hex4`: four hex digits. (cJSON returns 0 on a bad digit; we reject.) -/
def parseHex4 (s : Bytes) : Option (Nat × Bytes) :=
  match s with
  | a :: b :: c :: d :: r =>
    match hexVal a, hexVal b, hexVal c, hexVal d with
    | some a, some b, some c, some d => some (((a * 16 + b) * 16 + c) * 16 + d, r)
    | _, _, _, _ => none
  | _ => none

/-- UTF-8 encoding of a code point `< 0x110000` (tail of `utf16_literal_to_utf8`). -/
def utf8 (cp : Nat) : Bytes :=
  if cp < 0x80 then [cp.toUInt8]
  else if cp < 0x800 then [(0xC0 + cp / 64).toUInt8, (0x80 + cp % 64).toUInt8]
  else if cp < 0x10000 then
    [(0xE0 + cp / 4096).toUInt8, (0x80 + cp / 64 % 64).toUInt8, (0x80 + cp % 64).toUInt8]
  else
    [(0xF0 + cp / 262144).toUInt8, (0x80 + cp / 4096 % 64).toUInt8,
     (0x80 + cp / 64 % 64).toUInt8, (0x80 + cp % 64).toUInt8]

/-- Decoder for `utf8`, used only to state the spec that `utf8` is a correct encoder. -/
def utf8Decode (b : Bytes) : Option Nat :=
  match b with
  | [a] => if a.toNat < 0x80 then some a.toNat else none
  | [a, b] => some ((a.toNat - 0xC0) * 64 + (b.toNat - 0x80))
  | [a, b, c] => some ((a.toNat - 0xE0) * 4096 + (b.toNat - 0x80) * 64 + (c.toNat - 0x80))
  | [a, b, c, d] =>
    some ((a.toNat - 0xF0) * 262144 + (b.toNat - 0x80) * 4096 + (c.toNat - 0x80) * 64
      + (d.toNat - 0x80))
  | _ => none

/-- `\uXXXX` (after the `\u`), including UTF-16 surrogate pairs: returns the code point. -/
def parseUnicode (s : Bytes) : Option (Nat × Bytes) :=
  match parseHex4 s with
  | none => none
  | some (c1, t1) =>
    if 0xDC00 ≤ c1 ∧ c1 ≤ 0xDFFF then none            -- lone low surrogate
    else if 0xD800 ≤ c1 ∧ c1 ≤ 0xDBFF then            -- high surrogate: need a low one
      match t1 with
      | 92 :: 117 :: t2 =>
        match parseHex4 t2 with
        | none => none
        | some (c2, t3) =>
          if 0xDC00 ≤ c2 ∧ c2 ≤ 0xDFFF then
            some (0x10000 + (c1 - 0xD800) * 1024 + (c2 - 0xDC00), t3)
          else none
      | _ => none
    else some (c1, t1)

/-- Body of `parse_string`, after the opening quote. `acc` is the output so far, reversed.
Returns the unescaped contents and the input after the closing quote. -/
def parseStrBody : Nat → Bytes → Bytes → Option (Bytes × Bytes)
  | 0, _, _ => none
  | _ + 1, [], _ => none
  | f + 1, c :: r, acc =>
    if c = 34 then some (acc.reverse, r)
    else if c = 92 then
      match r with
      | [] => none
      | e :: t =>
        if e = 98 then parseStrBody f t (8 :: acc)
        else if e = 102 then parseStrBody f t (12 :: acc)
        else if e = 110 then parseStrBody f t (10 :: acc)
        else if e = 114 then parseStrBody f t (13 :: acc)
        else if e = 116 then parseStrBody f t (9 :: acc)
        else if e = 34 ∨ e = 92 ∨ e = 47 then parseStrBody f t (e :: acc)
        else if e = 117 then
          match parseUnicode t with
          | none => none
          | some (cp, t') => parseStrBody f t' ((utf8 cp).reverse ++ acc)
        else none
    else parseStrBody f r (c :: acc)

/-- `parse_string` after the opening quote. -/
def parseStr (s : Bytes) : Option (Bytes × Bytes) := parseStrBody s.length s []

end CJson
