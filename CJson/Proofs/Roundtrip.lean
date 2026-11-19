import CJson.Print
import CJson.Parse
import CJson.Proofs.Str

/-! Parsing inverts printing. Specs live in `CJson/Spec.lean`. -/

set_option linter.unusedSimpArgs false

namespace CJson

/-! ### Whitespace -/

theorem skipWs_cons_of_not {c : UInt8} {r : Bytes} (h : 32 < c.toNat) :
    skipWs (c :: r) = c :: r := by
  have : isWs c = false := by simp [isWs]; omega
  simp [skipWs, List.dropWhile, this]

theorem skipWs_append (ws r : Bytes) (h : ∀ c ∈ ws, isWs c = true) :
    skipWs (ws ++ r) = skipWs r := by
  induction ws with
  | nil => rfl
  | cons c ws ih =>
    have hc := h c (by simp)
    simp only [skipWs, List.cons_append, List.dropWhile, hc]
    exact ih (fun d hd => h d (by simp [hd]))

theorem isWs_tabs (fmt : Bool) (n : Nat) : ∀ c ∈ tabs fmt n, isWs c = true := by
  intro c hc; unfold tabs at hc
  cases fmt
  · simp at hc
  · simp at hc; rw [hc.2]; decide

theorem isWs_nl (fmt : Bool) : ∀ c ∈ nl fmt, isWs c = true := by
  intro c hc; cases fmt <;> simp [nl] at hc; subst hc; decide

theorem isWs_tab (fmt : Bool) : ∀ c ∈ tab fmt, isWs c = true := by
  intro c hc; cases fmt <;> simp [tab] at hc; subst hc; decide

theorem isWs_sp (fmt : Bool) : ∀ c ∈ sp fmt, isWs c = true := by
  intro c hc; cases fmt <;> simp [sp] at hc; subst hc; decide

theorem isWs_append {a b : Bytes} (ha : ∀ c ∈ a, isWs c = true) (hb : ∀ c ∈ b, isWs c = true) :
    ∀ c ∈ a ++ b, isWs c = true := by
  intro c hc; rcases List.mem_append.mp hc with h | h
  · exact ha c h
  · exact hb c h

/-! ### First byte of printed values -/

/-- A byte that can start a printed value: not whitespace, not a closing bracket. -/
def ValueHead (c : UInt8) : Prop := 32 < c.toNat ∧ c ≠ 93 ∧ c ≠ 125 ∧ c.toNat < 128

instance (c : UInt8) : Decidable (ValueHead c) := by unfold ValueHead; infer_instance

theorem parseUnsigned_head {s : Bytes} {x} (h : parseUnsigned s = some x) :
    ∃ c r, s = c :: r ∧ isDigit c = true := by
  cases s with
  | nil => simp [parseUnsigned, parseInt] at h
  | cons c r =>
    refine ⟨c, r, rfl, ?_⟩
    unfold parseUnsigned at h
    by_cases hc : c = 48
    · subst hc; decide
    · cases hd : isDigit c with
      | true => rfl
      | false => simp [parseInt, hc, List.takeWhile, hd] at h

theorem printUnsigned_head (m : Nat) (e : Int) (hz : m = 0 → e = 0) (hn : m ≠ 0 → m % 10 ≠ 0) :
    ∃ c r, printUnsigned m e = c :: r ∧ isDigit c = true := by
  have := parseUnsigned_printUnsigned m e [] hz hn (by intro c hc; simp at hc)
  simpa using parseUnsigned_head this

theorem printNum_head (n : Num) (hn : n.Normal) :
    ∃ c r, printNum n = c :: r ∧ (c = 45 ∨ isDigit c = true) := by
  obtain ⟨mant, exp⟩ := n
  unfold Num.Normal at hn
  simp only at hn
  have hz : mant.natAbs = 0 → exp = 0 := by
    intro h; have : mant = 0 := by omega
    simpa [this] using hn
  have hnz : mant.natAbs ≠ 0 → mant.natAbs % 10 ≠ 0 := by
    intro h; have : mant ≠ 0 := by omega
    simp only [this, ite_false] at hn; omega
  obtain ⟨c, r, hc, hd⟩ := printUnsigned_head mant.natAbs exp hz hnz
  unfold printNum
  by_cases hneg : mant < 0
  · exact ⟨45, printUnsigned mant.natAbs exp, by simp [hneg], Or.inl rfl⟩
  · exact ⟨c, r, by simp [hneg, hc], Or.inr hd⟩

