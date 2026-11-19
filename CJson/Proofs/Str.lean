import CJson.Str
import CJson.Proofs.Number

/-! Supporting lemmas for string printing/parsing. Specs live in `CJson/Spec.lean`. -/

set_option linter.unusedSimpArgs false

namespace CJson

theorem toUInt8_toNat (c : UInt8) : c.toNat.toUInt8 = c := by
  simp [Nat.toUInt8]

theorem hexVal_hexDigit (n : Nat) (h : n < 16) : hexVal (hexDigit n) = some n := by
  unfold hexDigit hexVal
  split
  · rw [toNat_toUInt8 _ (by omega)]; simp; omega
  · rw [toNat_toUInt8 _ (by omega)]
    simp only []
    rw [if_neg' (by omega), if_neg' (by omega), if_pos' (by omega)]
    congr 1; omega

/-- Uppercase hex digit for `n < 16` (only used to state specs). -/
def hexDigitUpper (n : Nat) : UInt8 := if n < 10 then (48 + n).toUInt8 else (55 + n).toUInt8

theorem hexVal_hexDigitUpper (n : Nat) (h : n < 16) : hexVal (hexDigitUpper n) = some n := by
  unfold hexDigitUpper hexVal
  split
  · rw [toNat_toUInt8 _ (by omega)]; simp; omega
  · rw [toNat_toUInt8 _ (by omega)]
    simp only []
    rw [if_neg' (by omega), if_pos' (by omega)]
    congr 1; omega

/-- A control character printed as `\u00XY` is read back as itself. -/
theorem parseUnicode_control (c : UInt8) (rest : Bytes) (h : c.toNat < 32) :
    parseUnicode (48 :: 48 :: hexDigit (c.toNat / 16) :: hexDigit (c.toNat % 16) :: rest) =
      some (c.toNat, rest) := by
  have h0 : hexVal 48 = some 0 := by decide
  unfold parseUnicode parseHex4
  simp only [h0, hexVal_hexDigit _ (show c.toNat / 16 < 16 by omega),
    hexVal_hexDigit _ (show c.toNat % 16 < 16 by omega)]
  have : ((0 * 16 + 0) * 16 + c.toNat / 16) * 16 + c.toNat % 16 = c.toNat := by omega
  rw [this, if_neg' (by omega), if_neg' (by omega)]

theorem utf8_ascii (c : UInt8) (h : c.toNat < 128) : utf8 c.toNat = [c] := by
  simp [utf8, h, toUInt8_toNat]

theorem escapeByte_length_pos (c : UInt8) : 0 < (escapeByte c).length := by
  unfold escapeByte; repeat' split
  all_goals simp

/-- One printed byte is read back as that byte, using one unit of fuel. -/
theorem parseStrBody_step (c : UInt8) (f : Nat) (tail acc : Bytes) :
    parseStrBody (f + 1) (escapeByte c ++ tail) acc = parseStrBody f tail (c :: acc) := by
  unfold escapeByte
  split
  · rename_i h; subst h; simp [parseStrBody]
  split
  · rename_i h; subst h; simp [parseStrBody]
  split
  · rename_i h; subst h; simp [parseStrBody]
  split
  · rename_i h; subst h; simp [parseStrBody]
  split
  · rename_i h; subst h; simp [parseStrBody]
  split
  · rename_i h; subst h; simp [parseStrBody]
  split
  · rename_i h; subst h; simp [parseStrBody]
  split
  · rename_i h
    simp only [List.cons_append, List.nil_append, parseStrBody]
    simp only [show ((92 : UInt8) = 34) = False by decide, show ((117 : UInt8) = 98) = False by decide,
      show ((117 : UInt8) = 102) = False by decide, show ((117 : UInt8) = 110) = False by decide,
      show ((117 : UInt8) = 114) = False by decide, show ((117 : UInt8) = 116) = False by decide,
      show ((117 : UInt8) = 34 ∨ (117 : UInt8) = 92 ∨ (117 : UInt8) = 47) = False by decide,
      ite_false, ite_true]
    rw [parseUnicode_control c _ h]
    simp only [utf8_ascii c (by omega), List.reverse_cons, List.reverse_nil, List.nil_append,
      List.singleton_append]
  · rename_i h34 h92 _ _ _ _ _ _
    simp only [List.cons_append, List.nil_append, parseStrBody, h34, h92, ite_false]

/-- `parse_string` inverts `print_string` (body, arbitrary fuel and accumulator). -/
theorem parseStrBody_escape (s : Bytes) (f : Nat) (acc rest : Bytes)
    (hf : s.length < f) :
    parseStrBody f (s.flatMap escapeByte ++ 34 :: rest) acc = some (acc.reverse ++ s, rest) := by
  induction s generalizing f acc with
  | nil =>
    cases f with
    | zero => simp at hf
    | succ f => simp [parseStrBody]
  | cons c s ih =>
    cases f with
    | zero => simp at hf
    | succ f =>
      rw [List.flatMap_cons, List.append_assoc, parseStrBody_step,
        ih f (c :: acc) (by simpa using hf)]
      simp

theorem length_le_flatMap_escape (s : Bytes) : s.length ≤ (s.flatMap escapeByte).length := by
  induction s with
  | nil => simp
  | cons c s ih =>
    have := escapeByte_length_pos c
    simp only [List.flatMap_cons, List.length_append, List.length_cons]; omega

theorem parseStr_printStr (s rest : Bytes) :
    parseStr (s.flatMap escapeByte ++ 34 :: rest) = some (s, rest) := by
  unfold parseStr
  have := length_le_flatMap_escape s
  rw [parseStrBody_escape s _ [] rest (by simp only [List.length_append, List.length_cons]; omega)]; rfl

end CJson
