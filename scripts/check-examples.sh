#!/bin/sh
# End-to-end check of the compiled binary (the C generated from Lean) against cJSON's
# tests/inputs: `cjson print testN` must equal testN.expected. The same facts are specs
# (CJson/SpecExamples.lean); this only confirms the C toolchain and IO shell agree.
# usage: scripts/check-examples.sh path/to/cjson path/to/cJSON/tests/inputs
set -e
BIN=$1; IN=$2; fail=0
for t in 1 2 3 4 5 7 8 9 10 11; do
  if [ "$("$BIN" print "$IN/test$t")" = "$(cat "$IN/test$t.expected")" ]; then echo "test$t ok"
  else echo "test$t DIFFERS"; fail=1; fi
done
if "$BIN" print "$IN/test6" >/dev/null 2>&1; then echo "test6 should not parse"; fail=1; else echo "test6 ok (rejected)"; fi
exit $fail
