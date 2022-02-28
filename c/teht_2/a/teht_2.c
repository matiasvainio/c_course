#include <stdio.h>

void main() {
    char nimi[5] = "Pekka";
    char *p1 = nimi;
    char *p2 = &nimi[sizeof(nimi) - 1];

    while (p2 > p1) {
        char temp = *p1;
        *p1++ = *p2;
        *p2-- = temp;

    }

    printf("%s", nimi);
}