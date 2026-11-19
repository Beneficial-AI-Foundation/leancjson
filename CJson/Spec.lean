import CJson.Proofs.Roundtrip
import CJson.Proofs.Minify
import CJson.Proofs.Api

/-!
# cJSON specification

This file is the test suite. Every behaviour we care about is a theorem here, checked by
`lake build`; there are no runtime unit tests. Each section names the cJSON test file
(`tests/*.c`) it replaces.

Rules (see CLAUDE.md):
* New behaviour ⇒ new spec in this file, in the matching section.
* Prefer a spec for *all* inputs. Concrete vectors (the cases of the C unit tests) are
  kernel-checked with `decide +kernel`; never `native_decide`.
* Every spec is covered by the axiom audit in `CJson/Audit.lean` (regenerate with
  `./audit.sh`); the build fails if a spec gains `sorry` or a non-standard axiom.
-/

set_option linter.unusedSimpArgs false

namespace CJson.Spec

open CJson JSON

/-- Number literal for specs: `mant * 10 ^ exp`. -/
abbrev num (mant : Int) (exp : Int := 0) : JSON := .number ⟨mant, exp⟩
/-- String value literal for specs: `str!"hi"` is `.string b!"hi"`. -/
macro:max "str!" x:str : term => `(JSON.string (b! $x))

/-! ## 1. Round trip  (new; subsumes the print→parse→print loops in `parse_examples.c`) -/

/-- Parsing the formatted text of any well-formed document gives the document back. -/
theorem parse_print (v : JSON) (h : v.WF) : parse (print v) = some v := by
  simp [parse, print, parseWithOpts_printValue v true false h]

/-- Same for compact text. -/
theorem parse_printUnformatted (v : JSON) (h : v.WF) : parse (printUnformatted v) = some v := by
  simp [parse, printUnformatted, parseWithOpts_printValue v false false h]

/-- The printer never emits trailing garbage: its output also passes the strict parser
(`require_null_terminated`), with nothing left unread. -/
theorem parseStrict_print (v : JSON) (fmt : Bool) (h : v.WF) :
    parseWithOpts (printValue fmt 0 v) true = some (v, []) :=
  parseWithOpts_printValue v fmt true h

/-- A printed value embedded in other text is read back exactly, leaving the rest unread,
at any indentation depth, as long as the rest cannot be mistaken for more of a number. -/
theorem parse_print_embedded (v : JSON) (fmt : Bool) (d len : Nat) (rest : Bytes)
    (h : v.WF) (hr : NumEnd rest) (hl : (printValue fmt d v ++ rest).length ≤ len) :
    parseValue nestingLimit len (printValue fmt d v ++ rest) = some (v, rest) :=
  parseValue_printValue v fmt d nestingLimit len rest h.1 h.2 hr hl

/-- Everything the parser returns is well-formed: numbers are canonical and nesting is
within `CJSON_NESTING_LIMIT`. -/
theorem parse_wf (text : Bytes) (v : JSON) (h : parse text = some v) : v.WF := by
  unfold parse at h
  cases hp : parseWithOpts text false with
  | none => simp [hp] at h
  | some p =>
    obtain ⟨v', r⟩ := p
    simp [hp] at h; subst h
    exact parseWithOpts_wf hp

/-- Print/parse is stable: whatever was parsed can be printed (either way) and parsed
again to the same document. So `print ∘ parse` is idempotent on text. -/
theorem parse_print_parse (text : Bytes) (v : JSON) (h : parse text = some v) :
    parse (print v) = some v ∧ parse (printUnformatted v) = some v :=
  ⟨parse_print v (parse_wf text v h), parse_printUnformatted v (parse_wf text v h)⟩

/-- Strict parsing is a restriction of `cJSON_Parse`. -/
theorem parseStrict_parse (text : Bytes) (v : JSON) (h : parseStrict text = some v) :
    parse text = some v := by
  unfold parseStrict parseWithOpts at h
  unfold parse parseWithOpts
  split at h
  · simp at h
  · rename_i v' r hp
    by_cases he : skipWs r = []
    · simpa [he] using h
    · simp [he] at h

/-! ## 2. Numbers  (was: `parse_number.c`, `print_number.c`) -/

/-- Printing then parsing a canonical number is the identity (exact — no `double` rounding). -/
theorem number_roundtrip (n : Num) (h : n.Normal) : parseNumber (printNum n) = some (n, []) := by
  simpa using parseNumber_printNum n [] h (by intro c hc; simp at hc)

/-- The number parser only returns canonical numbers. -/
theorem number_canonical (text : Bytes) (n : Num) (r : Bytes)
    (h : parseNumber text = some (n, r)) : n.Normal :=
  parseNumber_normal h

/-- Digits of a natural number read back as that number. -/
theorem digits_value (n : Nat) : natOf (natDigits n) = n := natOf_natDigits n

/-- `Num.ofScientific` always builds a canonical number. -/
theorem ofScientific_normal (m e : Int) : (Num.ofScientific m e).Normal := by
  have := normal_of_normalize m.natAbs e (decide (m < 0))
  simpa [Num.ofScientific] using this

/-- parse_number_should_parse_zero -/
theorem parse_number_zero :
    parse (b!"0") = some (num 0) ∧ parse (b!"0.0") = some (num 0) ∧
    parse (b!"-0") = some (num 0) := by decide +kernel

/-- parse_number_should_parse_negative_integers -/
theorem parse_number_negative_integers :
    parse (b!"-1") = some (num (-1)) ∧ parse (b!"-32768") = some (num (-32768)) ∧
    parse (b!"-2147483648") = some (num (-2147483648)) := by decide +kernel

/-- parse_number_should_parse_positive_integers -/
theorem parse_number_positive_integers :
    parse (b!"1") = some (num 1) ∧ parse (b!"32767") = some (num 32767) ∧
    parse (b!"2147483647") = some (num 2147483647) := by decide +kernel

/-- parse_number_should_parse_positive_reals -/
theorem parse_number_positive_reals :
    parse (b!"0.001") = some (num 1 (-3)) ∧ parse (b!"10e-10") = some (num 1 (-9)) ∧
    parse (b!"10E-10") = some (num 1 (-9)) ∧ parse (b!"10e10") = some (num 1 11) ∧
    parse (b!"123e+127") = some (num 123 127) ∧
    parse (b!"123e-128") = some (num 123 (-128)) := by decide +kernel

/-- parse_number_should_parse_negative_reals -/
theorem parse_number_negative_reals :
    parse (b!"-0.001") = some (num (-1) (-3)) ∧ parse (b!"-10e-10") = some (num (-1) (-9)) ∧
    parse (b!"-10E-10") = some (num (-1) (-9)) ∧ parse (b!"-10e20") = some (num (-1) 21) ∧
    parse (b!"-123e+127") = some (num (-123) 127) ∧
    parse (b!"-123e-128") = some (num (-123) (-128)) := by decide +kernel

/-- cjson_parse_big_numbers_should_not_report_error — and here they are kept exactly. -/
theorem parse_number_big :
    parse (b!"9999999999999999999999999999999999999999999999912345678901234567") =
      some (num 9999999999999999999999999999999999999999999999912345678901234567) ∧
    parse (b!"9999999999999999999999999999999999999999999999912345678901234567E10") =
      some (num 9999999999999999999999999999999999999999999999912345678901234567 10) ∧
    parse (b!"999999999999999999999999999999999999999999999991234567890.1234567") =
      some (num 9999999999999999999999999999999999999999999999912345678901234567 (-7)) := by
  decide +kernel

/-- print_number_should_print_zero / negative_integers / positive_integers -/
theorem print_number_integers :
    printNum ⟨0, 0⟩ = b!"0" ∧ printNum ⟨-1, 0⟩ = b!"-1" ∧
    printNum ⟨-32768, 0⟩ = b!"-32768" ∧ printNum ⟨-2147483648, 0⟩ = b!"-2147483648" ∧
    printNum ⟨1, 0⟩ = b!"1" ∧ printNum ⟨32767, 0⟩ = b!"32767" ∧
    printNum ⟨2147483647, 0⟩ = b!"2147483647" := by decide +kernel

/-- print_number_should_print_positive_reals (same text as C's `%1.15g` / `%1.17g`) -/
theorem print_number_positive_reals :
    printNum ⟨123, -3⟩ = b!"0.123" ∧ printNum ⟨1, -9⟩ = b!"1e-09" ∧
    printNum ⟨1, 12⟩ = b!"1000000000000" ∧ printNum ⟨123, 127⟩ = b!"1.23e+129" ∧
    printNum ⟨123, -128⟩ = b!"1.23e-126" ∧
    printNum ⟨31415926535897931, -16⟩ = b!"3.1415926535897931" := by decide +kernel

/-- print_number_should_print_negative_reals -/
theorem print_number_negative_reals :
    printNum ⟨-123, -4⟩ = b!"-0.0123" ∧ printNum ⟨-1, -9⟩ = b!"-1e-09" ∧
    printNum ⟨-1, 21⟩ = b!"-1e+21" ∧ printNum ⟨-123, 127⟩ = b!"-1.23e+129" ∧
    printNum ⟨-123, -128⟩ = b!"-1.23e-126" := by decide +kernel

/-- New: numbers that are not RFC 8259 numbers are not swallowed (cJSON's `strtod` accepts
them). A leading zero ends the number; `+`, a bare `-`, a bare `.` are rejected. -/
theorem parse_number_strict :
    parseStrict (b!"01") = none ∧ parseStrict (b!"+1") = none ∧
    parseStrict (b!"-") = none ∧ parseStrict (b!".5") = none ∧
    parseStrict (b!"1.") = none ∧ parseStrict (b!"1e") = none ∧
    parseStrict (b!"[01]") = none := by decide +kernel

/-! ## 3. Strings  (was: `parse_string.c`, `print_string.c`, `parse_hex4.c`) -/

/-- Any byte string — control characters, quotes, backslashes, invalid UTF-8, NUL — survives
print → parse unchanged. -/
theorem string_roundtrip (x rest : Bytes) :
    parseScalar (printStr x ++ rest).length (printStr x ++ rest) = some (.string x, rest) := by
  have := length_le_flatMap_escape x
  exact parseScalar_string _ x rest (by
    simp only [printStr, List.length_append, List.length_cons, List.length_nil]; omega)

/-- parse_hex4_should_parse_all_combinations (lowercase): every 16-bit value. -/
theorem parse_hex4_lower (a b c d : Nat) (ha : a < 16) (hb : b < 16) (hc : c < 16) (hd : d < 16)
    (r : Bytes) :
    parseHex4 (hexDigit a :: hexDigit b :: hexDigit c :: hexDigit d :: r) =
      some (((a * 16 + b) * 16 + c) * 16 + d, r) := by
  simp [parseHex4, hexVal_hexDigit, ha, hb, hc, hd]

/-- parse_hex4_should_parse_all_combinations (uppercase): every 16-bit value. -/
theorem parse_hex4_upper (a b c d : Nat) (ha : a < 16) (hb : b < 16) (hc : c < 16) (hd : d < 16)
    (r : Bytes) :
    parseHex4 (hexDigitUpper a :: hexDigitUpper b :: hexDigitUpper c :: hexDigitUpper d :: r) =
      some (((a * 16 + b) * 16 + c) * 16 + d, r) := by
  simp [parseHex4, hexVal_hexDigitUpper, ha, hb, hc, hd]

/-- parse_hex4_should_parse_mixed_case: all 16 spellings of `beef`. -/
theorem parse_hex4_mixed_case : ∀ b1 b2 b3 b4 : Bool,
    parseHex4 [if b1 then 66 else 98, if b2 then 69 else 101, if b3 then 69 else 101,
      if b4 then 70 else 102] = some (0xBEEF, []) := by decide +kernel

/-- New: a non-hex digit is an error (cJSON silently reads it as 0). -/
theorem parse_hex4_invalid : parse (b!"\"\\u12G4\"") = none := by decide +kernel

/-- New: `utf8` is a correct UTF-8 encoder for every code point. -/
theorem utf8_correct (cp : Nat) (h : cp < 0x110000) : utf8Decode (utf8 cp) = some cp :=
  utf8Decode_utf8 cp h

/-- parse_string_should_parse_strings -/
theorem parse_string_strings :
    parse (b!"\"\"") = some (str!"") ∧
    parse (b!"\" !\\\"#$%&'()*+,-./\\/0123456789:;<=>?@ABCDEFGHIJKLMNOPQRSTUVWXYZ[\\\\]^_'abcdefghijklmnopqrstuvwxyz{|}~\"")
      = some (str!" !\"#$%&'()*+,-.//0123456789:;<=>?@ABCDEFGHIJKLMNOPQRSTUVWXYZ[\\]^_'abcdefghijklmnopqrstuvwxyz{|}~") ∧
    parse (b!"\"\\\"\\\\\\/\\b\\f\\n\\r\\t\\u20AC\\u732b\"") = some (str!"\"\\/\x08\x0c\n\r\t€猫") ∧
    parse (b!"\"\x08\x0c\n\r\t\"") = some (str!"\x08\x0c\n\r\t") := by decide +kernel

/-- parse_string_should_parse_utf16_surrogate_pairs -/
theorem parse_string_surrogate_pair :
    parse (b!"\"\\uD83D\\udc31\"") = some (str!"🐱") := by decide +kernel

/-- New: broken surrogates are rejected. -/
theorem parse_string_bad_surrogates :
    parse (b!"\"\\uDC31\"") = none ∧ parse (b!"\"\\uD83D\"") = none ∧
    parse (b!"\"\\uD83Dx\"") = none ∧ parse (b!"\"\\uD83D\\u0041\"") = none := by
  decide +kernel

/-- parse_string_should_not_parse_non_strings -/
theorem parse_string_non_strings :
    parse (b!"this\" is not a string\"") = none ∧ parse (b!"") = none := by
  decide +kernel

/-- parse_string_should_not_parse_invalid_backslash (the C cases, plus properly quoted ones) -/
theorem parse_string_invalid_backslash :
    parse (b!"Abcdef\\123") = none ∧ parse (b!"Abcdef\\e23") = none ∧
    parse (b!"\"Abcdef\\123\"") = none ∧ parse (b!"\"Abcdef\\e23\"") = none := by
  decide +kernel

/-- parse_string_should_not_overflow_with_closing_backslash -/
theorem parse_string_closing_backslash :
    parse (b!"\"000000000000000000\\") = none := by decide +kernel

/-- parse_string_should_parse_bug_94 -/
theorem parse_string_bug_94 :
    parse (b!"\"~!@\\\\#$%^&*()\\\\\\\\-\\\\+{}[]:\\\\;\\\\\\\"\\\\<\\\\>?/.,DC=ad,DC=com\"") =
      some (str!"~!@\\#$%^&*()\\\\-\\+{}[]:\\;\\\"\\<\\>?/.,DC=ad,DC=com") := by decide +kernel

/-- print_string_should_print_empty_strings -/
theorem print_string_empty : printStr [] = b!"\"\"" := by decide +kernel

/-- print_string_should_print_ascii: bytes 0x01 … 0x7E. -/
theorem print_string_ascii :
    printStr ((List.range 0x7E).map fun i => (i + 1).toUInt8) =
      b!"\"\\u0001\\u0002\\u0003\\u0004\\u0005\\u0006\\u0007\\b\\t\\n\\u000b\\f\\r\\u000e\\u000f\\u0010\\u0011\\u0012\\u0013\\u0014\\u0015\\u0016\\u0017\\u0018\\u0019\\u001a\\u001b\\u001c\\u001d\\u001e\\u001f !\\\"#$%&'()*+,-./0123456789:;<=>?@ABCDEFGHIJKLMNOPQRSTUVWXYZ[\\\\]^_`abcdefghijklmnopqrstuvwxyz{|}~\"" := by
  decide +kernel

