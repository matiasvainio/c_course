#include <iostream>

using namespace std;
#define MAX 10

typedef struct kokoelma {
    char nimi[41];
    char tekija[31];
    int jvuosi;
} aanite;

aanite levy, *levyOsoitin, levyt[MAX];

int kysyTiedot() {
    /* pyytää äänitteiden tiedot käyttäjältä. palauttaa arvonaan syötettyjen lukumäärän*/
    char rivi[81];
    int i;
    levyOsoitin = &levy;  // asetetaan osoitin osoitamaan levy-muuttujaa
    printf("kirjoita äänilevykokoelmasi tiedot. Lopetus: \"teoksen nimi\"-kentässä = *\n");
    i = 0;
    do {
        printf("\nteoksen nimi? (40 merkkiä) ");
        levyOsoitin = &levyt[i];
        cin.getline(levyOsoitin->nimi, sizeof(levy.nimi));

        if (levyOsoitin->nimi[0] != '*') {
            printf("\ntekijä? (30 merkkiä) ");
            cin.getline(levyOsoitin->tekija, sizeof(levy.tekija));
            printf("\njulkaisuvuosi? ");
            cin.getline(rivi, sizeof(rivi));

            while (sscanf(rivi, "%d", &levyOsoitin->jvuosi) != 1) {
                printf("\nantamasi tieto ei ollut numeerinen. Kirjoita uusi\n");
                cin.getline(rivi, sizeof(rivi));
            }
            i++;
        }
    } while ((levyOsoitin->nimi[0] != '*') && (i < MAX));
    return (i);
}

void tulostaTiedot(int lkm) {
    int i = 0;
    if (lkm == 0) {
        printf("Et syöttänyt yhtäkään levyä\n");
    } else
        for (i = 0; i < lkm; i++) {
            printf("\n%-30s %-25s %d", levyt[i].nimi, levyt[i].tekija, levyt[i].jvuosi);
        }
    printf("\n");  // rivinvaihto
}

int main() {
    tulostaTiedot(kysyTiedot());
}