theorem valueHead_of_num {c : UInt8} (h : c = 45 ∨ isDigit c = true) : ValueHead c := by
  rcases h with h | h
  · subst h; decide
  · rw [isDigit_iff] at h
    exact ⟨by omega, ne_of_toNat_ne (by simp; omega), ne_of_toNat_ne (by simp; omega), by omega⟩

theorem printValue_head (fmt : Bool) (d : Nat) (v : JSON) (hv : v.NumsNormal) :
    ∃ c r, printValue fmt d v = c :: r ∧ ValueHead c := by
  cases v with
  | null => exact ⟨110, _, by simp [printValue]; rfl, by decide⟩
  | bool b =>
    cases b
    · exact ⟨102, _, by simp [printValue]; rfl, by decide⟩
    · exact ⟨116, _, by simp [printValue]; rfl, by decide⟩
  | number n =>
    obtain ⟨c, r, hc, hd⟩ := printNum_head n (by simpa [JSON.NumsNormal] using hv)
    exact ⟨c, r, by simp [printValue, hc], valueHead_of_num hd⟩
  | string s => exact ⟨34, _, by simp [printValue, printStr]; rfl, by decide⟩
  | array xs => cases xs <;> exact ⟨91, _, by simp [printValue]; rfl, by decide⟩
  | object ms =>
    cases ms with
    | nil => exact ⟨123, _, by simp [printValue]; rfl, by decide⟩
    | cons m ms => obtain ⟨k, x⟩ := m; exact ⟨123, _, by simp [printValue]; rfl, by decide⟩

theorem skipWs_printValue (fmt : Bool) (d : Nat) (v : JSON) (hv : v.NumsNormal)
    (ws rest : Bytes) (hws : ∀ c ∈ ws, isWs c = true) :
    skipWs (ws ++ (printValue fmt d v ++ rest)) = printValue fmt d v ++ rest := by
  obtain ⟨c, r, hc, hh⟩ := printValue_head fmt d v hv
  rw [skipWs_append _ _ hws, hc]
  exact skipWs_cons_of_not hh.1

/-! ### Scalars -/

theorem numEnd_cons {c : UInt8} {r : Bytes}
    (h : isDigit c = false ∧ c ≠ 46 ∧ c ≠ 101 ∧ c ≠ 69) : NumEnd (c :: r) := by
  intro d hd; simp at hd; subst hd; exact h

theorem parseValue_of_scalar_head (n len : Nat) (c : UInt8) (r : Bytes) (h1 : c ≠ 91)
    (h2 : c ≠ 123) : parseValue n len (c :: r) = parseScalar len (c :: r) := by
  cases n with
  | zero => rfl
  | succ n => simp [parseValue, h1, h2]