/-- print_string_should_print_utf8 -/
theorem print_string_utf8 : printStr (b!"ü猫慕") = b!"\"ü猫慕\"" := by decide +kernel

/-! ## 4. Values, arrays, objects
(was: `parse_value.c`, `parse_array.c`, `parse_object.c`, `print_value.c`, `print_array.c`,
`print_object.c`) -/

/-- parse_value_should_parse_* -/
theorem parse_value_vectors :
    parse (b!"null") = some .null ∧ parse (b!"true") = some (.bool true) ∧
    parse (b!"false") = some (.bool false) ∧ parse (b!"1.5") = some (num 15 (-1)) ∧
    parse (b!"\"\"") = some (str!"") ∧ parse (b!"\"hello\"") = some (str!"hello") ∧
    parse (b!"[]") = some (.array []) ∧ parse (b!"{}") = some (.object []) := by
  decide +kernel

/-- parse_array_should_parse_empty_arrays / arrays_with_one_element -/
theorem parse_array_small :
    parse (b!"[]") = some (.array []) ∧ parse (b!"[\n\t]") = some (.array []) ∧
    parse (b!"[1]") = some (.array [num 1]) ∧
    parse (b!"[\"hello!\"]") = some (.array [str!"hello!"]) ∧
    parse (b!"[[]]") = some (.array [.array []]) ∧
    parse (b!"[null]") = some (.array [.null]) := by decide +kernel

