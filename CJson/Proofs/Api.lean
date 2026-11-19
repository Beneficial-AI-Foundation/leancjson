import CJson.Api
import CJson.Str
import CJson.Proofs.Number

/-! Supporting lemmas for the tree API. Specs live in `CJson/Spec.lean`. -/

set_option linter.unusedSimpArgs false

namespace CJson

theorem keyEq_refl (cs : Bool) (a : Bytes) : keyEq cs a a = true := by
  unfold keyEq; split <;> simp

theorem utf8Decode_two (a b : UInt8) :
    utf8Decode [a, b] = some ((a.toNat - 0xC0) * 64 + (b.toNat - 0x80)) := rfl
theorem utf8Decode_three (a b c : UInt8) :
    utf8Decode [a, b, c] =
      some ((a.toNat - 0xE0) * 4096 + (b.toNat - 0x80) * 64 + (c.toNat - 0x80)) := rfl
theorem utf8Decode_four (a b c d : UInt8) :
    utf8Decode [a, b, c, d] =
      some ((a.toNat - 0xF0) * 262144 + (b.toNat - 0x80) * 4096 + (c.toNat - 0x80) * 64
        + (d.toNat - 0x80)) := rfl

theorem utf8Decode_utf8 (cp : Nat) (h : cp < 0x110000) : utf8Decode (utf8 cp) = some cp := by
  unfold utf8
  split
  · simp [utf8Decode, toNat_toUInt8 cp (by omega)]; omega
  split
  · have e1 := toNat_toUInt8 (0xC0 + cp / 64) (by omega)
    have e2 := toNat_toUInt8 (0x80 + cp % 64) (by omega)
    rw [utf8Decode_two, e1, e2]
    simp only [Option.some.injEq]; omega
  split
  · have e1 := toNat_toUInt8 (0xE0 + cp / 4096) (by omega)
    have e2 := toNat_toUInt8 (0x80 + cp / 64 % 64) (by omega)
    have e3 := toNat_toUInt8 (0x80 + cp % 64) (by omega)
    rw [utf8Decode_three, e1, e2, e3]
    simp only [Option.some.injEq]; omega
  · have e1 := toNat_toUInt8 (0xF0 + cp / 262144) (by omega)
    have e2 := toNat_toUInt8 (0x80 + cp / 4096 % 64) (by omega)
    have e3 := toNat_toUInt8 (0x80 + cp / 64 % 64) (by omega)
    have e4 := toNat_toUInt8 (0x80 + cp % 64) (by omega)
    rw [utf8Decode_four, e1, e2, e3, e4]
    simp only [Option.some.injEq]; omega

namespace JSON

theorem all2_symm {α} (f g : α → α → Bool) (h : ∀ x y, f x y = g y x) :
    ∀ xs ys, all2 f xs ys = all2 g ys xs
  | [], [] => rfl
  | [], _ :: _ => rfl
  | _ :: _, [] => rfl
  | x :: xs, y :: ys => by simp [all2, h x y, all2_symm f g h xs ys]

theorem compareF_symm (cs : Bool) : ∀ (f : Nat) (a b : JSON),
    compareF cs f a b = compareF cs f b a := by
  intro f
  induction f with
  | zero => intro a b; rfl
  | succ f ih =>
    intro a b
    cases a <;> cases b <;> simp only [compareF]
    · exact BEq.comm
    · exact BEq.comm
    · exact BEq.comm
    · exact all2_symm _ _ ih _ _
    · exact Bool.and_comm _ _

theorem lookup_self (cs : Bool) : ∀ (ms : List (Bytes × JSON)),
    ms.Pairwise (fun a b => keyEq cs a.1 b.1 = false) → ∀ m ∈ ms, lookup cs ms m.1 = some m.2
  | [], _, m, hm => by simp at hm
  | h :: t, hp, m, hm => by
    rw [List.pairwise_cons] at hp
    rcases List.mem_cons.mp hm with e | e
    · subst e; simp [lookup, List.find?, keyEq_refl]
    · have := lookup_self cs t hp.2 m e
      simp only [lookup, List.find?, hp.1 m e] at this ⊢
      exact this

mutual
theorem compareF_refl (cs : Bool) : ∀ (v : JSON) (f : Nat),
    v.depth < f → UniqueKeys cs v → compareF cs f v v = true
  | .null, f, hf, _ => by cases f <;> simp [compareF] at *
  | .bool _, f, hf, _ => by cases f <;> simp [compareF] at *
  | .number _, f, hf, _ => by cases f <;> simp [compareF] at *
  | .string _, f, hf, _ => by cases f <;> simp [compareF] at *
  | .array xs, f, hf, hu => by
    cases f with
    | zero => simp at hf
    | succ f =>
      simp only [compareF]
      exact all2_refl cs xs f (by simp [depth] at hf; omega) (by simpa [UniqueKeys] using hu)
  | .object ms, f, hf, hu => by
    cases f with
    | zero => simp at hf
    | succ f =>
      simp only [UniqueKeys] at hu
      have key : ∀ m ∈ ms, (match lookup cs ms m.1 with
          | some y => compareF cs f m.2 y
          | none => false) = true := by
        intro m hm
        rw [lookup_self cs ms hu.1 m hm]
        exact members_refl cs ms f (by simp [depth] at hf; omega) hu.2 m hm
      simp only [compareF, Bool.and_self, List.all_eq_true]
      exact key
theorem all2_refl (cs : Bool) : ∀ (xs : List JSON) (f : Nat),
    depthList xs < f → UniqueKeysList cs xs → all2 (compareF cs f) xs xs = true
  | [], _, _, _ => rfl
  | x :: xs, f, hf, hu => by
    simp only [depthList] at hf
    simp only [UniqueKeysList] at hu
    simp [all2, compareF_refl cs x f (by omega) hu.1, all2_refl cs xs f (by omega) hu.2]
theorem members_refl (cs : Bool) : ∀ (ms : List (Bytes × JSON)) (f : Nat),
    depthMembers ms < f → UniqueKeysMembers cs ms → ∀ m ∈ ms, compareF cs f m.2 m.2 = true
  | [], _, _, _, m, hm => by simp at hm
  | (k, x) :: ms, f, hf, hu, m, hm => by
    simp only [depthMembers] at hf
    simp only [UniqueKeysMembers] at hu
    rcases List.mem_cons.mp hm with e | e
    · subst e; exact compareF_refl cs x f (by omega) hu.1
    · exact members_refl cs ms f (by omega) hu.2 m e
end

end JSON
end CJson
