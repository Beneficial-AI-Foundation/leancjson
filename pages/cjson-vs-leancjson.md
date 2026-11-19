# What cJSON gets wrong, and what leancjson does instead

Writing a specification forces you to say what the right answer is for every input. For cJSON that turned up six places where the C library quietly returns something surprising. Each row below was observed by running both programs on the same input: cJSON at commit `6d9f244`, and [leancjson](/p/armin.vrevic/leancjson-verified-cjson).

```stats
{
  "items": [
    { "value": "6", "label": "Inputs where they differ", "hint": "each one run through both programs" },
    { "value": "3", "label": "Numbers cJSON changes", "hint": "numbers stored as C doubles" },
    { "value": "2", "label": "Malformed inputs cJSON accepts", "hint": "a bad number and a bad escape" },
    { "value": "1", "label": "Minifier bug", "hint": "a string ending in an escaped backslash" }
  ]
}
```

## The six inputs

| Input | cJSON prints | leancjson prints |
|---|---|---|
| `[9007199254740993]` | `[9.00719925474099e+15]` | `[9007199254740993]` |
| `[0.1234567890123456789]` | `[0.12345678901234568]` | `[0.1234567890123456789]` |
| `[1e400]` | `[null]` | `[1e+400]` |
| `[01]` and `[1.]` | `[1]` | rejected |
| `"a\u12G4b"` | `"a"` | rejected |
| minify `[ "a\\" , 1 ]` | `["a\\" , 1 ]` | `["a\\",1]` |

## Numbers lose digits

cJSON stores every number as a C `double`. An integer above 2^53 no longer fits, so `9007199254740993` comes back as `9.00719925474099e+15`: a different number, and no longer an integer. A number too large for a double becomes infinity and prints as `null`, which changes its type.

leancjson stores a number as an exact decimal, a whole-number mantissa times a power of ten:

```latex
x = m \times 10^{e}, \qquad m, e \in \mathbb{Z}
```

Nothing is rounded, so the spec can be an equation instead of an approximation. `number_roundtrip` says that printing a number and parsing the text returns the same number, for every number. There is no epsilon anywhere, including in comparison: cJSON treats `1.0000000000000002` and `1.0000000000000004` as equal, leancjson does not.

## Malformed input is accepted

**Numbers.** cJSON passes number text to the C function `strtod`, which accepts more than JSON allows. `[01]` and `[1.]` both parse as `[1]`. leancjson follows the JSON grammar of RFC 8259: a leading zero ends the number, and a decimal point needs a digit after it. The spec `parse_number_strict` pins this down.

**Escapes.** `\u12G4` is not a valid escape, since `G` is not a hex digit. cJSON reads the bad digits as zero, gets the character NUL, and writes it into a C string, where NUL means "end of string". Everything after it is silently dropped: `"a\u12G4b"` becomes `"a"`. leancjson rejects the input (`parse_hex4_invalid`).

## The minifier loses track of a string

`cJSON_Minify` strips whitespace outside strings. To know where a string ends it looks for a quote that is not escaped, but it only recognises the escape `\"`. In `"a\\"` the string ends with an escaped backslash followed by the closing quote. cJSON reads that as an escaped quote and thinks the string continues, so the whitespace after it is kept.

leancjson honours every escape. That is what makes this theorem true:

```latex
\forall\, v,\quad \mathrm{minify}\big(\mathrm{print}(v)\big) = \mathrm{printUnformatted}(v)
```

It is `CJson.Spec.minify_print`. With cJSON's rule it would be false for any document containing a string that ends in a backslash.

## One oddity that was kept

`cJSON_Compare` matches object members by key and takes the first match. So two separately parsed copies of `{"a":1,"a":2}` compare as *not equal*: the second `a` in one is looked up in the other and finds the first `a`. leancjson behaves the same way, and the spec says exactly when comparison is reflexive: `compare_refl` holds for every document with no duplicate keys.

## What this page does not show

- These are the differences found while writing the specs. It is not a claim that there are no others.
- cJSON was run on macOS with the system C library. `strtod` and `printf` can differ slightly between platforms.
- None of these is a memory-safety bug in cJSON. They are cases where the output is not what the input said.

Source: [github.com/Beneficial-AI-Foundation/leancjson](https://github.com/Beneficial-AI-Foundation/leancjson)