/-- parse_array_should_parse_arrays_with_multiple_elements -/
theorem parse_array_multiple :
    parse (b!"[1\t,\n2, 3]") = some (.array [num 1, num 2, num 3]) ∧
    parse (b!"[1, null, true, false, [], \"hello\", {}]") =
      some (.array [num 1, .null, .bool true, .bool false, .array [], str!"hello", .object []]) := by
  decide +kernel

/-- parse_array_should_not_parse_non_arrays (and malformed arrays) -/
theorem parse_array_invalid :
    parse (b!"[") = none ∧ parse (b!"]") = none ∧ parse (b!"[1,]") = none ∧
    parse (b!"[,1]") = none ∧ parse (b!"[1 2]") = none ∧ parse (b!"[1") = none := by
  decide +kernel

/-- parse_object_should_parse_empty_objects / objects_with_one_element -/
theorem parse_object_small :
    parse (b!"{}") = some (.object []) ∧ parse (b!"{\n\t}") = some (.object []) ∧
    parse (b!"{\"one\":1}") = some (.object [(b!"one", num 1)]) ∧
    parse (b!"{\"hello\":\"world!\"}") = some (.object [(b!"hello", str!"world!")]) ∧
    parse (b!"{\"array\":[]}") = some (.object [(b!"array", .array [])]) ∧
    parse (b!"{\"null\":null}") = some (.object [(b!"null", .null)]) := by
  decide +kernel

