import CJson.Basic
import CJson.Number

/-!
# Tree API (cJSON_GetArraySize, cJSON_GetObjectItem, cJSON_AddItemTo…, cJSON_Detach…,
cJSON_InsertItemInArray, cJSON_Replace…, cJSON_Duplicate, cJSON_Compare)

cJSON mutates linked lists in place and reports failure with `false`/`NULL`; here every
operation is a pure function and failure is `none`.
-/

namespace CJson

/-- C `tolower` on ASCII. -/
def toLower (c : UInt8) : UInt8 := if 65 ≤ c.toNat ∧ c.toNat ≤ 90 then c + 32 else c

/-- Key comparison: exact (`cs = true`) or ASCII case-insensitive, as cJSON's
`compare_strings` / `case_insensitive_strcmp`. -/
def keyEq (cs : Bool) (a b : Bytes) : Bool :=
  if cs then a == b else a.map toLower == b.map toLower

/-- Replace the first element satisfying `p`. -/
def replaceFirst {α} (p : α → Bool) (y : α) : List α → Option (List α)
  | [] => none
  | x :: xs => if p x then some (y :: xs) else (replaceFirst p y xs).map (x :: ·)

/-- Remove the first element satisfying `p`, returning it and the rest. -/
def eraseFirst {α} (p : α → Bool) : List α → Option (α × List α)
  | [] => none
  | x :: xs => if p x then some (x, xs) else (eraseFirst p xs).map fun (y, r) => (y, x :: r)

namespace JSON

def isNull : JSON → Bool | .null => true | _ => false
def isBool : JSON → Bool | .bool _ => true | _ => false
def isTrue : JSON → Bool | .bool true => true | _ => false
def isFalse : JSON → Bool | .bool false => true | _ => false
def isNumber : JSON → Bool | .number _ => true | _ => false
def isString : JSON → Bool | .string _ => true | _ => false
def isArray : JSON → Bool | .array _ => true | _ => false
def isObject : JSON → Bool | .object _ => true | _ => false

/-- `cJSON_CreateNumber` for an integer. -/
def ofInt (i : Int) : JSON := .number (Num.ofInt i)

/-- `cJSON_CreateString`. -/
def str (s : String) : JSON := .string (bytes s)

/-- `cJSON_GetStringValue`. -/
def getStringValue : JSON → Option Bytes | .string s => some s | _ => none

/-- `cJSON_GetNumberValue`. -/
def getNumberValue : JSON → Option Num | .number n => some n | _ => none

/-- `cJSON_GetArraySize` (also counts object members, like cJSON). -/
def arraySize : JSON → Nat
  | .array xs => xs.length
  | .object ms => ms.length
  | _ => 0

/-- `cJSON_GetArrayItem`. -/
def getArrayItem : JSON → Nat → Option JSON
  | .array xs, i => xs[i]?
  | .object ms, i => ms[i]?.map (·.2)
  | _, _ => none

/-- `cJSON_GetObjectItem` (`cs = false`, the default) and
`cJSON_GetObjectItemCaseSensitive` (`cs = true`): the first member with that key. -/
def getObjectItem (v : JSON) (key : Bytes) (cs : Bool := false) : Option JSON :=
  match v with
  | .object ms => (ms.find? (fun m => keyEq cs m.1 key)).map (·.2)
  | _ => none

/-- `cJSON_HasObjectItem`. -/
def hasObjectItem (v : JSON) (key : Bytes) : Bool := (v.getObjectItem key).isSome

/-- `cJSON_AddItemToArray`: append. -/
def addItemToArray : JSON → JSON → Option JSON
  | .array xs, x => some (.array (xs ++ [x]))
  | _, _ => none

/-- `cJSON_AddItemToObject`: append a member (duplicates are allowed, like cJSON). -/
def addItemToObject : JSON → Bytes → JSON → Option JSON
  | .object ms, k, x => some (.object (ms ++ [(k, x)]))
  | _, _, _ => none

/-- `cJSON_DetachItemFromArray`: the removed item and the remaining array. -/
def detachItemFromArray : JSON → Nat → Option (JSON × JSON)
  | .array xs, i => xs[i]?.map fun x => (x, .array (xs.eraseIdx i))
  | _, _ => none

