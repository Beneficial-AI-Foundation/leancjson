#!/bin/sh
# Regenerate CJson/Audit.lean (the axiom audit of every spec). Run after changing specs.
set -e
cd "$(dirname "$0")"
lake build CJson.Spec CJson.SpecExamples
python3 -I scripts/gen_audit.py
