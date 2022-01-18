#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// globaalit muuttujat
char nimi[21], puskuri[21];
int ika;

void kysyNimi() {
    printf(" Anna nimesi ");
    fgets(nimi, 21, stdin);
    nimi[strcspn(nimi, "\n")] = 0;  // Poistetaan \n nimen lopusta.
}
void kysyIka() {
    printf(" Anna ikäsi ");
    fgets(puskuri, 21, stdin);
    ika = strtol(puskuri, NULL, 0);
}
void tulostaNimi() {
    printf(" Nimi: %s \n", nimi);
}
void tulostaIka() {
    printf(" Ikä: %d \n", ika);
}

void tulostaValikko() {
    char v;
    do {
        printf("-----------------------Syöttö/Tulostus-testaus----------------------------------");
        printf("\n\n\n\n");
        printf("\t\t\t\tKysy nimi\t\t1");
        printf("\n\t\t\t\tKysy ikä\t\t2");
        printf("\n\t\t\t\tTulosta nimi\t\t3");
        printf("\n\t\t\t\tTulosta ikä\t\t4");
        printf("\n\t\t\t\tLopetus\t\t\t5");
        printf("\n\n\n\t\t\t\tValitse: ");
        v = getchar();
        getchar();  // kulutetaan enterin painallus
        switch (v) {
            case '1':
                kysyNimi();
                break;
            case '2':
                kysyIka();
                break;
            case '3':
                tulostaNimi();
                break;
            case '4':
                tulostaIka();
                break;
            case '5':
                break;
        }
    } while (v != '5');
}

void main() {
    tulostaValikko();
}
