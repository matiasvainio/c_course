#include <stdio.h>
#include <string.h>

struct Matkakortti {
    char nimi[128];
    double arvo;
};

struct Matkakortti alustus(char*);
void lataus(struct Matkakortti*, int);
int matkustus(struct Matkakortti*, double);
void tulostaValikko();
void tulostaTiedot(struct Matkakortti*);
double tarkistaSyote(char[], double);

double sisainen = 2.5, seutu = 3.8;
void main() {
    tulostaValikko();
}

struct Matkakortti alustus(char* nimi) {
    struct Matkakortti mk;
    strcpy(mk.nimi, nimi);
    return mk;
}

void lataus(struct Matkakortti* mk, int maara) {
    mk->arvo += maara;
}

int matkustus(struct Matkakortti* mk, double matka) {
    if (mk->arvo - matka > 0) {
        mk->arvo = mk->arvo - matka;
        return 1;
    }
    return 0;
}

void tulostaTiedot(struct Matkakortti* mk) {
    printf("Nimi: %s\n", mk->nimi);
    printf("Saldo: %.2f\n", mk->arvo);
}

double tarkistaSyote(char buffer[100], double saldo) {
    do {
        if (sscanf(buffer, "%lf", &saldo) == 0) {
            printf("Arvo numerona:\n");
        }
        fgets(buffer, sizeof(&buffer), stdin);
    } while (sscanf(buffer, "%lf", &saldo) != 1);
    return saldo;
}

void tulostaValikko() {
    struct Matkakortti mk;
    struct Matkakortti* ptr;
    ptr = NULL;

    char v;
    char nimi[128], buffer[100] = {0};
    double saldo;

    do {
        printf("---------------------------------Valikko------------------------------");
        printf("\n\n\n\n");
        printf("\t\t\tLuo matkakortti\t\t\t1");
        printf("\n\t\t\tLataa saldoa\t\t\t2");
        printf("\n\t\t\tMatkusta Helsingissä\t\t3");
        printf("\n\t\t\tMatkusta seutuliikenteessä\t4");
        printf("\n\t\t\tTulosta kortin tiedot\t\t5");
        printf("\n\t\t\tAseta sisäisen lipun hinta\t6");
        printf("\n\t\t\tAseta seutulipun hinta\t\t7");
        printf("\n\t\t\tLopetus\t\t\t\t8");
        printf("\n\t\t\tValitse: ");

        fgets(buffer, sizeof(&v), stdin);
        sscanf(buffer, "%c", &v);

        while (!ptr && v != '1') {
            printf("Matkakortti täytyy luoda ensin.\n");
            fgets(buffer, sizeof(&v), stdin);
            sscanf(buffer, "%c", &v);
            if (v == '1') {
                break;
            }
        }

        switch (v) {
            case '1':
                printf("%s\n", "Anna nimi:");
                fgets(nimi, 128, stdin);
                nimi[strcspn(nimi, "\n")] = 0;

                printf("%s\n", "Anna saldo:");
                saldo = tarkistaSyote(buffer, saldo);

                mk = alustus(nimi);
                ptr = &mk;
                lataus(ptr, saldo);
                break;
            case '2':
                printf("%s\n", "Syötä saldon määrä:");
                saldo = tarkistaSyote(buffer, saldo);
                lataus(ptr, saldo);
                break;
            case '3':
                if (matkustus(ptr, sisainen) == 1) {
                    printf("Matkustus helsingissä. Hinta %.2f\n", sisainen);
                    printf("Kortilla arvoa jäljellä: %.2f\n", ptr->arvo);
                } else {
                    printf("Ei riittävästi arvoa. Lataa lippuun lisää rahaa.\n");
                }
                break;
            case '4':
                if (matkustus(ptr, seutu) == 1) {
                    printf("Matkustus seutuliienteessä. Hinta %.2f\n", seutu);
                    printf("Kortilla arvoa jäljellä: %.2f\n", ptr->arvo);
                } else {
                    printf("Ei riittävästi arvoa. Lataa lippuun lisää rahaa.\n");
                }
                break;
            case '5':
                tulostaTiedot(ptr);
                break;
            case '6':
                printf("Syötä sisäisen lipun hinta (Nykyinen hinta %.2f):\n", sisainen);
                sisainen = tarkistaSyote(buffer, sisainen);
                break;
            case '7':
                printf("Syötä seutulipun hinta (Nykyinen hinta %.2f):\n", seutu);
                seutu = tarkistaSyote(buffer, seutu);
                break;
        }
    } while (v != '8');
}