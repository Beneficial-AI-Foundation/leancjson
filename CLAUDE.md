# leancjson — cJSON rewritten in Lean 4, formally verified

## Workflow
- Source of truth is this directory; `./vd.sh push|build|pull|all` rsyncs it to `VD:~/leancjson`,
  runs `lake build CJson +Main` there (Lean 4.36.0, no Mathlib — VD has 3 GB RAM), and pulls the
  generated C into `./c/`. VD cannot compile C (glibc too old for Lean's clang).
- `./build-local.sh` compiles `./c/` with the local leanc into `build-local/cjson`.
- `scripts/check-examples.sh build-local/cjson <cJSON>/tests/inputs` is an end-to-end smoke
  check of the compiled binary; it is not where correctness comes from.

## Specs, not tests
- There are no runtime unit tests. `CJson/Spec.lean` is the test suite (each section names the
  cJSON `tests/*.c` file it replaces); `CJson/SpecExamples.lean` is generated from cJSON's
  `tests/inputs` by `scripts/gen_examples.py`.
- Any new or changed behaviour gets a spec in `CJson/Spec.lean`, with a docstring saying what
  it guarantees. Then run `./audit.sh`: it regenerates `CJson/Audit.lean` (`#guard_msgs` +
  `#print axioms` for every spec) and fails on any axiom other than `propext`,
  `Classical.choice`, `Quot.sound`.
- State specs for all inputs where possible. Concrete vectors use `decide +kernel`
  (kernel-checked, no extra axioms); never `native_decide`.
- Write byte literals in specs as `b!"text"` (expands to an explicit byte list), not
  `bytes "text"`: the kernel is ~1000x slower when it has to evaluate `String.toUTF8`.
- Supporting lemmas go in `CJson/Proofs/`; `Spec.lean` stays a readable list of guarantees.
- When a spec needs an assumption (`WF`, `UniqueKeys`, `NumEnd`), keep it satisfiable and
  prove where it comes from (e.g. `parse_wf`: everything the parser returns is `WF`).
- Not covered by specs: the IO shell in `Main.lean`.

## Design constraints worth knowing
- Parser loops are structurally recursive on fuel. The fuel is one length bound computed once
  in `parseWithOpts` and passed down (`len`); do not recompute `s.length` inside the parser —
  that made parsing quadratic.
- Numbers are exact decimals (`Num`), not `Float`: Lean's `Float` is opaque to proofs.
