#include <stdio.h>

void main() {
    char nimi[5] = "Pekka";
    char *p1 = nimi;
    char *p2 = &nimi[sizeof(nimi) - 1];

    while (p2 != p1 - 1) {
        printf("%c", *p2);
        p2 -= 1;
    }
}