/-- `cJSON_DeleteItemFromArray`: unchanged if there is no such item. -/
def deleteItemFromArray (v : JSON) (i : Nat) : JSON :=
  match v.detachItemFromArray i with
  | some (_, v') => v'
  | none => v

/-- `cJSON_InsertItemInArray`: insert before index `i`, or append if `i` is past the end. -/
def insertItemInArray : JSON → Nat → JSON → Option JSON
  | .array xs, i, x => some (.array (xs.take i ++ x :: xs.drop i))
  | _, _, _ => none

/-- `cJSON_ReplaceItemInArray`: fails if there is no item `i`. -/
def replaceItemInArray : JSON → Nat → JSON → Option JSON
  | .array xs, i, x => if i < xs.length then some (.array (xs.set i x)) else none
  | _, _, _ => none

/-- `cJSON_DetachItemFromObject` / `…CaseSensitive`: remove the first member with that key. -/
def detachItemFromObject (v : JSON) (key : Bytes) (cs : Bool := false) : Option (JSON × JSON) :=
  match v with
  | .object ms => (eraseFirst (fun m => keyEq cs m.1 key) ms).map fun (m, r) => (m.2, .object r)
  | _ => none

/-- `cJSON_DeleteItemFromObject` / `…CaseSensitive`. -/
def deleteItemFromObject (v : JSON) (key : Bytes) (cs : Bool := false) : JSON :=
  match v.detachItemFromObject key cs with
  | some (_, v') => v'
  | none => v

/-- `cJSON_ReplaceItemInObject` / `…CaseSensitive`: the first member with that key becomes
`(key, x)` (cJSON also renames the member to the key that was searched for). -/
def replaceItemInObject (v : JSON) (key : Bytes) (x : JSON) (cs : Bool := false) : Option JSON :=
  match v with
  | .object ms => (replaceFirst (fun m => keyEq cs m.1 key) (key, x) ms).map .object
  | _ => none

/-- `cJSON_Duplicate`: a deep copy is the value itself; a shallow copy drops the children. -/
def duplicate (v : JSON) (recurse : Bool) : JSON :=
  if recurse then v
  else match v with
    | .array _ => .array []
    | .object _ => .object []
    | v => v

/-- Elementwise comparison of two lists of equal length. -/
def all2 {α} (f : α → α → Bool) : List α → List α → Bool
  | [], [] => true
  | x :: xs, y :: ys => f x y && all2 f xs ys
  | _, _ => false

/-- First value stored under `key`. -/
def lookup (cs : Bool) (ms : List (Bytes × JSON)) (key : Bytes) : Option JSON :=
  (ms.find? (fun m => keyEq cs m.1 key)).map (·.2)

/-- `cJSON_Compare` with recursion fuel. Arrays compare in order; objects compare as
"every member of `a` is found (first match) in `b` with an equal value, and vice versa". -/
def compareF (cs : Bool) : Nat → JSON → JSON → Bool
  | 0, _, _ => false
  | f + 1, a, b =>
    match a, b with
    | .null, .null => true
    | .bool x, .bool y => x == y
    | .number x, .number y => x == y
    | .string x, .string y => x == y
    | .array xs, .array ys => all2 (compareF cs f) xs ys
    | .object ms, .object ns =>
      ms.all (fun m => match lookup cs ns m.1 with
        | some y => compareF cs f m.2 y
        | none => false) &&
      ns.all (fun n => match lookup cs ms n.1 with
        | some x => compareF cs f n.2 x
        | none => false)
    | _, _ => false

/-- `cJSON_Compare(a, b, case_sensitive)`. -/
def compare (a b : JSON) (cs : Bool) : Bool := compareF cs (max a.depth b.depth + 1) a b

mutual
/-- No object anywhere in the tree has two members whose keys are equal under `keyEq cs`. -/
def UniqueKeys (cs : Bool) : JSON → Prop
  | .array xs => UniqueKeysList cs xs
  | .object ms => ms.Pairwise (fun a b => keyEq cs a.1 b.1 = false) ∧ UniqueKeysMembers cs ms
  | _ => True
def UniqueKeysList (cs : Bool) : List JSON → Prop
  | [] => True
  | x :: xs => UniqueKeys cs x ∧ UniqueKeysList cs xs
def UniqueKeysMembers (cs : Bool) : List (Bytes × JSON) → Prop
  | [] => True
  | (_, x) :: ms => UniqueKeys cs x ∧ UniqueKeysMembers cs ms
end

end JSON
end CJson
