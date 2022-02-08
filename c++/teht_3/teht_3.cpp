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
    return mk;
}

int matkustus(Matkakortti* mk, double hinta) {
    return 0;
}

void lataus(Matkakortti* mk) {
}

void tulostaTiedot(Matkakortti* mk) {
}

void tulostaValikko() {
    char v;

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
                alustus();
                break;
            case '2':
                // lataus();
                break;
                // case '3':
                // // matkustus();
                // case '4':
                // // matkustus();
                // case '5':
                //     // tulostaTiedot();
            default:
                break;
        }

    } while (v != '6');
}