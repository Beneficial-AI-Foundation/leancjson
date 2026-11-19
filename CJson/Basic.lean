/-!
# cJSON in Lean — data model

A Lean 4 rewrite of the core of https://github.com/DaveGamble/cJSON (cJSON.c).

* Text is a list of bytes (`Bytes`), exactly like the `unsigned char` buffers of cJSON.
* A JSON document is the tree `JSON` (cJSON's linked `cJSON` structs).
* Numbers are exact decimals `mant * 10 ^ exp` instead of C `double`s, so that
  everything about them can be proved (Lean's `Float` is opaque to the kernel).
-/

namespace CJson

/-- Raw text / string contents: a list of bytes. -/
abbrev Bytes := List UInt8

/-- An exact decimal number `mant * 10 ^ exp`. -/
structure Num where
  mant : Int
  exp : Int
deriving DecidableEq, Repr

/-- Canonical form: zero is `0 * 10^0`, otherwise the mantissa has no trailing zero. -/
def Num.Normal (n : Num) : Prop :=
  if n.mant = 0 then n.exp = 0 else n.mant % 10 ≠ 0

instance (n : Num) : Decidable n.Normal := by unfold Num.Normal; infer_instance

/-- A JSON value (cJSON_NULL, cJSON_False/True, cJSON_Number, cJSON_String, cJSON_Array,
cJSON_Object). Objects keep their members in order and may contain duplicate keys,
as in cJSON. -/
inductive JSON where
  | null
  | bool (b : Bool)
  | number (n : Num)
  | string (s : Bytes)
  | array (xs : List JSON)
  | object (kvs : List (Bytes × JSON))
deriving Repr, Inhabited

namespace JSON

/-! ### Decidable equality (the deriving handler does not support nested inductives) -/

mutual
def beq : JSON → JSON → Bool
  | .null, .null => true
  | .bool a, .bool b => a == b
  | .number a, .number b => a == b
  | .string a, .string b => a == b
  | .array a, .array b => beqList a b
  | .object a, .object b => beqMembers a b
  | _, _ => false
def beqList : List JSON → List JSON → Bool
  | [], [] => true
  | x :: xs, y :: ys => beq x y && beqList xs ys
  | _, _ => false
def beqMembers : List (Bytes × JSON) → List (Bytes × JSON) → Bool
  | [], [] => true
  | (k, x) :: xs, (l, y) :: ys => k == l && beq x y && beqMembers xs ys
  | _, _ => false
end

mutual
theorem eq_of_beq : ∀ a b : JSON, beq a b = true → a = b
  | .null, .null, _ => rfl
  | .bool a, .bool b, h => by simp [beq] at h; simp [h]
  | .number a, .number b, h => by simp [beq] at h; simp [h]
  | .string a, .string b, h => by simp [beq] at h; simp [h]
  | .array a, .array b, h => by simp [beq] at h; simp [eq_of_beqList a b h]
  | .object a, .object b, h => by simp [beq] at h; simp [eq_of_beqMembers a b h]
  | .null, .bool _, h | .null, .number _, h | .null, .string _, h | .null, .array _, h
  | .null, .object _, h | .bool _, .null, h | .bool _, .number _, h | .bool _, .string _, h
  | .bool _, .array _, h | .bool _, .object _, h | .number _, .null, h | .number _, .bool _, h
  | .number _, .string _, h | .number _, .array _, h | .number _, .object _, h
  | .string _, .null, h | .string _, .bool _, h | .string _, .number _, h
  | .string _, .array _, h | .string _, .object _, h | .array _, .null, h
  | .array _, .bool _, h | .array _, .number _, h | .array _, .string _, h
  | .array _, .object _, h | .object _, .null, h | .object _, .bool _, h
  | .object _, .number _, h | .object _, .string _, h | .object _, .array _, h => by
    simp [beq] at h
theorem eq_of_beqList : ∀ a b : List JSON, beqList a b = true → a = b
  | [], [], _ => rfl
  | x :: xs, y :: ys, h => by
    simp [beqList] at h; simp [eq_of_beq x y h.1, eq_of_beqList xs ys h.2]
  | [], _ :: _, h | _ :: _, [], h => by simp [beqList] at h
theorem eq_of_beqMembers : ∀ a b : List (Bytes × JSON), beqMembers a b = true → a = b
  | [], [], _ => rfl
  | (k, x) :: xs, (l, y) :: ys, h => by
    simp [beqMembers] at h
    simp [h.1.1, eq_of_beq x y h.1.2, eq_of_beqMembers xs ys h.2]
  | [], _ :: _, h | _ :: _, [], h => by simp [beqMembers] at h
end

mutual
theorem beq_refl : ∀ a : JSON, beq a a = true
  | .null => rfl
  | .bool _ | .number _ | .string _ => by simp [beq]
  | .array a => by simp [beq, beqList_refl a]
  | .object a => by simp [beq, beqMembers_refl a]
theorem beqList_refl : ∀ a : List JSON, beqList a a = true
  | [] => rfl
  | x :: xs => by simp [beqList, beq_refl x, beqList_refl xs]
theorem beqMembers_refl : ∀ a : List (Bytes × JSON), beqMembers a a = true
  | [] => rfl
  | (k, x) :: xs => by simp [beqMembers, beq_refl x, beqMembers_refl xs]
end

instance : DecidableEq JSON := fun a b =>
  if h : beq a b = true then isTrue (eq_of_beq a b h)
  else isFalse (fun e => h (e ▸ beq_refl a))

/-! ### Nesting depth and well-formedness -/

mutual
/-- Container nesting depth: scalars are 0, `[]` and `{}` are 1, `[[]]` is 2, … -/
def depth : JSON → Nat
  | .array xs => depthList xs + 1
  | .object kvs => depthMembers kvs + 1
  | _ => 0
def depthList : List JSON → Nat
  | [] => 0
  | x :: xs => max (depth x) (depthList xs)
def depthMembers : List (Bytes × JSON) → Nat
  | [] => 0
  | (_, x) :: xs => max (depth x) (depthMembers xs)
end

mutual
/-- Every number in the tree is in canonical form. -/
def NumsNormal : JSON → Prop
  | .number n => n.Normal
  | .array xs => NumsNormalList xs
  | .object kvs => NumsNormalMembers kvs
  | _ => True
def NumsNormalList : List JSON → Prop
  | [] => True
  | x :: xs => NumsNormal x ∧ NumsNormalList xs
def NumsNormalMembers : List (Bytes × JSON) → Prop
  | [] => True
  | (_, x) :: xs => NumsNormal x ∧ NumsNormalMembers xs
end

end JSON

/-- cJSON's `CJSON_NESTING_LIMIT`: how deep arrays/objects may nest before the parser
rejects the input. -/
def nestingLimit : Nat := 1000

/-- The documents the parser can produce and the printer round-trips: canonical
numbers, nesting within `CJSON_NESTING_LIMIT`. -/
def JSON.WF (v : JSON) : Prop := v.NumsNormal ∧ v.depth ≤ nestingLimit

/-- UTF-8 bytes of a string (runtime conversion). -/
def bytes (s : String) : Bytes := s.toUTF8.toList

/-- `b!"text"` is the UTF-8 byte list of a string literal, expanded while elaborating to an
explicit list `[116, 101, 120, 116]`. Specs use it instead of `bytes "text"` so that the
kernel checks plain byte lists and never has to evaluate `String.toUTF8`. -/
macro:max "b!" s:str : term => do
  let elems := s.getString.toUTF8.toList.toArray.map fun b => Lean.Syntax.mkNumLit (toString b.toNat)
  `(([$elems,*] : Bytes))

end CJson
