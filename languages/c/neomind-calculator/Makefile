CC ?= cc
CFLAGS ?= -std=c11 -Wall -Wextra -Werror -pedantic -O2
TARGET := build/calculator

.PHONY: all test clean
all: $(TARGET)

$(TARGET): src/main.c
	mkdir -p build
	$(CC) $(CFLAGS) $< -o $@

test: $(TARGET)
	sh tests/test_cli.sh ./$(TARGET)

clean:
	rm -rf build
