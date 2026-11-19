#!/bin/sh
# Usage: ./vd.sh push | build | pull | all
# push: local source -> VD:~/leancjson ; build: lake build on VD (this is the verification:
# every spec and the axiom audit are checked there) ; pull: generated C -> ./c/
set -e
cd "$(dirname "$0")"
HOST=${VD_HOST:-VD}
RDIR=leancjson
SSH="ssh -o LogLevel=ERROR"
push()  { rsync -az --delete -e "$SSH" --exclude .git --exclude .lake --exclude c --exclude build-local ./ "$HOST:$RDIR/"; }
build() { $SSH "$HOST" "cd $RDIR && PATH=\$HOME/.elan/bin:\$PATH timeout 900 lake build CJson +Main 2>&1"; }
pull()  { mkdir -p c && rsync -az --delete -e "$SSH" --include '*/' --include '*.c' --exclude '*' --prune-empty-dirs "$HOST:$RDIR/.lake/build/ir/" c/; }
case "${1:-all}" in
  push) push;; build) build;; pull) pull;;
  all) push; build; pull;;
  *) echo "usage: $0 push|build|pull|all" >&2; exit 1;;
esac
