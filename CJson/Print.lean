import CJson.Number
import CJson.Str

/-!
# Printer (cJSON `print_value`, `print_array`, `print_object`)

`fmt = false` is `cJSON_PrintUnformatted`, `fmt = true` is `cJSON_Print`:
arrays as `[1, 2, 3]`, objects one member per line indented with tabs.
-/

namespace CJson

def tabs (fmt : Bool) (n : Nat) : Bytes := if fmt then List.replicate n 9 else []
def nl (fmt : Bool) : Bytes := if fmt then [10] else []
def tab (fmt : Bool) : Bytes := if fmt then [9] else []
def sp (fmt : Bool) : Bytes := if fmt then [32] else []

mutual
/-- `print_value`; `d` is the current nesting depth (number of tabs for members). -/
def printValue (fmt : Bool) (d : Nat) : JSON → Bytes
  | .null => [110, 117, 108, 108]
  | .bool false => [102, 97, 108, 115, 101]
  | .bool true => [116, 114, 117, 101]
  | .number n => printNum n
  | .string s => printStr s
  | .array [] => [91, 93]
  | .array (x :: xs) => 91 :: (printValue fmt (d + 1) x ++ printTail fmt (d + 1) xs)
  | .object [] => 123 :: (nl fmt ++ tabs fmt d ++ [125])
  | .object ((k, x) :: ms) =>
    123 :: (nl fmt ++ tabs fmt (d + 1) ++ printStr k ++ 58 :: (tab fmt ++
      printValue fmt (d + 1) x ++ printMembers fmt (d + 1) ms))
/-- Remaining array elements, each preceded by its separator, then `]`. -/
def printTail (fmt : Bool) (d : Nat) : List JSON → Bytes
  | [] => [93]
  | x :: xs => 44 :: (sp fmt ++ printValue fmt d x ++ printTail fmt d xs)
/-- Remaining object members, each preceded by its separator, then the closing `}`. -/
def printMembers (fmt : Bool) (d : Nat) : List (Bytes × JSON) → Bytes
  | [] => nl fmt ++ tabs fmt (d - 1) ++ [125]
  | (k, x) :: ms =>
    44 :: (nl fmt ++ tabs fmt d ++ printStr k ++ 58 :: (tab fmt ++
      printValue fmt d x ++ printMembers fmt d ms))
end

/-- `cJSON_Print`: formatted text. -/
def print (v : JSON) : Bytes := printValue true 0 v

/-- `cJSON_PrintUnformatted`: compact text. -/
def printUnformatted (v : JSON) : Bytes := printValue false 0 v

end CJson