/-- parse_object_should_parse_objects_with_multiple_elements -/
theorem parse_object_multiple :
    parse (b!"{\"one\":1\t,\t\"two\"\n:2, \"three\":3}") =
      some (.object [(b!"one", num 1), (b!"two", num 2), (b!"three", num 3)]) ∧
    parse (b!"{\"one\":1, \"NULL\":null, \"TRUE\":true, \"FALSE\":false, \"array\":[], \"world\":\"hello\", \"object\":{}}") =
      some (.object [(b!"one", num 1), (b!"NULL", .null), (b!"TRUE", .bool true),
        (b!"FALSE", .bool false), (b!"array", .array []), (b!"world", str!"hello"),
        (b!"object", .object [])]) := by decide +kernel

/-- parse_object_should_not_parse_non_objects (and malformed objects) -/
theorem parse_object_invalid :
    parse (b!"{") = none ∧ parse (b!"}") = none ∧ parse (b!"{\"a\"}") = none ∧
    parse (b!"{\"a\":1,}") = none ∧ parse (b!"{a:1}") = none ∧
    parse (b!"{\"a\" 1}") = none ∧ parse (b!"{1:1}") = none := by decide +kernel

/-- print_value_should_print_* : each text prints back as itself. -/
theorem print_value_vectors :
    printUnformatted .null = b!"null" ∧ printUnformatted (.bool true) = b!"true" ∧
    printUnformatted (.bool false) = b!"false" ∧ printUnformatted (num 15 (-1)) = b!"1.5" ∧
    printUnformatted (str!"") = b!"\"\"" ∧ printUnformatted (str!"hello") = b!"\"hello\"" ∧
    printUnformatted (.array []) = b!"[]" ∧ printUnformatted (.object []) = b!"{}" := by
  decide +kernel

/-- print_array_should_print_* : formatted and unformatted. -/
theorem print_array_vectors :
    print (.array []) = b!"[]" ∧ print (.array [num 1]) = b!"[1]" ∧
    print (.array [str!"hello!"]) = b!"[\"hello!\"]" ∧ print (.array [.array []]) = b!"[[]]" ∧
    print (.array [.null]) = b!"[null]" ∧
    print (.array [num 1, num 2, num 3]) = b!"[1, 2, 3]" ∧
    printUnformatted (.array [num 1, num 2, num 3]) = b!"[1,2,3]" ∧
    print (.array [num 1, .null, .bool true, .bool false, .array [], str!"hello", .object []]) =
      b!"[1, null, true, false, [], \"hello\", {\n\t}]" ∧
    printUnformatted (.array [num 1, .null, .bool true, .bool false, .array [], str!"hello", .object []])
      = b!"[1,null,true,false,[],\"hello\",{}]" := by decide +kernel

/-- print_object_should_print_* : formatted and unformatted. -/
theorem print_object_vectors :
    print (.object []) = b!"{\n}" ∧ printUnformatted (.object []) = b!"{}" ∧
    print (.object [(b!"one", num 1)]) = b!"{\n\t\"one\":\t1\n}" ∧
    print (.object [(b!"hello", str!"world!")]) = b!"{\n\t\"hello\":\t\"world!\"\n}" ∧
    print (.object [(b!"array", .array [])]) = b!"{\n\t\"array\":\t[]\n}" ∧
    print (.object [(b!"null", .null)]) = b!"{\n\t\"null\":\tnull\n}" ∧
    print (.object [(b!"one", num 1), (b!"two", num 2), (b!"three", num 3)]) =
      b!"{\n\t\"one\":\t1,\n\t\"two\":\t2,\n\t\"three\":\t3\n}" ∧
    printUnformatted (.object [(b!"one", num 1), (b!"two", num 2), (b!"three", num 3)])
      = b!"{\"one\":1,\"two\":2,\"three\":3}" ∧
    print (.object [(b!"one", num 1), (b!"NULL", .null), (b!"TRUE", .bool true),
        (b!"FALSE", .bool false), (b!"array", .array []), (b!"world", str!"hello"),
        (b!"object", .object [])]) =
      b!"{\n\t\"one\":\t1,\n\t\"NULL\":\tnull,\n\t\"TRUE\":\ttrue,\n\t\"FALSE\":\tfalse,\n\t\"array\":\t[],\n\t\"world\":\t\"hello\",\n\t\"object\":\t{\n\t}\n}" := by
  decide +kernel

/-! ## 5. Parse options  (was: `parse_with_opts.c`, nesting test of `misc_tests.c`) -/

/-- parse_with_opts_should_handle_empty_strings / incomplete_json -/
theorem parse_incomplete :
    parseWithOpts (b!"") false = none ∧ parseWithOpts (b!"{") false = none ∧
    parseWithOpts (b!"{ \"name\": ") false = none := by decide +kernel

/-- parse_with_opts_should_require_null_if_requested -/
theorem parse_require_end :
    parseWithOpts (b!"{}") true = some (.object [], []) ∧
    parseWithOpts (b!"{} \n") true = some (.object [], []) ∧
    parseWithOpts (b!"{}x") true = none := by decide +kernel

/-- parse_with_opts_should_return_parse_end: the unread input starts right after `[]`. -/
theorem parse_return_end :
    parseWithOpts (b!"[] empty array XD") false =
      some (.array [], b!" empty array XD") := by decide +kernel

/-- parse_with_opts_should_parse_utf8_bom / skip_utf8_bom_should_skip_bom -/
theorem parse_bom :
    parseWithOpts ([0xEF, 0xBB, 0xBF] ++ b!"{}") true = parseWithOpts (b!"{}") true ∧
    parseWithOpts ([0xEF, 0xBB, 0xBF] ++ b!"{}") true = some (.object [], []) := by
  decide +kernel

/-- skip_utf8_bom_should_not_skip_bom_if_not_at_beginning -/
theorem parse_bom_not_at_start :
    parse (b!" " ++ [0xEF, 0xBB, 0xBF] ++ b!"{}") = none := by decide +kernel

