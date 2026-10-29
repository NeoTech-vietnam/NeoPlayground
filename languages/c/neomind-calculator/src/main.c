#include <errno.h>
#include <limits.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

static int parse_number(const char *text, long *value) {
    char *end;
    errno = 0;
    *value = strtol(text, &end, 10);
    return errno == 0 && end != text && *end == '\0';
}

int main(int argc, char **argv) {
    long left, right;
    if (argc != 4 || strcmp(argv[1], "add") != 0 ||
        !parse_number(argv[2], &left) || !parse_number(argv[3], &right)) {
        fprintf(stderr, "Usage: %s add <integer> <integer>\n", argv[0]);
        return 2;
    }
    if ((right > 0 && left > LONG_MAX - right) ||
        (right < 0 && left < LONG_MIN - right)) {
        fprintf(stderr, "Error: integer overflow\n");
        return 1;
    }
    printf("%ld\n", left + right);
    return 0;
}
