# NeoMind Calculator — C flow demo

A small command-line calculator used as a reproducible target for a future NeoMind flow. It currently supports integer addition, rejects invalid input and detects addition overflow.

## Requirements

A C11 compiler, `make`, and a POSIX shell (tested on Linux).

## Build and test

```sh
make
./build/calculator add 2 3  # prints 5
make test
```

Run `make clean` to remove generated files. All commands above are run from this directory.

## Suggested task for a NeoMind demo

> Add a `subtract` operation to the calculator. Keep the existing `add` behaviour. Handle invalid input and integer overflow, and add meaningful tests for normal and boundary cases. Update the usage text and this README.

Expected flow: inspect and propose a plan; wait for user approval; implement; have an independent reviewer verify the change and tests; commit locally after acceptance. The project is a demo target: NeoMind's real runner and its Run button are still under development, so this is not yet an end-to-end execution result.
