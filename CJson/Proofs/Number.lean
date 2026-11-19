import CJson.Number

/-! Supporting lemmas for number printing/parsing. Specs live in `CJson/Spec.lean`. -/

set_option linter.unusedSimpArgs false

namespace CJson

theorem if_pos' {c : Prop} [Decidable c] {α : Sort _} {t e : α} (h : c) :
    (if c then t else e) = t := by simp [h]

theorem if_neg' {c : Prop} [Decidable c] {α : Sort _} {t e : α} (h : ¬c) :
    (if c then t else e) = e := by simp [h]

theorem toNat_toUInt8 (n : Nat) (h : n < 256) : n.toUInt8.toNat = n := by
  simp [Nat.toUInt8, UInt8.toNat_ofNat']; omega

theorem ne_of_toNat_ne {a b : UInt8} (h : a.toNat ≠ b.toNat) : a ≠ b := fun e => h (e ▸ rfl)

theorem digitByte_toNat {d : Nat} (h : d < 10) : (digitByte d).toNat = 48 + d := by
  unfold digitByte; rw [toNat_toUInt8]; omega

theorem isDigit_iff (c : UInt8) : isDigit c = true ↔ 48 ≤ c.toNat ∧ c.toNat ≤ 57 := by
  simp [isDigit]

theorem isDigit_digitByte {d : Nat} (h : d < 10) : isDigit (digitByte d) = true := by
  rw [isDigit_iff, digitByte_toNat h]; omega

/-! ### natOf -/

theorem natOf_foldl (ds : Bytes) (a : Nat) :
    ds.foldl (fun a c => a * 10 + (c.toNat - 48)) a = a * 10 ^ ds.length + natOf ds := by
  induction ds generalizing a with
  | nil => simp [natOf]
  | cons c r ih =>
    simp only [List.foldl_cons, natOf, List.length_cons]
    rw [ih, ih (0 * 10 + _)]
    simp [Nat.pow_succ, Nat.add_mul, Nat.mul_assoc, Nat.mul_comm 10, Nat.add_assoc]

theorem natOf_append (a b : Bytes) : natOf (a ++ b) = natOf a * 10 ^ b.length + natOf b := by
  simp only [natOf, List.foldl_append]
  exact natOf_foldl b _

theorem natOf_singleton (c : UInt8) : natOf [c] = c.toNat - 48 := by simp [natOf]

theorem natOf_zeros (n : Nat) : natOf (List.replicate n 48) = 0 := by
  induction n with
  | zero => rfl
  | succ n ih =>
    rw [List.replicate_succ,
      show (48 : UInt8) :: List.replicate n 48 = [48] ++ List.replicate n 48 from rfl,
      natOf_append, ih]; simp [natOf]

/-! ### natDigits -/

theorem digitsAux_acc (f n : Nat) (acc : Bytes) :
    digitsAux f n acc = digitsAux f n [] ++ acc := by
  induction f generalizing n acc with
  | zero => simp [digitsAux]
  | succ f ih =>
    unfold digitsAux
    split
    · simp
    · rw [ih, ih (n / 10) [_]]; simp

theorem digitsAux_fuel (f g n : Nat) (acc : Bytes) (hf : n < f) (hg : n < g) :
    digitsAux f n acc = digitsAux g n acc := by
  induction f generalizing g n acc with
  | zero => omega
  | succ f ih =>
    cases g with
    | zero => omega
    | succ g =>
      unfold digitsAux
      split
      · rfl
      · exact ih _ _ _ (by omega) (by omega)

/-- Fuel-free unfolding of `natDigits`. -/
theorem natDigits_eq (n : Nat) :
    natDigits n = if n < 10 then [digitByte n] else natDigits (n / 10) ++ [digitByte (n % 10)] := by
  unfold natDigits
  rw [digitsAux]
  split
  · rfl
  · rw [digitsAux_acc, digitsAux_fuel n (n / 10 + 1) _ _ (by omega) (by omega)]

theorem natOf_natDigits (n : Nat) : natOf (natDigits n) = n := by
  induction n using Nat.strongRecOn with
  | _ n ih =>
    rw [natDigits_eq]
    split
    · rw [natOf_singleton, digitByte_toNat (by omega)]; omega
    · rw [natOf_append, ih _ (by omega), natOf_singleton, digitByte_toNat (by omega)]
      simp; omega

theorem natDigits_isDigit (n : Nat) : ∀ c ∈ natDigits n, isDigit c = true := by
  induction n using Nat.strongRecOn with
  | _ n ih =>
    rw [natDigits_eq]
    split
    · intro c hc; simp at hc; subst hc; exact isDigit_digitByte (by omega)
    · intro c hc
      simp at hc
      rcases hc with hc | hc
      · exact ih _ (by omega) c hc
      · subst hc; exact isDigit_digitByte (by omega)

theorem natDigits_zero : natDigits 0 = [48] := by decide

theorem natDigits_head (n : Nat) (h : 0 < n) : ∃ c t, natDigits n = c :: t ∧ c ≠ 48 := by
  induction n using Nat.strongRecOn with
  | _ n ih =>
    rw [natDigits_eq]
    split
    · refine ⟨_, [], rfl, ne_of_toNat_ne ?_⟩
      rw [digitByte_toNat (by omega)]; simp; omega
    · obtain ⟨c, t, hc, hne⟩ := ih (n / 10) (by omega) (by omega)
      exact ⟨c, t ++ [_], by rw [hc]; rfl, hne⟩

theorem natDigits_ne_nil (n : Nat) : natDigits n ≠ [] := by
  rw [natDigits_eq]; split <;> simp

/-! ### normalize -/

theorem normAux_fuel (f g m : Nat) (e : Int) (hm : m ≠ 0) (hf : m ≤ f) (hg : m ≤ g) :
    normAux f m e = normAux g m e := by
  induction f generalizing g m e with
  | zero => omega
  | succ f ih =>
    cases g with
    | zero => omega
    | succ g =>
      unfold normAux
      split
      · exact ih _ _ _ (by omega) (by omega) (by omega)
      · rfl

theorem normalize_zero (e : Int) : normalize 0 e = (0, 0) := by simp [normalize]

/-- Fuel-free unfolding of `normalize`. -/
theorem normalize_eq (m : Nat) (e : Int) (hm : m ≠ 0) :
    normalize m e = if m % 10 = 0 then normalize (m / 10) (e + 1) else (m, e) := by
  unfold normalize
  simp only [hm, ite_false]
  cases m with
  | zero => omega
  | succ k =>
    rw [normAux]
    split
    · have : (k + 1) / 10 ≠ 0 := by omega
      simp only [this, ite_false]
      exact normAux_fuel _ _ _ _ this (by omega) (by omega)
    · rfl

theorem normalize_normal (m : Nat) (e : Int) (h : m % 10 ≠ 0) : normalize m e = (m, e) := by
  rw [normalize_eq m e (by omega)]; simp [h]

theorem normalize_mul_pow (m j : Nat) (e : Int) (hm : m ≠ 0) :
    normalize (m * 10 ^ j) e = normalize m (e + j) := by
  induction j generalizing e with
  | zero => simp
  | succ j ih =>
    have h1 : m * 10 ^ (j + 1) ≠ 0 := Nat.mul_ne_zero hm (by simp)
    rw [normalize_eq _ _ h1, Nat.pow_succ, ← Nat.mul_assoc]
    simp only [Nat.mul_mod_left, ite_true, Nat.mul_div_cancel _ (show 0 < 10 by omega)]
    rw [ih]; congr 1; push_cast; omega

/-- `normalize` always returns a canonical pair. -/
theorem normalize_canonical (m : Nat) (e : Int) :
    (normalize m e).1 = 0 ∧ (normalize m e).2 = 0 ∨ (normalize m e).1 % 10 ≠ 0 := by
  induction m using Nat.strongRecOn generalizing e with
  | _ m ih =>
    by_cases hm : m = 0
    · subst hm; left; simp [normalize]
    · rw [normalize_eq m e hm]
      split
      · exact ih _ (by omega) _
      · right; assumption

/-! ### Parsing pieces -/

/-- The next byte cannot continue a run of digits. -/
def NoDigitHead (rest : Bytes) : Prop := ∀ c, rest.head? = some c → isDigit c = false

/-- The next byte cannot continue a number: not a digit, `.`, `e` or `E`. -/
def NumEnd (rest : Bytes) : Prop :=
  ∀ c, rest.head? = some c → isDigit c = false ∧ c ≠ 46 ∧ c ≠ 101 ∧ c ≠ 69

theorem NumEnd.noDigit {rest : Bytes} (h : NumEnd rest) : NoDigitHead rest :=
  fun c hc => (h c hc).1

theorem takeWhile_digits (ds rest : Bytes) (h : ∀ c ∈ ds, isDigit c = true)
    (hr : NoDigitHead rest) :
    (ds ++ rest).takeWhile isDigit = ds ∧ (ds ++ rest).dropWhile isDigit = rest := by
  induction ds with
  | nil =>
    cases rest with
    | nil => simp
    | cons c r => have := hr c rfl; simp [this]
  | cons d ds ih =>
    have hd := h d (by simp)
    have := ih (fun c hc => h c (by simp [hc]))
    simp [hd, this]

theorem parseExp_none (rest : Bytes) (h : NumEnd rest) : parseExp rest = (0, rest) := by
  cases rest with
  | nil => rfl
  | cons c r =>
    have := h c rfl
    simp [parseExp, this]

theorem parseExp_some (neg : Bool) (ds rest : Bytes) (hne : ds ≠ [])
    (h : ∀ c ∈ ds, isDigit c = true) (hr : NoDigitHead rest) :
    parseExp (101 :: (if neg then 45 else 43) :: (ds ++ rest)) =
      ((if neg then -(natOf ds : Int) else natOf ds), rest) := by
  have ⟨h1, h2⟩ := takeWhile_digits ds rest h hr
  cases neg <;> simp [parseExp, h1, h2, hne]

theorem parseFrac_none (rest : Bytes) (h : ∀ c, rest.head? = some c → c ≠ 46) :
    parseFrac rest = ([], rest) := by
  cases rest with
  | nil => rfl
  | cons c r => have := h c rfl; simp [parseFrac, this]

theorem parseFrac_some (ds rest : Bytes) (hne : ds ≠ [])
    (h : ∀ c ∈ ds, isDigit c = true) (hr : NoDigitHead rest) :
    parseFrac (46 :: (ds ++ rest)) = (ds, rest) := by
  have ⟨h1, h2⟩ := takeWhile_digits ds rest h hr
  simp [parseFrac, h1, h2, hne]

theorem parseInt_zero (rest : Bytes) : parseInt (48 :: rest) = ([48], rest) := by
  simp [parseInt]

theorem parseInt_digits (c : UInt8) (t rest : Bytes) (hc : c ≠ 48)
    (h : ∀ d ∈ c :: t, isDigit d = true) (hr : NoDigitHead rest) :
    parseInt (c :: t ++ rest) = (c :: t, rest) := by
  have ⟨h1, h2⟩ := takeWhile_digits (c :: t) rest h hr
  simp only [parseInt, List.cons_append, hc, ite_false]
  rw [← List.cons_append, h1, h2]

theorem parseInt_one (c : UInt8) (rest : Bytes) (h : isDigit c = true) (hr : NoDigitHead rest) :
    parseInt (c :: rest) = ([c], rest) := by
  by_cases hc : c = 48
  · subst hc; exact parseInt_zero rest
  · exact parseInt_digits c [] rest hc (by simpa using h) hr

/-! ### Round trip of the unsigned part -/

theorem noDigitHead_cons {c : UInt8} {r : Bytes} (h : isDigit c = false) :
    NoDigitHead (c :: r) := by
  intro d hd; simp at hd; subst hd; exact h

theorem natOf_pad2 (ds : Bytes) : natOf (pad2 ds) = natOf ds := by
  unfold pad2; split
  · rw [show (48 : UInt8) :: ds = [48] ++ ds from rfl, natOf_append]; simp [natOf]
  · rfl

theorem pad2_isDigit (ds : Bytes) (h : ∀ c ∈ ds, isDigit c = true) :
    ∀ c ∈ pad2 ds, isDigit c = true := by
  unfold pad2; split
  · intro c hc; simp at hc; rcases hc with hc | hc
    · subst hc; decide
    · exact h c hc
  · exact h

theorem pad2_ne_nil (ds : Bytes) : pad2 ds ≠ [] := by
  unfold pad2; split
  · simp
  · intro h; simp [h] at *

/-- What `parseUnsigned` returns on `int [. frac] [exp] rest`. -/
theorem parseUnsigned_parts (i f x rest : Bytes) (xv : Int)
    (hi : parseInt (i ++ ((if f = [] then [] else 46 :: f) ++ (x ++ rest))) =
      (i, (if f = [] then [] else 46 :: f) ++ (x ++ rest)))
    (hine : i ≠ [])
    (hf : ∀ c ∈ f, isDigit c = true)
    (hx : parseExp (x ++ rest) = (xv, rest))
    (hxh : ∀ c, (x ++ rest).head? = some c → isDigit c = false ∧ c ≠ 46) :
    parseUnsigned (i ++ ((if f = [] then [] else 46 :: f) ++ (x ++ rest))) =
      some (normalize (natOf (i ++ f)) (xv - f.length), rest) := by
  unfold parseUnsigned
  simp only [hi, hine, ite_false]
  by_cases hfe : f = []
  · subst hfe
    simp only [ite_true, List.nil_append]
    rw [parseFrac_none _ (fun c hc => (hxh c hc).2)]
    simp [hx]
  · simp only [hfe, ite_false, List.cons_append]
    rw [parseFrac_some f _ hfe hf (fun c hc => (hxh c hc).1)]
    simp [hx]

theorem parseUnsigned_printUnsigned (m : Nat) (e : Int) (rest : Bytes)
    (hz : m = 0 → e = 0) (hn : m ≠ 0 → m % 10 ≠ 0) (hr : NumEnd rest) :
    parseUnsigned (printUnsigned m e ++ rest) = some ((m, e), rest) := by
  have hdig := natDigits_isDigit m
  have hval := natOf_natDigits m
  have hx0 := parseExp_none rest hr
  have hrh : ∀ c, ([] ++ rest).head? = some c → isDigit c = false ∧ c ≠ 46 :=
    fun c hc => ⟨(hr c hc).1, (hr c hc).2.1⟩
  by_cases hm : m = 0
  · -- zero prints as "0"
    subst hm
    have he := hz rfl; subst he
    have := parseUnsigned_parts [48] [] [] rest 0 (by simpa using parseInt_zero rest)
      (by simp) (by simp) hx0 hrh
    simpa [printUnsigned, natDigits_zero, normalize, natOf] using this
  · obtain ⟨c, t, hct, hc48⟩ := natDigits_head m (by omega)
    have hnorm := hn hm
    unfold printUnsigned
    simp only []
    split
    · -- plain integer: digits followed by `e` zeros
      rename_i h
      have hall : ∀ d ∈ c :: (t ++ List.replicate e.toNat 48), isDigit d = true := by
        intro d hd
        simp only [List.mem_cons, List.mem_append, List.mem_replicate] at hd
        rcases hd with hd | hd | hd
        · exact hdig d (by rw [hct]; simp [hd])
        · exact hdig d (by rw [hct]; simp [hd])
        · rw [hd.2]; decide
      have := parseUnsigned_parts (natDigits m ++ List.replicate e.toNat 48) [] [] rest 0
        (by rw [hct]; simpa using parseInt_digits c _ rest hc48 hall hr.noDigit)
        (by rw [hct]; simp) (by simp) hx0 hrh
      simp only [ite_true, List.nil_append, List.append_nil, List.length_nil] at this
      rw [List.append_assoc] at *
      rw [this, natOf_append, natOf_zeros, hval, List.length_replicate, Nat.add_zero,
        normalize_mul_pow _ _ _ hm, normalize_normal _ _ hnorm]
      simp only [Option.some.injEq, Prod.mk.injEq, true_and, and_true]; omega
    · split
      · rename_i h1 h2
        split
        · -- ddd.ddd
          rename_i h3
          have hlen : (natDigits m).length = t.length + 1 := by rw [hct]; rfl
          generalize hj : ((natDigits m).length + e : Int).toNat = j at *
          have hj1 : 1 ≤ j := by omega
          have hjk : j < (natDigits m).length := by omega
          have htake : (natDigits m).take j = c :: t.take (j - 1) := by
            rw [hct]; cases j with
            | zero => omega
            | succ j => simp
          have hI : ∀ d ∈ c :: t.take (j - 1), isDigit d = true := by
            intro d hd; rw [← htake] at hd; exact hdig d (List.mem_of_mem_take hd)
          have hF : ∀ d ∈ (natDigits m).drop j, isDigit d = true :=
            fun d hd => hdig d (List.mem_of_mem_drop hd)
          have hFne : (natDigits m).drop j ≠ [] := by
            intro h; have := congrArg List.length h; simp at this; omega
          have := parseUnsigned_parts ((natDigits m).take j) ((natDigits m).drop j) [] rest 0
            (by
              rw [htake]; simp only [hFne, ite_false]
              exact parseInt_digits c _ _ hc48 hI (noDigitHead_cons (by decide)))
            (by rw [htake]; simp) hF hx0 hrh
          simp only [hFne, ite_false, List.nil_append, List.take_append_drop] at this
          simp only [List.append_assoc, List.cons_append] at this ⊢
          rw [this, hval, normalize_normal _ _ hnorm]
          simp only [Option.some.injEq, Prod.mk.injEq, true_and, and_true]
          simp only [List.length_drop]; omega
        · -- 0.000ddd
          rename_i h3
          generalize hz' : List.replicate (-e - ((natDigits m).length : Int)).toNat (48 : UInt8) = zs
          have hF : ∀ d ∈ zs ++ natDigits m, isDigit d = true := by
            intro d hd; simp only [List.mem_append] at hd
            rcases hd with hd | hd
            · rw [← hz'] at hd; rw [(List.mem_replicate.mp hd).2]; decide
            · exact hdig d hd
          have hFne : zs ++ natDigits m ≠ [] := by simp [natDigits_ne_nil]
          have := parseUnsigned_parts [48] (zs ++ natDigits m) [] rest 0
            (by simpa using parseInt_zero _) (by simp) hF hx0 hrh
          simp only [hFne, ite_false, List.nil_append] at this
          simp only [List.cons_append, List.append_assoc, List.nil_append] at this ⊢
          rw [this, show (48 : UInt8) :: (zs ++ natDigits m) = (48 :: zs) ++ natDigits m from rfl,
            natOf_append, hval]
          have : natOf (48 :: zs) = 0 := by
            rw [← hz', ← List.replicate_succ]; exact natOf_zeros _
          rw [this, normalize_normal _ _ (by omega)]
          simp only [Option.some.injEq, Prod.mk.injEq, true_and, and_true]
          rw [← hz']; simp only [List.length_append, List.length_replicate]; omega
      · -- scientific d.ddde±XX
        rename_i h1 h2
        generalize hxv : (e + ((natDigits m).length : Int) - 1) = x at *
        have hlen : (natDigits m).length = t.length + 1 := by rw [hct]; rfl
        have hXd := pad2_isDigit _ (natDigits_isDigit x.natAbs)
        have hexp := parseExp_some (decide (x < 0)) (pad2 (natDigits x.natAbs)) rest
          (pad2_ne_nil _) hXd hr.noDigit
        have hF : ∀ d ∈ t, isDigit d = true := fun d hd => hdig d (by rw [hct]; simp [hd])
        have := parseUnsigned_parts [c] t
          (101 :: (if x < 0 then 45 else 43) :: pad2 (natDigits x.natAbs)) rest
          (if x < 0 then -(natOf (pad2 (natDigits x.natAbs)) : Int)
            else natOf (pad2 (natDigits x.natAbs)))
          (by
            refine parseInt_one c _ (hdig c (by rw [hct]; simp)) ?_
            by_cases ht : t = []
            · simp only [ht, ite_true, List.nil_append, List.cons_append]
              exact noDigitHead_cons (by decide)
            · simp only [ht, ite_false, List.cons_append]
              exact noDigitHead_cons (by decide))
          (by simp) hF
          (by simpa using hexp)
          (by intro d hd; simp at hd; subst hd; decide)
        rw [hct]
        simp only [List.take_succ_cons, List.take_zero, List.drop_succ_cons, List.drop_zero,
          List.length_cons]
        have e1 : (if t.length + 1 > 1 then 46 :: t else []) = (if t = [] then [] else 46 :: t) := by
          cases t <;> simp
        rw [e1, List.append_assoc, List.append_assoc]
        simp only [List.cons_append, List.append_assoc, List.nil_append] at this ⊢
        rw [this, ← hct, hval, natOf_pad2, natOf_natDigits, normalize_normal _ _ hnorm]
        simp only [Option.some.injEq, Prod.mk.injEq, true_and, and_true]
        split <;> omega

/-- Round trip for signed numbers. -/
theorem parseNumber_printNum (n : Num) (rest : Bytes) (hn : n.Normal) (hr : NumEnd rest) :
    parseNumber (printNum n ++ rest) = some (n, rest) := by
  obtain ⟨mant, exp⟩ := n
  unfold Num.Normal at hn
  simp only at hn
  have hz : mant.natAbs = 0 → exp = 0 := by
    intro h; have : mant = 0 := by omega
    simpa [this] using hn
  have hnz : mant.natAbs ≠ 0 → mant.natAbs % 10 ≠ 0 := by
    intro h; have : mant ≠ 0 := by omega
    simp only [this, ite_false] at hn; omega
  have key := parseUnsigned_printUnsigned mant.natAbs exp rest hz hnz hr
  unfold parseNumber printNum
  by_cases hneg : mant < 0
  · simp only [hneg, ite_true, List.cons_append, List.nil_append, List.head?_cons, List.tail_cons,
      key]
    congr 2; simp; omega
  · -- the unsigned text starts with a digit, not '-'
    have hhead : (printUnsigned mant.natAbs exp ++ rest).head? ≠ some 45 := by
      intro h
      have hp := key
      unfold parseUnsigned at hp
      cases hs : printUnsigned mant.natAbs exp ++ rest with
      | nil => rw [hs] at hp; simp [parseInt] at hp
      | cons c r =>
        rw [hs] at h hp; simp at h; subst h
        simp [parseInt, isDigit] at hp
    simp only [hneg, ite_false, List.nil_append, hhead, key]
    congr 2; simp; omega

end CJson
