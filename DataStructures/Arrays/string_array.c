#include <stdio.h>

int main() {
    char str[] = "Hello, World!";

    for (int i = 0; str[i] != '\0'; i++) {
        printf("Character at index %d: %c\n", i, str[i]);
    }

    return 0;
}