#include <stdio.h>
#include <string.h>

void day1_part1() { printf("Running Day 1 Part 1\n"); }

int main() {
	printf("Advent of Code 2023 in C\n");
    char input[16];

    printf("Please enter program to run ie: d1p1, d1p2, d2p1, d2p2, etc.\n");
    printf("> ");
    if (scanf("%15s", input) != 1) {
        printf("Input error.\n");
        return 1;
    }

    if (strcmp(input, "d1p1") == 0) {
        day1_part1();
    } else {
        printf("Unknown program: %s\n", input);
    }

    return 0;
}