theorem parseScalar_number (len : Nat) (n : Num) (rest : Bytes) (hn : n.Normal) (hr : NumEnd rest) :
    parseScalar len (printNum n ++ rest) = some (.number n, rest) := by
  obtain ⟨c, r, hc, hd⟩ := printNum_head n hn
  have key := parseNumber_printNum n rest hn hr
  rw [hc] at key ⊢
  have hd' : c = 45 ∨ isDigit c = true := hd
  simp only [List.cons_append, parseScalar, hd', ite_true] at key ⊢
  rw [key]

theorem parseScalar_string (len : Nat) (s rest : Bytes) (hl : s.length < len) :
    parseScalar len (printStr s ++ rest) = some (.string s, rest) := by
  have key : parseStrBody len (s.flatMap escapeByte ++ 34 :: rest) [] = some (s, rest) := by
    rw [parseStrBody_escape s len [] rest hl]; rfl
  simp only [printStr, List.cons_append, List.append_assoc, List.nil_append, parseScalar]
  rw [if_neg' (by decide)]; simp [key]

theorem parseScalar_null (len : Nat) (rest : Bytes) :
    parseScalar len ([110, 117, 108, 108] ++ rest) = some (.null, rest) := by
  simp [parseScalar, isDigit]

theorem parseScalar_true (len : Nat) (rest : Bytes) :
    parseScalar len ([116, 114, 117, 101] ++ rest) = some (.bool true, rest) := by
  simp [parseScalar, isDigit]

theorem parseScalar_false (len : Nat) (rest : Bytes) :
    parseScalar len ([102, 97, 108, 115, 101] ++ rest) = some (.bool false, rest) := by
  simp [parseScalar, isDigit]

/-! ### Containers -/

theorem length_printTail (fmt : Bool) (d : Nat) (xs : List JSON) :
    xs.length < (printTail fmt d xs).length := by
  induction xs with
  | nil => simp [printTail]
  | cons x xs ih => simp only [printTail, List.length_cons, List.length_append]; omega

theorem length_printMembers (fmt : Bool) (d : Nat) (ms : List (Bytes × JSON)) :
    ms.length < (printMembers fmt d ms).length := by
  induction ms with
  | nil => simp only [printMembers, List.length_append, List.length_cons, List.length_nil]; omega
  | cons m ms ih =>
    obtain ⟨k, x⟩ := m
    simp only [printMembers, List.length_cons, List.length_append]; omega

theorem numEnd_printTail (fmt : Bool) (d : Nat) (xs : List JSON) (rest : Bytes) :
    NumEnd (printTail fmt d xs ++ rest) := by
  cases xs <;> simp only [printTail, List.cons_append] <;> exact numEnd_cons (by decide)

theorem numEnd_printMembers (fmt : Bool) (d : Nat) (ms : List (Bytes × JSON)) (rest : Bytes) :
    NumEnd (printMembers fmt d ms ++ rest) := by
  cases ms with
  | nil =>
    cases fmt
    · simp only [printMembers, nl, tabs, List.nil_append, List.cons_append]
      exact numEnd_cons (by decide)
    · simp only [printMembers, nl, List.cons_append, List.nil_append, Bool.true_eq_false, ite_false,
        ite_true]
      exact numEnd_cons (by decide)
  | cons m ms =>
    obtain ⟨k, x⟩ := m
    simp only [printMembers, List.cons_append]; exact numEnd_cons (by decide)

mutual
/-- Parsing inverts printing, for either format, at any indentation, with anything
that cannot extend a number following. -/
theorem parseValue_printValue : ∀ (v : JSON) (fmt : Bool) (d n len : Nat) (rest : Bytes),
    v.NumsNormal → v.depth ≤ n → NumEnd rest → (printValue fmt d v ++ rest).length ≤ len →
    parseValue n len (printValue fmt d v ++ rest) = some (v, rest)
  | .null, fmt, d, n, len, rest, _, _, _, _ => by
    simp only [printValue, List.cons_append]
    rw [parseValue_of_scalar_head _ _ _ _ (by decide) (by decide)]
    exact parseScalar_null len rest
  | .bool true, fmt, d, n, len, rest, _, _, _, _ => by
    simp only [printValue, List.cons_append]
    rw [parseValue_of_scalar_head _ _ _ _ (by decide) (by decide)]
    exact parseScalar_true len rest
  | .bool false, fmt, d, n, len, rest, _, _, _, _ => by
    simp only [printValue, List.cons_append]
    rw [parseValue_of_scalar_head _ _ _ _ (by decide) (by decide)]
    exact parseScalar_false len rest
  | .number x, fmt, d, n, len, rest, hv, _, hr, _ => by
    have hx : x.Normal := by simpa [JSON.NumsNormal] using hv
    obtain ⟨c, r, hc, hd⟩ := printNum_head x hx
    have hh := valueHead_of_num hd
    have key := parseScalar_number len x rest hx hr
    simp only [printValue]
    rw [hc] at key ⊢
    have h91 : c ≠ 91 := by
      rcases hd with h | h
      · subst h; decide
      · rw [isDigit_iff] at h; exact ne_of_toNat_ne (by simp; omega)
    have h123 : c ≠ 123 := by
      rcases hd with h | h
      · subst h; decide
      · rw [isDigit_iff] at h; exact ne_of_toNat_ne (by simp; omega)
    rw [List.cons_append, parseValue_of_scalar_head _ _ _ _ h91 h123]
    exact key
  | .string s, fmt, d, n, len, rest, _, _, _, hl => by
    have hs := length_le_flatMap_escape s
    have key := parseScalar_string len s rest (by
      simp only [printValue, printStr, List.length_append, List.length_cons, List.length_nil] at hl
      omega)
    simp only [printValue]
    simp only [printStr, List.cons_append] at key ⊢
    rw [parseValue_of_scalar_head _ _ _ _ (by decide) (by decide)]
    exact key
  | .array [], fmt, d, n, len, rest, _, hd, _, _ => by
    cases n with
    | zero => simp [JSON.depth] at hd
    | succ n => simp [printValue, parseValue, skipWs, List.dropWhile, isWs]
  | .array (x :: xs), fmt, d, n, len, rest, hv, hd, hr, hl => by
    cases n with
    | zero => simp [JSON.depth] at hd
    | succ n =>
      simp only [JSON.NumsNormal, JSON.NumsNormalList] at hv
      have hlen := length_printTail fmt (d + 1) xs
      have hsk := skipWs_printValue fmt (d + 1) x hv.1 [] (printTail fmt (d + 1) xs ++ rest)
        (by simp)
      obtain ⟨c, r, hc, hh⟩ := printValue_head fmt (d + 1) x hv.1
      simp only [printValue, List.length_append, List.length_cons] at hl
      have key := parseElems_printTail (x :: xs) fmt (d + 1) n len len [] [] rest
        (by simpa [JSON.NumsNormalList] using hv)
        (by simpa [JSON.depth] using hd)
        (by simp only [List.length_cons]; omega) (by simp) hr
        (by simp only [List.length_append, List.length_nil]; omega)
      simp only [List.nil_append, List.reverse_nil] at key hsk
      simp only [printValue, parseValue, List.cons_append, List.head?_cons, List.tail_cons,
        ite_true, List.append_assoc]
      simp only [List.cons_append, List.append_assoc] at key
      rw [hsk]
      have hne : (printValue fmt (d + 1) x ++ (printTail fmt (d + 1) xs ++ rest)).head? ≠ some 93 := by
        rw [hc]; simp; exact hh.2.1
      rw [if_neg' hne, key]
  | .object [], fmt, d, n, len, rest, _, hd, _, _ => by
    cases n with
    | zero => simp [JSON.depth] at hd
    | succ n =>
      have h := skipWs_append (nl fmt ++ tabs fmt d) (125 :: rest)
        (isWs_append (isWs_nl fmt) (isWs_tabs fmt d))
      rw [skipWs_cons_of_not (by decide)] at h
      simp only [List.append_assoc] at h
      simp [printValue, parseValue, h]
  | .object ((k, x) :: ms), fmt, d, n, len, rest, hv, hd, hr, hl => by
    cases n with
    | zero => simp [JSON.depth] at hd
    | succ n =>
      simp only [JSON.NumsNormal, JSON.NumsNormalMembers] at hv
      have hlen := length_printMembers fmt (d + 1) ms
      simp only [printValue, List.length_append, List.length_cons] at hl
      have key := parseMembers_printMembers ((k, x) :: ms) fmt (d + 1) n len len [] [] rest
        (by simpa [JSON.NumsNormalMembers] using hv)
        (by simpa [JSON.depth] using hd)
        (by simp only [List.length_cons]; omega) (by simp) hr
        (by simp only [List.length_append, List.length_cons, List.length_nil]; omega)
      have hsk := skipWs_append (nl fmt ++ tabs fmt (d + 1))
        (printStr k ++ 58 :: (tab fmt ++ printValue fmt (d + 1) x ++ printMembers fmt (d + 1) ms)
          ++ rest)
        (isWs_append (isWs_nl fmt) (isWs_tabs fmt (d + 1)))
      rw [show printStr k = 34 :: (k.flatMap escapeByte ++ [34]) from rfl] at hsk
      simp only [List.cons_append, List.append_assoc, List.nil_append, List.reverse_nil] at key hsk
      rw [skipWs_cons_of_not (by decide)] at hsk
      simp only [printValue, parseValue, List.cons_append, List.head?_cons, List.tail_cons,
        ite_true, List.append_assoc, show ((123 : UInt8) = 91) = False by decide, ite_false,
        Option.some.injEq]
      rw [show printStr k = 34 :: (k.flatMap escapeByte ++ [34]) from rfl]
      simp only [List.cons_append, List.append_assoc, List.nil_append]
      rw [hsk]
      simp only [List.head?_cons, Option.some.injEq, show ((34 : UInt8) = 125) = False by decide,
        ite_false]
      rw [show printStr k = 34 :: (k.flatMap escapeByte ++ [34]) from rfl] at key
      simp only [List.cons_append, List.append_assoc, List.nil_append] at key
      rw [key]

/-- The element loop of `parse_array` reads back a printed non-empty element list. -/
theorem parseElems_printTail : ∀ (l : List JSON) (fmt : Bool) (d n len fuel : Nat)
    (acc : List JSON) (ws rest : Bytes),
    JSON.NumsNormalList l → JSON.depthList l ≤ n → l.length ≤ fuel →
    (∀ c ∈ ws, isWs c = true) → NumEnd rest →
    match l with
    | [] => True
    | x :: xs =>
      (ws ++ (printValue fmt d x ++ printTail fmt d xs) ++ rest).length ≤ len →
      parseElems (parseValue n len) fuel (ws ++ (printValue fmt d x ++ printTail fmt d xs) ++ rest)
        acc = some (acc.reverse ++ x :: xs, rest)
  | [], _, _, _, _, _, _, _, _, _, _, _, _, _ => trivial
  | x :: xs, fmt, d, n, len, fuel, acc, ws, rest, hv, hd, hf, hws, hr => by
    intro hl
    simp only [List.length_append] at hl
    simp only [JSON.NumsNormalList] at hv
    simp only [JSON.depthList] at hd
    cases fuel with
    | zero => simp at hf
    | succ fuel =>
      have hx := parseValue_printValue x fmt d n len (printTail fmt d xs ++ rest) hv.1 (by omega)
        (numEnd_printTail fmt d xs rest) (by simp only [List.length_append]; omega)
      have hsk := skipWs_printValue fmt d x hv.1 ws (printTail fmt d xs ++ rest) hws
      simp only [List.append_assoc]
      rw [parseElems, hsk, hx]
      cases xs with
      | nil => simp [printTail, skipWs, List.dropWhile, isWs]
      | cons y ys =>
        have ih := parseElems_printTail (y :: ys) fmt d n len fuel (x :: acc) (sp fmt) rest hv.2
          (by omega) (by simpa using hf) (isWs_sp fmt) hr
          (by simp only [printTail, List.length_append, List.length_cons] at hl ⊢; omega)
        simp only [List.append_assoc] at ih
        simp only [printTail, List.cons_append, List.append_assoc]
        rw [skipWs_cons_of_not (by decide)]
        simp only [ite_true]
        rw [ih]; simp

/-- The member loop of `parse_object` reads back a printed non-empty member list. -/
theorem parseMembers_printMembers : ∀ (l : List (Bytes × JSON)) (fmt : Bool) (d n len fuel : Nat)
    (acc : List (Bytes × JSON)) (ws rest : Bytes),
    JSON.NumsNormalMembers l → JSON.depthMembers l ≤ n → l.length ≤ fuel →
    (∀ c ∈ ws, isWs c = true) → NumEnd rest →
    match l with
    | [] => True
    | (k, x) :: ms =>
      (ws ++ printStr k ++ 58 :: (tab fmt ++ printValue fmt d x ++ printMembers fmt d ms)
        ++ rest).length ≤ len →
      parseMembers (parseValue n len) len fuel
        (ws ++ printStr k ++ 58 :: (tab fmt ++ printValue fmt d x ++ printMembers fmt d ms) ++ rest)
        acc = some (acc.reverse ++ (k, x) :: ms, rest)
  | [], _, _, _, _, _, _, _, _, _, _, _, _, _ => trivial
  | (k, x) :: ms, fmt, d, n, len, fuel, acc, ws, rest, hv, hd, hf, hws, hr => by
    intro hl
    have hkl := length_le_flatMap_escape k
    simp only [printStr, List.length_append, List.length_cons, List.length_nil] at hl
    simp only [JSON.NumsNormalMembers] at hv
    simp only [JSON.depthMembers] at hd
    cases fuel with
    | zero => simp at hf
    | succ fuel =>
      have hx := parseValue_printValue x fmt d n len (printMembers fmt d ms ++ rest) hv.1
        (by omega) (numEnd_printMembers fmt d ms rest)
        (by simp only [List.length_append]; omega)
      have hsk := skipWs_printValue fmt d x hv.1 (tab fmt) (printMembers fmt d ms ++ rest)
        (isWs_tab fmt)
      have hkey : parseStrBody len (k.flatMap escapeByte ++ 34 :: 58 :: (tab fmt ++
          (printValue fmt d x ++ (printMembers fmt d ms ++ rest)))) [] =
          some (k, 58 :: (tab fmt ++ (printValue fmt d x ++ (printMembers fmt d ms ++ rest)))) := by
        rw [parseStrBody_escape k len [] _ (by omega)]; rfl
      have hws' := skipWs_append ws
        (34 :: (k.flatMap escapeByte ++ 34 :: 58 :: (tab fmt ++ (printValue fmt d x ++
          (printMembers fmt d ms ++ rest))))) hws
      rw [skipWs_cons_of_not (by decide)] at hws'
      rw [show printStr k = 34 :: (k.flatMap escapeByte ++ [34]) from rfl]
      simp only [List.append_assoc, List.cons_append, List.nil_append]
      rw [parseMembers, hws']
      simp only [ite_true, hkey]
      rw [skipWs_cons_of_not (by decide)]
      simp only [ite_true, hsk, hx]
      cases ms with
      | nil =>
        have h := skipWs_append (nl fmt ++ tabs fmt (d - 1)) (125 :: rest)
          (isWs_append (isWs_nl fmt) (isWs_tabs fmt (d - 1)))
        rw [skipWs_cons_of_not (by decide)] at h
        simp only [List.append_assoc] at h
        simp [printMembers, h]
      | cons m ms' =>
        obtain ⟨k', y⟩ := m
        have ih := parseMembers_printMembers ((k', y) :: ms') fmt d n len fuel ((k, x) :: acc)
          (nl fmt ++ tabs fmt d) rest hv.2 (by omega) (by simpa using hf)
          (isWs_append (isWs_nl fmt) (isWs_tabs fmt d)) hr
          (by simp only [printMembers, List.length_append, List.length_cons] at hl ⊢; omega)
        simp only [List.append_assoc, List.cons_append] at ih
        simp only [printMembers, List.cons_append, List.append_assoc]
        rw [skipWs_cons_of_not (by decide)]
        simp only [show ((44 : UInt8) = 44) = True by decide, ite_true]
        rw [ih]; simp
end

/-! ### Top level -/

theorem parseWithOpts_printValue (v : JSON) (fmt req : Bool) (hv : v.WF) :
    parseWithOpts (printValue fmt 0 v) req = some (v, []) := by
  obtain ⟨c, r, hc, hh⟩ := printValue_head fmt 0 v hv.1
  have key := parseValue_printValue v fmt 0 nestingLimit (printValue fmt 0 v).length [] hv.1 hv.2
    (by intro c hc; simp at hc) (by simp)
  have hbom : skipBom (c :: r) = c :: r := by
    have : c ≠ 0xEF := ne_of_toNat_ne (by have := hh.2.2.2; simp; omega)
    unfold skipBom; split
    · rename_i h; simp at h; exact absurd h.1 this
    · rfl
  rw [List.append_nil] at key
  unfold parseWithOpts
  rw [hc, hbom, skipWs_cons_of_not hh.1, ← hc, key]
  cases req <;> simp [skipWs]

/-! ### What the parser can return -/

theorem normal_of_normalize (m : Nat) (e : Int) (neg : Bool) :
    Num.Normal { mant := if neg then -((normalize m e).1 : Int) else (normalize m e).1,
                 exp := (normalize m e).2 } := by
  unfold Num.Normal
  rcases normalize_canonical m e with ⟨h1, h2⟩ | h
  · cases neg <;> simp [h1, h2]
  · cases neg
    · simp only [Bool.false_eq_true, ite_false]
      rw [if_neg' (by omega)]; omega
    · simp only [ite_true]
      rw [if_neg' (by omega)]; omega

theorem parseNumber_normal {s : Bytes} {x : Num} {r : Bytes} (h : parseNumber s = some (x, r)) :
    x.Normal := by
  unfold parseNumber at h
  cases hu : parseUnsigned (if s.head? = some 45 then s.tail else s) with
  | none => simp [hu] at h
  | some pr =>
    obtain ⟨p, r'⟩ := pr
    simp only [hu, Option.some.injEq, Prod.mk.injEq] at h
    generalize (if s.head? = some 45 then s.tail else s) = s1 at hu
    unfold parseUnsigned at hu
    by_cases hi : (parseInt s1).1 = []
    · simp [hi] at hu
    · simp only [hi, ite_false, Option.some.injEq, Prod.mk.injEq] at hu
      rw [← h.1, ← hu.1]
      have := normal_of_normalize
        (natOf ((parseInt s1).1 ++ (parseFrac (parseInt s1).2).1))
        ((parseExp (parseFrac (parseInt s1).2).2).1 - ((parseFrac (parseInt s1).2).1.length : Int))
        (decide (s.head? = some 45))
      simpa using this

theorem parseScalar_wf {len : Nat} {s : Bytes} {v : JSON} {r : Bytes}
    (h : parseScalar len s = some (v, r)) :
    v.NumsNormal ∧ v.depth = 0 := by
  cases s with
  | nil => simp [parseScalar] at h
  | cons c t =>
    by_cases hnum : c = 45 ∨ isDigit c = true
    · simp only [parseScalar, hnum, ite_true] at h
      cases hn : parseNumber (c :: t) with
      | none => simp [hn] at h
      | some p =>
        obtain ⟨x, r'⟩ := p
        simp only [hn, Option.some.injEq, Prod.mk.injEq] at h
        rw [← h.1]
        exact ⟨by simpa [JSON.NumsNormal] using parseNumber_normal hn, by simp [JSON.depth]⟩
    · simp only [parseScalar, hnum, ite_false] at h
      by_cases hq : c = 34
      · simp only [hq, ite_true] at h
        cases hs : parseStrBody len t [] with
        | none => simp [hs] at h
        | some p =>
          obtain ⟨b, r'⟩ := p
          simp only [hs, Option.some.injEq, Prod.mk.injEq] at h
          rw [← h.1]; simp [JSON.NumsNormal, JSON.depth]
      · simp only [hq, ite_false] at h
        split at h
        all_goals first
          | (simp only [Option.some.injEq, Prod.mk.injEq] at h
             rw [← h.1]; simp [JSON.NumsNormal, JSON.depth])
          | simp at h

theorem normalList_of_forall {n : Nat} {xs : List JSON}
    (h : ∀ a ∈ xs, a.NumsNormal ∧ a.depth ≤ n) :
    JSON.NumsNormalList xs ∧ JSON.depthList xs ≤ n := by
  induction xs with
  | nil => simp [JSON.NumsNormalList, JSON.depthList]
  | cons x xs ih =>
    have hx := h x (by simp)
    have := ih (fun a ha => h a (by simp [ha]))
    simp only [JSON.NumsNormalList, JSON.depthList]
    exact ⟨⟨hx.1, this.1⟩, by omega⟩

theorem normalMembers_of_forall {n : Nat} {ms : List (Bytes × JSON)}
    (h : ∀ a ∈ ms, a.2.NumsNormal ∧ a.2.depth ≤ n) :
    JSON.NumsNormalMembers ms ∧ JSON.depthMembers ms ≤ n := by
  induction ms with
  | nil => simp [JSON.NumsNormalMembers, JSON.depthMembers]
  | cons m ms ih =>
    obtain ⟨k, x⟩ := m
    have hx : x.NumsNormal ∧ x.depth ≤ n := h (k, x) (by simp)
    have := ih (fun a ha => h a (by simp [ha]))
    simp only [JSON.NumsNormalMembers, JSON.depthMembers]
    exact ⟨⟨hx.1, this.1⟩, by omega⟩

theorem parseElems_inv (P : JSON → Prop) (pv : Bytes → Option (JSON × Bytes))
    (hpv : ∀ s v r, pv s = some (v, r) → P v) :
    ∀ (fuel : Nat) (s : Bytes) (acc xs : List JSON) (r : Bytes),
      (∀ a ∈ acc, P a) → parseElems pv fuel s acc = some (xs, r) → ∀ a ∈ xs, P a := by
  intro fuel
  induction fuel with
  | zero => intro s acc xs r _ h; simp [parseElems] at h
  | succ fuel ih =>
    intro s acc xs r hacc h
    unfold parseElems at h
    cases hp : pv (skipWs s) with
    | none => simp [hp] at h
    | some p =>
      obtain ⟨v, r1⟩ := p
      have hv := hpv _ _ _ hp
      have hacc' : ∀ a ∈ v :: acc, P a := by
        intro a ha; simp at ha; rcases ha with ha | ha
        · subst ha; exact hv
        · exact hacc a ha
      simp only [hp] at h
      cases h1 : skipWs r1 with
      | nil => simp [h1] at h
      | cons c r2 =>
        simp only [h1] at h
        by_cases h44 : c = 44
        · simp only [h44, ite_true] at h; exact ih _ _ _ _ hacc' h
        · simp only [h44, ite_false] at h
          by_cases h93 : c = 93
          · simp only [h93, ite_true, Option.some.injEq, Prod.mk.injEq] at h
            intro a ha; rw [← h.1] at ha
            exact hacc' a (List.mem_reverse.mp ha)
          · simp [h93] at h

theorem parseMembers_inv (P : JSON → Prop) (pv : Bytes → Option (JSON × Bytes)) (len : Nat)
    (hpv : ∀ s v r, pv s = some (v, r) → P v) :
    ∀ (fuel : Nat) (s : Bytes) (acc ms : List (Bytes × JSON)) (r : Bytes),
      (∀ a ∈ acc, P a.2) → parseMembers pv len fuel s acc = some (ms, r) → ∀ a ∈ ms, P a.2 := by
  intro fuel
  induction fuel with
  | zero => intro s acc xs r _ h; simp [parseMembers] at h
  | succ fuel ih =>
    intro s acc ms r hacc h
    unfold parseMembers at h
    cases hs : skipWs s with
    | nil => simp [hs] at h
    | cons q r0 =>
      simp only [hs] at h
      by_cases hq : q = 34
      · simp only [hq, ite_true] at h
        cases hk : parseStrBody len r0 [] with
        | none => simp [hk] at h
        | some p =>
          obtain ⟨k, r1⟩ := p
          simp only [hk] at h
          cases h1 : skipWs r1 with
          | nil => simp [h1] at h
          | cons c r2 =>
            simp only [h1] at h
            by_cases hc : c = 58
            · simp only [hc, ite_true] at h
              cases hp : pv (skipWs r2) with
              | none => simp [hp] at h
              | some p =>
                obtain ⟨v, r3⟩ := p
                simp only [hp] at h
                have hv := hpv _ _ _ hp
                have hacc' : ∀ a ∈ (k, v) :: acc, P a.2 := by
                  intro a ha; simp at ha; rcases ha with ha | ha
                  · subst ha; exact hv
                  · exact hacc a ha
                cases h3 : skipWs r3 with
                | nil => simp [h3] at h
                | cons c' r4 =>
                  simp only [h3] at h
                  by_cases h44 : c' = 44
                  · simp only [h44, ite_true] at h; exact ih _ _ _ _ hacc' h
                  · simp only [h44, ite_false] at h
                    by_cases h125 : c' = 125
                    · simp only [h125, ite_true, Option.some.injEq, Prod.mk.injEq] at h
                      intro a ha; rw [← h.1] at ha
                      exact hacc' a (List.mem_reverse.mp ha)
                    · simp [h125] at h
            · simp [hc] at h
      · simp [hq] at h

/-- Everything `parse_value` returns has canonical numbers and nesting within the fuel. -/
theorem parseValue_wf : ∀ (n len : Nat) (s : Bytes) (v : JSON) (r : Bytes),
    parseValue n len s = some (v, r) → v.NumsNormal ∧ v.depth ≤ n := by
  intro n
  induction n with
  | zero =>
    intro len s v r h
    have := parseScalar_wf (show parseScalar len s = some (v, r) from h)
    exact ⟨this.1, by omega⟩
  | succ n ih =>
    intro len s v r h
    by_cases h91 : s.head? = some 91
    · simp only [parseValue, h91, ite_true] at h
      by_cases h93 : (skipWs s.tail).head? = some 93
      · simp only [h93, ite_true, Option.some.injEq, Prod.mk.injEq] at h
        rw [← h.1]; simp [JSON.NumsNormal, JSON.NumsNormalList, JSON.depth, JSON.depthList]
      · simp only [h93, ite_false] at h
        cases he : parseElems (parseValue n len) len (skipWs s.tail) [] with
        | none => simp [he] at h
        | some p =>
          obtain ⟨xs, r'⟩ := p
          simp only [he, Option.some.injEq, Prod.mk.injEq] at h
          have := normalList_of_forall
            (parseElems_inv (fun a => a.NumsNormal ∧ a.depth ≤ n) _ (ih len) _ _ _ _ _ (by simp) he)
          rw [← h.1]; simp only [JSON.NumsNormal, JSON.depth]; exact ⟨this.1, by omega⟩
    · simp only [parseValue, h91, ite_false] at h
      by_cases h123 : s.head? = some 123
      · simp only [h123, ite_true] at h
        by_cases h125 : (skipWs s.tail).head? = some 125
        · simp only [h125, ite_true, Option.some.injEq, Prod.mk.injEq] at h
          rw [← h.1]
          simp [JSON.NumsNormal, JSON.NumsNormalMembers, JSON.depth, JSON.depthMembers]
        · simp only [h125, ite_false] at h
          cases he : parseMembers (parseValue n len) len len (skipWs s.tail) [] with
          | none => simp [he] at h
          | some p =>
            obtain ⟨ms, r'⟩ := p
            simp only [he, Option.some.injEq, Prod.mk.injEq] at h
            have := normalMembers_of_forall
              (parseMembers_inv (fun a => a.NumsNormal ∧ a.depth ≤ n) _ len (ih len) _ _ _ _ _ (by simp) he)
            rw [← h.1]; simp only [JSON.NumsNormal, JSON.depth]; exact ⟨this.1, by omega⟩
      · simp only [h123, ite_false] at h
        have := parseScalar_wf h
        exact ⟨this.1, by omega⟩

theorem parseWithOpts_wf {s : Bytes} {req : Bool} {v : JSON} {r : Bytes}
    (h : parseWithOpts s req = some (v, r)) : v.WF := by
  unfold parseWithOpts at h
  split at h
  · simp at h
  · rename_i v' r' hp
    have hw := parseValue_wf _ _ _ _ _ hp
    have : v = v' := by
      split at h
      · split at h
        · simp at h; exact h.1.symm
        · simp at h
      · simp at h; exact h.1.symm
    rw [this]; exact hw

end CJson
