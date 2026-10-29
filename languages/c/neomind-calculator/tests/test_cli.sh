#!/bin/sh
set -eu
calculator=$1
[ "$("$calculator" add 2 3)" = 5 ]
[ "$("$calculator" add -7 2)" = -5 ]
[ "$("$calculator" add 0 0)" = 0 ]
if "$calculator" add 1 nope >/dev/null 2>&1; then
    echo 'Expected invalid input to fail' >&2
    exit 1
fi
if "$calculator" multiply 2 3 >/dev/null 2>&1; then
    echo 'Expected an unsupported operation to fail' >&2
    exit 1
fi
if "$calculator" >/dev/null 2>&1; then
    echo 'Expected missing arguments to fail' >&2
    exit 1
fi
printf 'All calculator tests passed.\n'
