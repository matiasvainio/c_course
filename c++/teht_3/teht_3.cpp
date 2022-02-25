#include "teht_3.h"

#include <iostream>
#include <string>

#include "matkakortti.h"

using namespace std;

const double SISAINEN = 2.5, SEUTU = 3.3;

int main() {
    tulostaValikko();
    return 0;
}

Matkakortti alustus() {
    Matkakortti mk;
    string nimi;
    double arvo;
    cout << "Nimi: ";
    cin >> nimi;
    cout << "Arvo: ";
    cin >> arvo;

    mk.setNimi(nimi);
    mk.setArvo(arvo);

    return mk;
}

int matkustus(Matkakortti* mk, double hinta) {
    if (mk->getArvo() - hinta <= mk->getArvo()) {
        mk->setArvo(mk->getArvo() - hinta);
        cout << "Arvoa jäljellä " << mk->getArvo() << endl;
    } else {
        cout << "Arvo ei riitä." << endl;
    }
    return 0;
}

void lataus(Matkakortti* mk) {
    double arvo;
    cout << "Arvon lataus:" << endl;
    cout << "Anna arvo: ";
    cin >> arvo;

    mk->setArvo(mk->getArvo() + arvo);

    cout << "Arvoa jäljellä: " << mk->getArvo() << endl;
}

void tulostaTiedot(Matkakortti* mk) {
    cout << "Kortin tiedot." << endl;
    cout << "Nimi: " << mk->getNimi() << endl;
    cout << "Arvo: " << mk->getArvo() << endl;
}

int tarkistaKortinOlemeassaOlo(Matkakortti* ptr) {
    if (ptr != NULL) {
        return 1;
    } else {
        cout << "Matkakorttia ei ole luotu." << endl;
        return 0;
    }
}

void tulostaValikko() {
    char v;
    Matkakortti mk;
    Matkakortti* ptr = NULL;

    do {
        cout << "Valikko:" << endl;
        cout << "1. Luo matkakortti" << endl;
        cout << "2. Lataa saldoa" << endl;
        cout << "3. Matkusta helsingissä" << endl;
        cout << "4. Matkusta seutuliikenteessä" << endl;
        cout << "5. Tulosta kortin tiedot" << endl;
        cout << "6. Lopetus" << endl;
        cout << "Valitse:" << endl;

        cin >> v;

        switch (v) {
            case '1':
                mk = alustus();
                ptr = &mk;
                break;
            case '2':
                if (tarkistaKortinOlemeassaOlo(ptr) == 1) {
                    lataus(ptr);
                }
                break;
            case '3':
                if (tarkistaKortinOlemeassaOlo(ptr) == 1) {
                    matkustus(ptr, SISAINEN);
                }
                break;
            case '4':
                if (tarkistaKortinOlemeassaOlo(ptr) == 1) {
                    matkustus(ptr, SEUTU);
                }
                break;
            case '5':
                if (tarkistaKortinOlemeassaOlo(ptr) == 1) {
                    tulostaTiedot(ptr);
                }
                break;
            default:
                break;
        }

    } while (v != '6');
}