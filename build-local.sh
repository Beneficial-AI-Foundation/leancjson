#!/bin/sh
# Compile the Lean-generated C in ./c (pulled from VD) into ./build-local/cjson.
# Only the modules the executable needs are compiled; proof/spec modules contain no code.
set -e
cd "$(dirname "$0")"
TC=$(cat lean-toolchain)
LEANC="$HOME/.elan/bin/leanc"
export ELAN_TOOLCHAIN="$TC"
mkdir -p build-local/obj
OBJS=""
for f in $(cd c && find . -name '*.c' | sort); do
  o="build-local/obj/$(echo "$f" | sed 's|^\./||; s|/|_|g; s|\.c$|.o|')"
  "$LEANC" -c -O3 -DNDEBUG -o "$o" "c/$f"
  OBJS="$OBJS $o"
done
"$LEANC" -o build-local/cjson $OBJS
echo "built build-local/cjson"
