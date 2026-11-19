import CJson.Minify
import CJson.Print
import CJson.Proofs.Str

/-! `minify` turns formatted output into compact output. Specs live in `CJson/Spec.lean`. -/

set_option linter.unusedSimpArgs false

namespace CJson

/-- Bytes `minify` copies unchanged while outside a string. -/
def Plain (c : UInt8) : Prop := c ≠ 32 ∧ c ≠ 9 ∧ c ≠ 13 ∧ c ≠ 10 ∧ c ≠ 47 ∧ c ≠ 34

instance (c : UInt8) : Decidable (Plain c) := by unfold Plain; infer_instance

theorem minify_plain_one (c : UInt8) (r acc : Bytes) (h : Plain c) :
    minifyAux .code (c :: r) acc = minifyAux .code r (c :: acc) := by
  obtain ⟨h1, h2, h3, h4, h5, h6⟩ := h
  simp [minifyAux, h1, h2, h3, h4, h5, h6]

theorem minify_plain (p r acc : Bytes) (h : ∀ c ∈ p, Plain c) :
    minifyAux .code (p ++ r) acc = minifyAux .code r (p.reverse ++ acc) := by
  induction p generalizing acc with
  | nil => rfl
  | cons c p ih =>
    rw [List.cons_append, minify_plain_one c _ _ (h c (by simp)),
      ih _ (fun d hd => h d (by simp [hd]))]
    simp

theorem minify_ws (ws r acc : Bytes) (h : ∀ c ∈ ws, c = 32 ∨ c = 9 ∨ c = 13 ∨ c = 10) :
    minifyAux .code (ws ++ r) acc = minifyAux .code r acc := by
  induction ws with
  | nil => rfl
  | cons c ws ih =>
    have hc := h c (by simp)
    rw [List.cons_append, minifyAux]
    simp only [hc, ite_true]
    exact ih (fun d hd => h d (by simp [hd]))

theorem minify_nl (fmt : Bool) (r acc : Bytes) :
    minifyAux .code (nl fmt ++ r) acc = minifyAux .code r acc :=
  minify_ws _ _ _ (by intro c hc; cases fmt <;> simp [nl] at hc; simp [hc])

theorem minify_tab (fmt : Bool) (r acc : Bytes) :
    minifyAux .code (tab fmt ++ r) acc = minifyAux .code r acc :=
  minify_ws _ _ _ (by intro c hc; cases fmt <;> simp [tab] at hc; simp [hc])

theorem minify_sp (fmt : Bool) (r acc : Bytes) :
    minifyAux .code (sp fmt ++ r) acc = minifyAux .code r acc :=
  minify_ws _ _ _ (by intro c hc; cases fmt <;> simp [sp] at hc; simp [hc])

theorem minify_tabs (fmt : Bool) (n : Nat) (r acc : Bytes) :
    minifyAux .code (tabs fmt n ++ r) acc = minifyAux .code r acc :=
  minify_ws _ _ _ (by intro c hc; cases fmt <;> simp [tabs] at hc; simp [hc])

/-! ### Strings -/

theorem hexDigit_ne (n : Nat) (h : n < 16) : hexDigit n ≠ 34 ∧ hexDigit n ≠ 92 := by
  unfold hexDigit; split
  · exact ⟨ne_of_toNat_ne (by rw [toNat_toUInt8 _ (by omega)]; simp; omega),
      ne_of_toNat_ne (by rw [toNat_toUInt8 _ (by omega)]; simp; omega)⟩
  · exact ⟨ne_of_toNat_ne (by rw [toNat_toUInt8 _ (by omega)]; simp; omega),
      ne_of_toNat_ne (by rw [toNat_toUInt8 _ (by omega)]; simp; omega)⟩

