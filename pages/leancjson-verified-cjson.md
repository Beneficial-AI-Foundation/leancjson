# leancjson: cJSON, rewritten in Lean and proved

**What it is.** [cJSON](https://github.com/DaveGamble/cJSON) is the small C library that parses and prints JSON inside countless devices and tools. leancjson is the same library written in Lean 4: parser, printer, minifier, comparison and the tree API. Lean compiles it to C, and it runs as a native binary.

**The headline.** Print any document, parse the text, and you get the same document back. That is a theorem for every well-formed document, in both output formats, not a test on a few samples.

```stats
{
  "items": [
    { "value": "110", "label": "Specs", "hint": "theorems in CJson/Spec.lean and SpecExamples.lean, checked on every build" },
    { "value": "0", "label": "sorry", "hint": "an axiom audit fails the build if any spec gains one" },
    { "value": "11 / 11", "label": "cJSON example files", "hint": "tests/inputs reproduced byte for byte, each as a kernel-checked theorem" },
    { "value": "0", "label": "Runtime unit tests", "hint": "every test is a theorem; none are run after the build" }
  ]
}
```

```cards
{
  "repos": ["armin.vrevic/leancjson"],
  "variant": "green"
}
```

## What was done

1. **Rewrote cJSON in Lean 4.** The parser, printer, minifier, comparison and tree API of `cJSON.c` became pure Lean functions over lists of bytes. Numbers became exact decimals instead of C doubles, so that statements about them can be proved.
2. **Turned the unit tests into specs.** Each cJSON test file has a section in `CJson/Spec.lean`. Concrete test cases became theorems the Lean kernel evaluates; where possible a general theorem replaced the samples.
3. **Added specs cJSON never had.** The round trip between printing and parsing, the guarantee that the parser only returns well-formed documents, and the link between the minifier and the compact printer.
4. **Proved them.** About 1,560 lines of proof, with no `sorry`. A generated audit lists the axioms behind every spec and fails the build if one goes beyond Lean's standard three.
5. **Verified on the VD server.** `lake build` there checks every proof and produces the C code. The C was then compiled and run against cJSON's own example files: all 11 match byte for byte.
6. **Compared with the original.** Upstream cJSON was run on the inputs where the two disagree, to confirm each difference before writing it down.
7. **Published.** The source is on GitHub. VeriLib cloned it, ran the Lean probe and split it into 382 atoms, the definitions and theorems you can browse in the repository card above.

## The main theorem

```latex
\forall\, v,\quad \mathrm{WF}(v)\ \Longrightarrow\ \mathrm{parse}\big(\mathrm{print}(v)\big) = \mathrm{some}\ v
```

In Lean this is `CJson.Spec.parse_print`, with `parse_printUnformatted` for the compact format. `WF` means numbers are in canonical form and nesting is at most 1000, cJSON's limit. A second theorem, `parse_wf`, shows the parser only ever returns such documents, so the assumption costs nothing in practice:

```latex
\mathrm{parse}(text) = \mathrm{some}\ v\ \Longrightarrow\ \mathrm{parse}\big(\mathrm{print}(v)\big) = \mathrm{some}\ v
```

## From unit tests to specs

cJSON ships about 150 unit tests in the files that were ported. Each one that makes sense for a pure function is now a theorem. Where a test checked a few samples, the spec covers every input.

| cJSON test | What it checked | What the spec proves |
|---|---|---|
| `parse_hex4.c` | all 65,536 values, by loop | `parse_hex4_lower`, `parse_hex4_upper`: every value, by proof |
| `print_string.c` | one ASCII table | `string_roundtrip`: any bytes at all survive escaping |
| `parse_number.c`, `print_number.c` | about 40 numbers | `number_roundtrip`: every number, with no rounding |
| `parse_examples.c` | 11 files parse and print as expected | the same 11 files, checked by the Lean kernel |
| `minify_tests.c` | 7 strings | `minify_print`: minifying formatted output gives exactly the compact output |
| `compare_tests.c` | about 40 pairs | `compare_symm`, `compare_refl`, plus the same pairs |
| `misc_tests.c`, `cjson_add.c` | insert, detach, replace on samples | insert and detach are inverse; replace changes one item only |

## What is proven

| Spec | Guarantee |
|---|---|
| `parse_print`, `parse_printUnformatted` | Parsing printed text returns the document |
| `parseStrict_print` | Printed text passes the strict parser with nothing left over |
| `parse_wf` | Everything the parser returns is well-formed |
| `parse_nesting_limit` | Nothing nested deeper than 1000 is ever returned |
| `number_roundtrip` | Numbers print and parse back exactly |
| `string_roundtrip` | Any byte string survives escaping, including NUL and invalid UTF-8 |
| `utf8_correct` | The UTF-8 encoder is right for every code point |
| `minify_print` | `minify(print v) = printUnformatted v` |
| `compare_symm`, `compare_refl` | Comparison is symmetric, and reflexive without duplicate keys |
| `detach_insert`, `replace_item_in_array`, … | The tree API does what its name says and nothing else |

## What the code is made of

```chart
{
  "id": "leancjson-lines",
  "type": "stacked-bar",
  "title": "Lines of Lean",
  "width": "full",
  "height": 260,
  "x": { "type": "category", "field": "part" },
  "legend": { "show": false },
  "series": [ { "key": "lines", "label": "Lines", "color": "#217ef0" } ],
  "source": { "kind": "inline" },
  "data": [
    { "part": "Program", "lines": 852 },
    { "part": "Specs", "lines": 824 },
    { "part": "Proofs", "lines": 1561 }
  ]
}
```

The program is 852 lines, against 3,206 in `cJSON.c`. The proofs are about twice the size of the program.

## Two problems found on the way

**The parser was quadratic.** The first version recomputed the length of the remaining input at every string and every bracket. All the proofs passed; a 2.7 MB file still had not finished after five minutes. The second version computes one length up front and passes it down. The proofs were redone for it.

```chart
{
  "id": "leancjson-parse-time",
  "type": "stacked-bar",
  "title": "Seconds to parse and print 2.7 MB",
  "row": "v1v2",
  "width": "1/2",
  "height": 240,
  "x": { "type": "category", "field": "version" },
  "legend": { "show": false },
  "series": [ { "key": "seconds", "label": "Seconds", "color": "#217ef0" } ],
  "source": { "kind": "inline" },
  "data": [ { "version": "v1 (stopped at 300 s)", "seconds": 300 }, { "version": "v2", "seconds": 0.2 } ]
}
```

**The kernel choked on string literals.** Checking the test vectors needed 3.8 GB, more than the verification server has. The parser was not the cause: the cost was turning each string literal into bytes inside the kernel. Writing the vectors as `b!"text"`, which expands to a plain byte list before the kernel sees it, fixed it.

```chart
{
  "id": "leancjson-kernel-memory",
  "type": "stacked-bar",
  "title": "Peak memory (MB) to check Spec.lean",
  "row": "v1v2",
  "width": "1/2",
  "height": 240,
  "x": { "type": "category", "field": "version" },
  "legend": { "show": false },
  "series": [ { "key": "mb", "label": "MB", "color": "#01BB00" } ],
  "source": { "kind": "inline" },
  "data": [ { "version": "string literals", "mb": 3793 }, { "version": "b! byte lists", "mb": 524 } ]
}
```

Time to check the same file fell from 22.6 seconds to 1.0.

## What you still have to trust

- **The Lean kernel**, which checks the proofs.
- **The Lean compiler, the C compiler and the runtime.** The theorems are about the Lean definitions; the C is what Lean generates from them.
- **`Main.lean`**, the 50 or so lines that read a file and write the result.

## Not built

- `cJSON_Utils` (JSON Pointer and JSON Patch), raw values, and error positions.
- Speed. Text is a linked list of bytes. It handles megabytes easily, but it is not as fast as cJSON, and an array with millions of elements can exhaust the stack when printed.

Where the two programs disagree, and why: [What cJSON gets wrong, and what leancjson does instead](/p/armin.vrevic/cjson-vs-leancjson).

Source: [github.com/Beneficial-AI-Foundation/leancjson](https://github.com/Beneficial-AI-Foundation/leancjson)