/-- cjson_should_not_parse_to_deeply_nested_jsons: nothing nested deeper than
`CJSON_NESTING_LIMIT` is ever returned … -/
theorem parse_nesting_limit (text : Bytes) (v : JSON) (h : parse text = some v) :
    v.depth ≤ 1000 := (parse_wf text v h).2

/-- … and (new) everything up to the limit is accepted: 1000 nested arrays parse. -/
theorem parse_nesting_limit_reached (v : JSON) (hn : v.NumsNormal) (hd : v.depth = 1000) :
    parse (printUnformatted v) = some v :=
  parse_printUnformatted v ⟨hn, by simp [nestingLimit, hd]⟩

/-! ## 6. Minify  (was: `minify_tests.c`) -/

/-- New: minifying formatted output gives exactly the compact output … -/
theorem minify_print (v : JSON) : minify (print v) = printUnformatted v :=
  minify_printValue_top v true

/-- … and compact output is a fixed point. -/
theorem minify_printUnformatted (v : JSON) : minify (printUnformatted v) = printUnformatted v :=
  minify_printValue_top v false

/-- So minifying printed JSON never changes what it parses to. -/
theorem parse_minify_print (v : JSON) (h : v.WF) : parse (minify (print v)) = some v := by
  rw [minify_print]; exact parse_printUnformatted v h

/-- cjson_minify_should_not_overflow_buffer -/
theorem minify_unterminated :
    minify (b!"/* bla") = [] ∧ minify (b!"\"\\") = b!"\"\\" := by decide +kernel

/-- cjson_minify_should_remove_single_line_comments -/
theorem minify_single_line_comment :
    minify (b!"{// this is {} \"some kind\" of [] comment /*, don't you see\n}") = b!"{}" := by
  decide +kernel

/-- cjson_minify_should_remove_spaces -/
theorem minify_spaces :
    minify (b!"{ \"key\":\ttrue\r\n    }") = b!"{\"key\":true}" := by decide +kernel

/-- cjson_minify_should_remove_multiline_comments -/
theorem minify_multiline_comment :
    minify (b!"{/* this is\n a /* multi\n //line \n {comment \"\\\" */}") = b!"{}" := by
  decide +kernel

/-- cjson_minify_should_not_modify_strings -/
theorem minify_strings :
    minify (b!"\"this is a string \\\" \\t bla\"") = b!"\"this is a string \\\" \\t bla\"" := by
  decide +kernel

/-- cjson_minify_should_not_loop_infinitely (termination is by construction; this is the value) -/
theorem minify_lone_slash : minify (b!"8 / 5\n") = b!"85" := by decide +kernel

/-- New: a string ending in an escaped backslash ends where it should (cJSON gets this wrong
and treats the rest of the document as string contents). -/
theorem minify_escaped_backslash :
    minify (b!"[ \"a\\\\\" , 1 ]") = b!"[\"a\\\\\",1]" := by decide +kernel

/-- cjson_minify_should_minify_json -/
theorem minify_json :
    minify (b!"{\n    \"glossary\": { // comment\n        \"title\": \"example glossary\",\n  /* multi\n line */\n\t\t\"GlossDiv\": {\n            \"title\": \"S\",\n\t\t\t\"GlossList\": {\n                \"GlossEntry\": {\n                    \"ID\": \"SGML\",\n\t\t\t\t\t\"SortAs\": \"SGML\",\n\t\t\t\t\t\"Acronym\": \"SGML\",\n\t\t\t\t\t\"Abbrev\": \"ISO 8879:1986\",\n\t\t\t\t\t\"GlossDef\": {\n\t\t\t\t\t\t\"GlossSeeAlso\": [\"GML\", \"XML\"]\n                    },\n\t\t\t\t\t\"GlossSee\": \"markup\"\n                }\n            }\n        }\n    }\n}")
    = b!"{\"glossary\":{\"title\":\"example glossary\",\"GlossDiv\":{\"title\":\"S\",\"GlossList\":{\"GlossEntry\":{\"ID\":\"SGML\",\"SortAs\":\"SGML\",\"Acronym\":\"SGML\",\"Abbrev\":\"ISO 8879:1986\",\"GlossDef\":{\"GlossSeeAlso\":[\"GML\",\"XML\"]},\"GlossSee\":\"markup\"}}}}}" := by
  decide +kernel

/-! ## 7. Compare  (was: `compare_tests.c`) -/

/-- New: `cJSON_Compare` is symmetric. -/
theorem compare_symm (a b : JSON) (cs : Bool) : compare a b cs = compare b a cs := by
  unfold JSON.compare; rw [Nat.max_comm]; exact compareF_symm cs _ a b

