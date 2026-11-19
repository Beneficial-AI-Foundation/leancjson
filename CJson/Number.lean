import CJson.Basic

/-!
# Numbers (cJSON `parse_number` / `print_number`)

cJSON hands number text to `strtod` and prints with `%1.15g` / `%1.17g`. Here numbers are
exact decimals: parsing follows the RFC 8259 grammar and loses nothing, printing uses the
same shapes `%g` produces (`0.123`, `1000000000000`, `1.23e+129`, `1e-09`).
-/

namespace CJson

def isDigit (c : UInt8) : Bool := 48 ≤ c.toNat && c.toNat ≤ 57

/-- ASCII digit for `d < 10`. -/
def digitByte (d : Nat) : UInt8 := (48 + d).toUInt8

/-- Value of a string of ASCII digits. -/
def natOf (ds : Bytes) : Nat := ds.foldl (fun a c => a * 10 + (c.toNat - 48)) 0

def digitsAux : Nat → Nat → Bytes → Bytes
  | 0, _, acc => acc
  | f + 1, n, acc =>
    if n < 10 then digitByte n :: acc
    else digitsAux f (n / 10) (digitByte (n % 10) :: acc)

/-- Decimal digits of `n`, most significant first, no leading zeros (`0` is `"0"`). -/
def natDigits (n : Nat) : Bytes := digitsAux (n + 1) n []

def normAux : Nat → Nat → Int → Nat × Int
  | 0, m, e => (m, e)
  | f + 1, m, e => if m % 10 = 0 then normAux f (m / 10) (e + 1) else (m, e)

/-- Canonical form of `m * 10 ^ e`: strip trailing zeros of `m` into the exponent. -/
def normalize (m : Nat) (e : Int) : Nat × Int :=
  if m = 0 then (0, 0) else normAux m m e

/-- Smart constructor: the canonical `Num` equal to `m * 10 ^ e`. -/
def Num.ofScientific (m : Int) (e : Int) : Num :=
  let p := normalize m.natAbs e
  { mant := if m < 0 then -(p.1 : Int) else p.1, exp := p.2 }

def Num.ofInt (m : Int) : Num := Num.ofScientific m 0

/-- Optional exponent part `[eE][+-]?[0-9]+`. If it is not well formed nothing is consumed. -/
def parseExp (s : Bytes) : Int × Bytes :=
  match s with
  | [] => (0, [])
  | c :: r =>
    if c = 101 ∨ c = 69 then
      let neg := r.head? = some 45
      let r1 := if r.head? = some 45 ∨ r.head? = some 43 then r.tail else r
      let d := r1.takeWhile isDigit
      if d = [] then (0, s)
      else ((if neg then -(natOf d : Int) else natOf d), r1.dropWhile isDigit)
    else (0, s)

/-- Optional fraction part `.[0-9]+`. If it is not well formed nothing is consumed. -/
def parseFrac (s : Bytes) : Bytes × Bytes :=
  match s with
  | [] => ([], [])
  | c :: r =>
    if c = 46 then
      let f := r.takeWhile isDigit
      if f = [] then ([], s) else (f, r.dropWhile isDigit)
    else ([], s)

/-- Integer part `0 | [1-9][0-9]*` (a leading `0` is a complete integer part). -/
def parseInt (s : Bytes) : Bytes × Bytes :=
  match s with
  | [] => ([], [])
  | c :: r => if c = 48 then ([48], r) else (s.takeWhile isDigit, s.dropWhile isDigit)

/-- The unsigned part of a number: `int frac? exp?` as canonical `(mantissa, exponent)`. -/
def parseUnsigned (s : Bytes) : Option ((Nat × Int) × Bytes) :=
  let i := parseInt s
  if i.1 = [] then none
  else
    let f := parseFrac i.2
    let x := parseExp f.2
    some (normalize (natOf (i.1 ++ f.1)) (x.1 - f.1.length), x.2)

/-- `parse_number`: `-? int frac? exp?`, returning the number and the unread input. -/
def parseNumber (s : Bytes) : Option (Num × Bytes) :=
  match parseUnsigned (if s.head? = some 45 then s.tail else s) with
  | none => none
  | some (p, r) =>
    some ({ mant := if s.head? = some 45 then -(p.1 : Int) else p.1, exp := p.2 }, r)

/-- Exponent digits padded to at least two, as C's `%e` does. -/
def pad2 (ds : Bytes) : Bytes := if ds.length < 2 then 48 :: ds else ds

/-- Text of `m * 10 ^ e` for `m ≥ 0`. With `k` significant digits and decimal exponent
`x = e + k - 1`:
* integers below `1e21` are written out in full;
* non-integers with `x ≥ -4` use plain `ddd.ddd` notation;
* everything else is `d.ddde±XX`. -/
def printUnsigned (m : Nat) (e : Int) : Bytes :=
  let ds := natDigits m
  let k : Int := ds.length
  let x : Int := e + k - 1
  if 0 ≤ e ∧ x < 21 then ds ++ List.replicate e.toNat 48
  else if e < 0 ∧ -4 ≤ x then
    if -e < k then ds.take (k + e).toNat ++ 46 :: ds.drop (k + e).toNat
    else 48 :: 46 :: (List.replicate (-e - k).toNat 48 ++ ds)
  else
    ds.take 1 ++ ((if ds.length > 1 then 46 :: ds.drop 1 else []) ++
      101 :: (if x < 0 then 45 else 43) :: pad2 (natDigits x.natAbs))

/-- `print_number`. -/
def printNum (n : Num) : Bytes :=
  (if n.mant < 0 then [45] else []) ++ printUnsigned n.mant.natAbs n.exp

end CJson
