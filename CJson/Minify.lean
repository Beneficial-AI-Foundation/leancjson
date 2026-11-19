import CJson.Basic

/-!
# cJSON_Minify

Strips whitespace and `//` / `/* */` comments outside string literals. Written as a
one-pass state machine over the input.

Unlike cJSON (which only recognises `\"` inside strings, so a string ending in an
escaped backslash such as `"a\\"` never terminates), every backslash escape is honoured.
-/

namespace CJson

inductive MinState where
  | code        -- outside strings and comments
  | slash       -- just saw `/`
  | line        -- inside `// …`
  | block       -- inside `/* … */`
  | blockStar   -- inside a block comment, just saw `*`
  | str         -- inside a string literal
  | strEsc      -- inside a string literal, just saw `\`
deriving DecidableEq, Repr

def minifyAux : MinState → Bytes → Bytes → Bytes
  | _, [], acc => acc.reverse
  | .code, c :: r, acc =>
    if c = 32 ∨ c = 9 ∨ c = 13 ∨ c = 10 then minifyAux .code r acc
    else if c = 47 then minifyAux .slash r acc
    else if c = 34 then minifyAux .str r (c :: acc)
    else minifyAux .code r (c :: acc)
  | .slash, c :: r, acc =>
    if c = 47 then minifyAux .line r acc
    else if c = 42 then minifyAux .block r acc
    -- a lone `/` is dropped and `c` is handled as ordinary code
    else if c = 32 ∨ c = 9 ∨ c = 13 ∨ c = 10 then minifyAux .code r acc
    else if c = 34 then minifyAux .str r (c :: acc)
    else minifyAux .code r (c :: acc)
  | .line, c :: r, acc => if c = 10 then minifyAux .code r acc else minifyAux .line r acc
  | .block, c :: r, acc => if c = 42 then minifyAux .blockStar r acc else minifyAux .block r acc
  | .blockStar, c :: r, acc =>
    if c = 47 then minifyAux .code r acc
    else if c = 42 then minifyAux .blockStar r acc
    else minifyAux .block r acc
  | .str, c :: r, acc =>
    if c = 34 then minifyAux .code r (c :: acc)
    else if c = 92 then minifyAux .strEsc r (c :: acc)
    else minifyAux .str r (c :: acc)
  | .strEsc, c :: r, acc => minifyAux .str r (c :: acc)

/-- `cJSON_Minify`. -/
def minify (s : Bytes) : Bytes := minifyAux .code s []

end CJson