/-- New: every document without duplicate keys equals itself. (With duplicate keys it need
not — `{"a":1,"a":2}` — which is cJSON's behaviour too.) -/
theorem compare_refl (v : JSON) (cs : Bool) (h : v.UniqueKeys cs) : compare v v cs = true := by
  unfold JSON.compare; rw [Nat.max_self]; exact compareF_refl cs v _ (by omega) h

theorem compare_duplicate_keys :
    compare (.object [(b!"a", num 1), (b!"a", num 2)])
      (.object [(b!"a", num 1), (b!"a", num 2)]) true = false := by decide +kernel

/-- Compare two texts, as `compare_from_string` in the C tests. -/
def cmp (a b : Bytes) (cs : Bool) : Option Bool :=
  match parse a, parse b with
  | some x, some y => some (compare x y cs)
  | _, _ => none

/-- cjson_compare_should_compare_numbers (exactly — no epsilon) -/
theorem compare_numbers : ∀ cs,
    cmp b!"1" b!"1" cs = some true ∧ cmp b!"0.0001" b!"0.0001" cs = some true ∧
    cmp b!"1E100" b!"10E99" cs = some true ∧ cmp b!"0.5E-100" b!"0.5E-101" cs = some false ∧
    cmp b!"1" b!"2" cs = some false := by decide +kernel

/-- cjson_compare_should_compare_booleans / null -/
theorem compare_literals : ∀ cs,
    cmp b!"true" b!"true" cs = some true ∧ cmp b!"false" b!"false" cs = some true ∧
    cmp b!"true" b!"false" cs = some false ∧ cmp b!"false" b!"true" cs = some false ∧
    cmp b!"null" b!"null" cs = some true ∧ cmp b!"null" b!"true" cs = some false := by decide +kernel

/-- cjson_compare_should_compare_strings (string *values* are always case sensitive) -/
theorem compare_strings : ∀ cs,
    cmp b!"\"abcdefg\"" b!"\"abcdefg\"" cs = some true ∧
    cmp b!"\"ABCDEFG\"" b!"\"abcdefg\"" cs = some false := by decide +kernel

/-- cjson_compare_should_compare_arrays -/
theorem compare_arrays : ∀ cs,
    cmp b!"[]" b!"[]" cs = some true ∧
    cmp b!"[false,true,null,42,\"string\",[],{}]" b!"[false, true, null, 42, \"string\", [], {}]" cs
      = some true ∧
    cmp b!"[[[1], 2]]" b!"[[[1], 2]]" cs = some true ∧
    cmp b!"[true,null,42,\"string\",[],{}]" b!"[false, true, null, 42, \"string\", [], {}]" cs
      = some false ∧
    cmp b!"[1,2,3]" b!"[1,2]" cs = some false := by decide +kernel

/-- cjson_compare_should_compare_objects: member order is irrelevant, key case matters only
when asked, and a subset is not equal. -/
theorem compare_objects :
    (∀ cs, cmp b!"{}" b!"{}" cs = some true) ∧
    cmp b!"{\"false\": false, \"true\": true, \"null\": null, \"number\": 42, \"string\": \"string\", \"array\": [], \"object\": {}}"
        b!"{\"true\": true, \"false\": false, \"null\": null, \"number\": 42, \"string\": \"string\", \"array\": [], \"object\": {}}"
        true = some true ∧
    cmp b!"{\"False\": false, \"true\": true, \"null\": null, \"number\": 42, \"string\": \"string\", \"array\": [], \"object\": {}}"
        b!"{\"true\": true, \"false\": false, \"null\": null, \"number\": 42, \"string\": \"string\", \"array\": [], \"object\": {}}"
        true = some false ∧
    cmp b!"{\"False\": false, \"true\": true, \"null\": null, \"number\": 42, \"string\": \"string\", \"array\": [], \"object\": {}}"
        b!"{\"true\": true, \"false\": false, \"null\": null, \"number\": 42, \"string\": \"string\", \"array\": [], \"object\": {}}"
        false = some true ∧
    cmp b!"{\"Flse\": false, \"true\": true, \"null\": null, \"number\": 42, \"string\": \"string\", \"array\": [], \"object\": {}}"
        b!"{\"true\": true, \"false\": false, \"null\": null, \"number\": 42, \"string\": \"string\", \"array\": [], \"object\": {}}"
        false = some false ∧
    (∀ cs, cmp b!"{\"one\": 1, \"two\": 2}" b!"{\"one\": 1, \"two\": 2, \"three\": 3}" cs = some false)
    := by decide +kernel

/-! ## 8. Tree API  (was: `misc_tests.c`, `cjson_add.c`) -/

/-- cjson_add_*: appending to an array puts the item last and grows the size by one. -/
theorem add_item_to_array (xs : List JSON) (x : JSON) :
    ∃ a, addItemToArray (.array xs) x = some a ∧ a.arraySize = xs.length + 1 ∧
      a.getArrayItem xs.length = some x ∧ ∀ i, i < xs.length → a.getArrayItem i = xs[i]? := by
  refine ⟨.array (xs ++ [x]), rfl, by simp [arraySize], by simp [getArrayItem], ?_⟩
  intro i hi; simp [getArrayItem, List.getElem?_append_left hi]

/-- Adding to something that is not an array / object fails (cJSON returns false). -/
theorem add_item_type_checked (x : JSON) (k : Bytes) :
    addItemToArray .null x = none ∧ addItemToArray (.object []) x = none ∧
    addItemToObject .null k x = none ∧ addItemToObject (.array []) k x = none :=
  ⟨rfl, rfl, rfl, rfl⟩

/-- cjson_array_foreach / get_array_item: indexing past the end gives nothing. -/
theorem get_array_item_out_of_range (xs : List JSON) (i : Nat) (h : xs.length ≤ i) :
    (JSON.array xs).getArrayItem i = none := by
  simp [getArrayItem, h]

/-- cjson_add_item_to_object: a fresh key is found afterwards, with the value added. -/
theorem add_item_to_object (ms : List (Bytes × JSON)) (k : Bytes) (x : JSON) (cs : Bool)
    (h : (JSON.object ms).getObjectItem k cs = none) :
    ∃ o, addItemToObject (.object ms) k x = some o ∧ o.getObjectItem k cs = some x ∧
      o.arraySize = ms.length + 1 := by
  refine ⟨.object (ms ++ [(k, x)]), rfl, ?_, by simp [arraySize]⟩
  simp only [getObjectItem, Option.map_eq_none_iff] at h
  simp [getObjectItem, List.find?_append, h, List.find?, keyEq_refl]

/-- …and existing members keep their values (first match wins, like cJSON). -/
theorem add_item_to_object_preserves (ms : List (Bytes × JSON)) (k k' : Bytes) (x y : JSON)
    (cs : Bool) (h : (JSON.object ms).getObjectItem k' cs = some y) :
    (JSON.object (ms ++ [(k, x)])).getObjectItem k' cs = some y := by
  simp only [getObjectItem, Option.map_eq_some_iff] at h ⊢
  obtain ⟨m, hm, rfl⟩ := h
  exact ⟨m, by simp [List.find?_append, hm], rfl⟩

/-- cjson_get_object_item_should_get_object_items: the default lookup ignores ASCII case,
the case-sensitive one does not. -/
theorem get_object_item_case :
    let o := JSON.object [(b!"one", num 1), (b!"Two", num 2), (b!"tHree", num 3)]
    o.getObjectItem (b!"one") = some (num 1) ∧ o.getObjectItem (b!"tWo") = some (num 2) ∧
    o.getObjectItem (b!"three") = some (num 3) ∧ o.getObjectItem (b!"four") = none ∧
    o.getObjectItem (b!"one") true = some (num 1) ∧
    o.getObjectItem (b!"Two") true = some (num 2) ∧
    o.getObjectItem (b!"tWo") true = none ∧ o.getObjectItem (b!"four") true = none := by
  decide +kernel

/-- A key found case-sensitively is also found case-insensitively. -/
theorem get_object_item_cs_imp_ci (o : JSON) (k : Bytes)
    (h : (o.getObjectItem k true).isSome) : o.hasObjectItem k = true := by
  cases o <;> simp only [getObjectItem, Option.isSome_map, List.find?_isSome, Option.isSome_none] at h
  · simp at h
  · simp at h
  · simp at h
  · simp at h
  · simp at h
  rename_i ms
  obtain ⟨m, hm, hk⟩ := h
  simp only [hasObjectItem, getObjectItem, Option.isSome_map, List.find?_isSome]
  refine ⟨m, hm, ?_⟩
  have : m.1 = k := by simpa [keyEq] using hk
  simp [keyEq, this]

/-- cjson_get_object_item_should_not_crash_with_array: only objects have members. -/
theorem get_object_item_non_object (k : Bytes) (cs : Bool) (xs : List JSON) :
    (JSON.array xs).getObjectItem k cs = none ∧ JSON.null.getObjectItem k cs = none :=
  ⟨rfl, rfl⟩

/-- typecheck_functions_should_check_type -/
theorem typecheck :
    JSON.null.isNull ∧ (JSON.bool true).isTrue ∧ (JSON.bool false).isFalse ∧
    (JSON.bool true).isBool ∧ (num 1).isNumber ∧ (str!"x").isString ∧
    (JSON.array []).isArray ∧ (JSON.object []).isObject ∧
    ¬ (num 1).isString ∧ ¬ (JSON.bool false).isTrue ∧ ¬ (JSON.array []).isObject := by
  decide +kernel

/-- cjson_detach_item…: detaching item `i` returns exactly that item and shrinks the array. -/
theorem detach_item_from_array (xs : List JSON) (i : Nat) (h : i < xs.length) :
    ∃ a, detachItemFromArray (.array xs) i = some (xs[i], a) ∧ a.arraySize + 1 = xs.length := by
  refine ⟨.array (xs.eraseIdx i), by simp [detachItemFromArray, h], ?_⟩
  simp [arraySize, List.length_eraseIdx, h]; omega

/-- Detaching what was just inserted undoes the insertion. -/
theorem detach_insert (xs : List JSON) (i : Nat) (x : JSON) (h : i ≤ xs.length) :
    (insertItemInArray (.array xs) i x).bind (·.detachItemFromArray i) = some (x, .array xs) := by
  have hl : (xs.take i).length = i := by simp; omega
  simp only [insertItemInArray, Option.bind_some, detachItemFromArray]
  rw [List.getElem?_append_right (by omega)]
  simp only [hl, Nat.sub_self, List.getElem?_cons_zero, Option.map_some, Option.some.injEq,
    Prod.mk.injEq, true_and, JSON.array.injEq]
  rw [List.eraseIdx_append_of_length_le (by omega)]
  simp [hl]

/-- cjson_insert_item_in_array: the new item sits at index `i`, later items shift by one. -/
theorem insert_item_in_array (xs : List JSON) (i : Nat) (x : JSON) (h : i ≤ xs.length) :
    ∃ a, insertItemInArray (.array xs) i x = some a ∧ a.getArrayItem i = some x ∧
      a.arraySize = xs.length + 1 := by
  have hl : (xs.take i).length = i := by simp; omega
  refine ⟨_, rfl, ?_, ?_⟩
  · simp only [getArrayItem]
    rw [List.getElem?_append_right (by omega)]; simp [hl]
  · simp [arraySize]; omega

/-- Inserting past the end appends (cJSON: "append to the end"). -/
theorem insert_item_past_end (xs : List JSON) (i : Nat) (x : JSON) (h : xs.length ≤ i) :
    insertItemInArray (.array xs) i x = addItemToArray (.array xs) x := by
  simp [insertItemInArray, addItemToArray, List.take_of_length_le h, List.drop_eq_nil_of_le h]

/-- cjson_replace_item…: replacing item `i` changes that item and nothing else. -/
theorem replace_item_in_array (xs : List JSON) (i : Nat) (x : JSON) (h : i < xs.length) :
    ∃ a, replaceItemInArray (.array xs) i x = some a ∧ a.getArrayItem i = some x ∧
      a.arraySize = xs.length ∧ ∀ j, j ≠ i → a.getArrayItem j = xs[j]? := by
  refine ⟨.array (xs.set i x), by simp [replaceItemInArray, h], by simp [getArrayItem, h],
    by simp [arraySize], ?_⟩
  intro j hj; simp [getArrayItem, List.getElem?_set_ne (Ne.symm hj)]

/-- Replacing a missing item fails. -/
theorem replace_item_out_of_range (xs : List JSON) (i : Nat) (x : JSON) (h : xs.length ≤ i) :
    replaceItemInArray (.array xs) i x = none := by
  simp [replaceItemInArray]; omega

/-- cjson_delete_item_from_array_should_not_broken_list_structure: delete first, last, middle. -/
theorem delete_item_from_array_vectors :
    let a := JSON.array [num 1, num 2, num 3]
    a.deleteItemFromArray 0 = .array [num 2, num 3] ∧
    a.deleteItemFromArray 2 = .array [num 1, num 2] ∧
    a.deleteItemFromArray 1 = .array [num 1, num 3] ∧
    a.deleteItemFromArray 3 = a ∧
    ((a.deleteItemFromArray 0).deleteItemFromArray 0).deleteItemFromArray 0 = .array [] := by
  decide +kernel

theorem replaceFirst_spec {α} (p : α → Bool) (y : α) (hy : p y = true) :
    ∀ (l l' : List α), replaceFirst p y l = some l' → l'.find? p = some y ∧ l'.length = l.length
  | [], _, h => by simp [replaceFirst] at h
  | x :: xs, l', h => by
    unfold replaceFirst at h
    by_cases hx : p x = true
    · simp [hx] at h; subst h; simp [List.find?, hy]
    · simp only [hx] at h
      cases hr : replaceFirst p y xs with
      | none => simp [hr] at h
      | some t =>
        simp [hr] at h; subst h
        have := replaceFirst_spec p y hy xs t hr
        simp [List.find?, hx, this.1, this.2]

/-- cjson_replace_item_in_object_should_preserve_name: after replacing `key`, looking up
`key` gives the new value, and the object has as many members as before. -/
theorem replace_item_in_object (o o' : JSON) (k : Bytes) (x : JSON) (cs : Bool)
    (h : o.replaceItemInObject k x cs = some o') :
    o'.getObjectItem k cs = some x ∧ o'.arraySize = o.arraySize := by
  cases o <;> simp [replaceItemInObject] at h
  rename_i ms
  obtain ⟨l, hl, rfl⟩ := h
  have := replaceFirst_spec (fun m : Bytes × JSON => keyEq cs m.1 k) (k, x) (keyEq_refl cs k) ms l hl
  simp [getObjectItem, arraySize, this.1, this.2]

/-- Replacing fails exactly when the key is absent. -/
theorem replace_item_in_object_missing (ms : List (Bytes × JSON)) (k : Bytes) (x : JSON)
    (cs : Bool) (h : (JSON.object ms).getObjectItem k cs = none) :
    (JSON.object ms).replaceItemInObject k x cs = none := by
  simp only [getObjectItem, Option.map_eq_none_iff] at h
  simp only [replaceItemInObject, Option.map_eq_none_iff]
  induction ms with
  | nil => rfl
  | cons m ms ih =>
    simp only [List.find?] at h
    by_cases hm : keyEq cs m.1 k = true
    · simp [hm] at h
    · simp only [hm] at h
      simp [replaceFirst, hm, ih h]

theorem eraseFirst_spec {α} (p : α → Bool) :
    ∀ (l : List α) (y : α) (r : List α), eraseFirst p l = some (y, r) →
      l.find? p = some y ∧ r.length + 1 = l.length
  | [], _, _, h => by simp [eraseFirst] at h
  | x :: xs, y, r, h => by
    unfold eraseFirst at h
    by_cases hx : p x = true
    · simp [hx] at h; obtain ⟨rfl, rfl⟩ := h; simp [List.find?, hx]
    · simp only [hx] at h
      cases hr : eraseFirst p xs with
      | none => simp [hr] at h
      | some t =>
        obtain ⟨y', r'⟩ := t
        simp [hr] at h; obtain ⟨rfl, rfl⟩ := h
        have := eraseFirst_spec p xs y' r' hr
        simp [List.find?, hx, this.1]; exact this.2

/-- cjson_detach_item_from_object: what is detached is what a lookup would have found, and
the object loses exactly one member. -/
theorem detach_item_from_object (o o' : JSON) (k : Bytes) (x : JSON) (cs : Bool)
    (h : o.detachItemFromObject k cs = some (x, o')) :
    o.getObjectItem k cs = some x ∧ o'.arraySize + 1 = o.arraySize := by
  cases o <;> simp [detachItemFromObject] at h
  rename_i ms
  obtain ⟨a, b, r, hr, rfl, rfl⟩ := h
  have := eraseFirst_spec _ ms (a, b) r hr
  simp [getObjectItem, arraySize, this.1, this.2]

/-- Deleting a key that is not there changes nothing (vectors: present, absent, by case). -/
theorem delete_item_from_object_vectors :
    let o := JSON.object [(b!"a", num 1), (b!"B", num 2), (b!"a", num 3)]
    o.deleteItemFromObject (b!"a") = .object [(b!"B", num 2), (b!"a", num 3)] ∧
    o.deleteItemFromObject (b!"b") = .object [(b!"a", num 1), (b!"a", num 3)] ∧
    o.deleteItemFromObject (b!"b") true = o ∧ o.deleteItemFromObject (b!"zz") = o := by
  decide +kernel

/-- cJSON_Duplicate: a deep copy is equal; a shallow copy has no children. -/
theorem duplicate_spec (v : JSON) :
    v.duplicate true = v ∧ (v.duplicate false).arraySize = 0 := by
  refine ⟨rfl, ?_⟩
  cases v <;> simp [duplicate, arraySize]

/-- cjson_get_string_value / cjson_get_number_value -/
theorem get_values :
    (str!"test").getStringValue = some (b!"test") ∧ (num 1).getStringValue = none ∧
    (num 1).getNumberValue = some ⟨1, 0⟩ ∧ (str!"test").getNumberValue = none ∧
    JSON.ofInt 1500 = num 15 2 := by decide +kernel

/-! ## 9. README example  (was: `readme_examples.c`) -/

/-- create_monitor: build the document with the API, print it, get the README text. -/
theorem readme_create_monitor :
    let res (w h : Int) := JSON.object [(b!"width", .ofInt w), (b!"height", .ofInt h)]
    let monitor := (JSON.object []).addItemToObject (b!"name") (str!"Awesome 4K")
      |>.bind (·.addItemToObject (b!"resolutions")
          (.array [res 1280 720, res 1920 1080, res 3840 2160]))
    monitor.map print = some (b!"{\n\t\"name\":\t\"Awesome 4K\",\n\t\"resolutions\":\t[{\n\t\t\t\"width\":\t1280,\n\t\t\t\"height\":\t720\n\t\t}, {\n\t\t\t\"width\":\t1920,\n\t\t\t\"height\":\t1080\n\t\t}, {\n\t\t\t\"width\":\t3840,\n\t\t\t\"height\":\t2160\n\t\t}]\n}") := by
  decide +kernel

/-- supports_full_hd: read the same document back and query it. -/
theorem readme_supports_full_hd :
    let doc := parse (b!"{\n\t\"name\":\t\"Awesome 4K\",\n\t\"resolutions\":\t[{\n\t\t\t\"width\":\t1280,\n\t\t\t\"height\":\t720\n\t\t}, {\n\t\t\t\"width\":\t1920,\n\t\t\t\"height\":\t1080\n\t\t}, {\n\t\t\t\"width\":\t3840,\n\t\t\t\"height\":\t2160\n\t\t}]\n}")
    (doc.bind (·.getObjectItem (b!"name"))).bind (·.getStringValue) = some (b!"Awesome 4K") ∧
    ((doc.bind (·.getObjectItem (b!"resolutions"))).bind (·.getArrayItem 1)).bind
      (·.getObjectItem (b!"width")) = some (num 192 1) := by decide +kernel

end CJson.Spec