theorem minify_str_step (c : UInt8) (t acc : Bytes) :
    minifyAux .str (escapeByte c ++ t) acc = minifyAux .str t ((escapeByte c).reverse ++ acc) := by
  unfold escapeByte
  split
  · simp [minifyAux]
  split
  · simp [minifyAux]
  split
  · simp [minifyAux]
  split
  · simp [minifyAux]
  split
  · simp [minifyAux]
  split
  · simp [minifyAux]
  split
  · simp [minifyAux]
  split
  · rename_i h
    have h1 := hexDigit_ne (c.toNat / 16) (by omega)
    have h2 := hexDigit_ne (c.toNat % 16) (by omega)
    simp [minifyAux, h1.1, h1.2, h2.1, h2.2]
  · rename_i h34 h92 _ _ _ _ _ _
    simp [minifyAux, h34, h92]

theorem minify_str (s r acc : Bytes) :
    minifyAux .str (s.flatMap escapeByte ++ 34 :: r) acc =
      minifyAux .code r (34 :: ((s.flatMap escapeByte).reverse ++ acc)) := by
  induction s generalizing acc with
  | nil => simp [minifyAux]
  | cons c s ih =>
    rw [List.flatMap_cons, List.append_assoc, minify_str_step, ih]
    simp

theorem minify_printStr (s r acc : Bytes) :
    minifyAux .code (printStr s ++ r) acc = minifyAux .code r ((printStr s).reverse ++ acc) := by
  simp only [printStr, List.cons_append, List.append_assoc, List.nil_append]
  rw [minifyAux]
  simp only [show ¬((34 : UInt8) = 32 ∨ (34 : UInt8) = 9 ∨ (34 : UInt8) = 13 ∨ (34 : UInt8) = 10)
    by decide, show ¬((34 : UInt8) = 47) by decide, ite_false, ite_true]
  rw [minify_str]; simp

/-! ### Numbers -/

theorem plain_of_digit {c : UInt8} (h : isDigit c = true) : Plain c := by
  rw [isDigit_iff] at h
  refine ⟨?_, ?_, ?_, ?_, ?_, ?_⟩ <;> exact ne_of_toNat_ne (by simp; omega)

theorem printUnsigned_plain (m : Nat) (e : Int) : ∀ c ∈ printUnsigned m e, Plain c := by
  intro c hc
  have hd : ∀ c ∈ natDigits m, Plain c := fun c h => plain_of_digit (natDigits_isDigit m c h)
  unfold printUnsigned at hc
  simp only [] at hc
  split at hc
  · rcases List.mem_append.mp hc with h | h
    · exact hd c h
    · rw [(List.mem_replicate.mp h).2]; decide
  · split at hc
    · split at hc
      · rcases List.mem_append.mp hc with h | h
        · exact hd c (List.mem_of_mem_take h)
        · rcases List.mem_cons.mp h with h | h
          · subst h; decide
          · exact hd c (List.mem_of_mem_drop h)
      · rcases List.mem_cons.mp hc with h | h
        · subst h; decide
        · rcases List.mem_cons.mp h with h | h
          · subst h; decide
          · rcases List.mem_append.mp h with h | h
            · rw [(List.mem_replicate.mp h).2]; decide
            · exact hd c h
    · rcases List.mem_append.mp hc with h | h
      · exact hd c (List.mem_of_mem_take h)
      · rcases List.mem_append.mp h with h | h
        · split at h
          · rcases List.mem_cons.mp h with h | h
            · subst h; decide
            · exact hd c (List.mem_of_mem_drop h)
          · simp at h
        · rcases List.mem_cons.mp h with h | h
          · subst h; decide
          · rcases List.mem_cons.mp h with h | h
            · subst h; split <;> decide
            · exact plain_of_digit (pad2_isDigit _ (natDigits_isDigit _) c h)

theorem printNum_plain (n : Num) : ∀ c ∈ printNum n, Plain c := by
  intro c hc
  unfold printNum at hc
  rcases List.mem_append.mp hc with h | h
  · split at h
    · simp at h; subst h; decide
    · simp at h
  · exact printUnsigned_plain _ _ c h

/-! ### Whole values -/

mutual
theorem minify_printValue : ∀ (v : JSON) (fmt : Bool) (d : Nat) (r acc : Bytes),
    minifyAux .code (printValue fmt d v ++ r) acc =
      minifyAux .code r ((printValue false d v).reverse ++ acc)
  | .null, _, _, r, acc => by
    simp only [printValue]; exact minify_plain _ _ _ (by decide)
  | .bool true, _, _, r, acc => by
    simp only [printValue]; exact minify_plain _ _ _ (by decide)
  | .bool false, _, _, r, acc => by
    simp only [printValue]; exact minify_plain _ _ _ (by decide)
  | .number n, _, _, r, acc => by
    simp only [printValue]; exact minify_plain _ _ _ (printNum_plain n)
  | .string s, _, _, r, acc => by
    simp only [printValue]; exact minify_printStr s r acc
  | .array [], _, _, r, acc => by
    simp only [printValue]; exact minify_plain _ _ _ (by decide)
  | .array (x :: xs), fmt, d, r, acc => by
    simp only [printValue, List.cons_append, List.append_assoc]
    rw [minify_plain_one _ _ _ (by decide), minify_printValue x fmt (d + 1),
      minify_printTail xs fmt (d + 1)]
    simp
  | .object [], fmt, d, r, acc => by
    simp only [printValue, List.cons_append, List.append_assoc, List.nil_append]
    rw [minify_plain_one _ _ _ (by decide), minify_nl, minify_tabs,
      minify_plain_one _ _ _ (by decide)]
    simp [nl, tabs]
  | .object ((k, x) :: ms), fmt, d, r, acc => by
    simp only [printValue, List.cons_append, List.append_assoc]
    rw [minify_plain_one _ _ _ (by decide), minify_nl, minify_tabs, minify_printStr,
      minify_plain_one _ _ _ (by decide), minify_tab, minify_printValue x fmt (d + 1),
      minify_printMembers ms fmt (d + 1)]
    simp [nl, tabs, tab]
theorem minify_printTail : ∀ (xs : List JSON) (fmt : Bool) (d : Nat) (r acc : Bytes),
    minifyAux .code (printTail fmt d xs ++ r) acc =
      minifyAux .code r ((printTail false d xs).reverse ++ acc)
  | [], _, _, r, acc => by
    simp only [printTail]; exact minify_plain _ _ _ (by decide)
  | x :: xs, fmt, d, r, acc => by
    simp only [printTail, List.cons_append, List.append_assoc]
    rw [minify_plain_one _ _ _ (by decide), minify_sp, minify_printValue x fmt d,
      minify_printTail xs fmt d]
    simp [sp]
theorem minify_printMembers : ∀ (ms : List (Bytes × JSON)) (fmt : Bool) (d : Nat) (r acc : Bytes),
    minifyAux .code (printMembers fmt d ms ++ r) acc =
      minifyAux .code r ((printMembers false d ms).reverse ++ acc)
  | [], fmt, d, r, acc => by
    simp only [printMembers, List.append_assoc, List.cons_append, List.nil_append]
    rw [minify_nl, minify_tabs, minify_plain_one _ _ _ (by decide)]
    simp [nl, tabs]
  | (k, x) :: ms, fmt, d, r, acc => by
    simp only [printMembers, List.cons_append, List.append_assoc]
    rw [minify_plain_one _ _ _ (by decide), minify_nl, minify_tabs, minify_printStr,
      minify_plain_one _ _ _ (by decide), minify_tab, minify_printValue x fmt d,
      minify_printMembers ms fmt d]
    simp [nl, tabs, tab]
end

theorem minify_printValue_top (v : JSON) (fmt : Bool) :
    minify (printValue fmt 0 v) = printValue false 0 v := by
  have := minify_printValue v fmt 0 [] []
  simp only [List.append_nil] at this
  unfold minify; rw [this]; simp [minifyAux]

end CJson
