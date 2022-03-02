#include "main.h"

#include <iostream>
#include <string>
#include <memory>

#include "matkakortti.h"

using namespace std;

const double SISAINEN = 2.5, SEUTU = 3.3;

int main() {
    shared_ptr<Matkakortti> ptr;
    tulostaValikko(ptr);
    // Ei pitäisi tulostaa mitään.
    cout << "Arvo mainissa valikkofunktion jälkeen: " << *ptr->getArvo() << endl;
    return 0;
}

 shared_ptr<Matkakortti> alustus() {
    string nimi;
    double arvo;
    cout << "Nimi: ";
    cin >> nimi;
    cout << "Arvo: ";
    cin >> arvo;

    shared_ptr<string> nimiPtr(new string(nimi));
    shared_ptr<double> arvoPtr(new double(arvo));

    shared_ptr<Matkakortti> mk(new Matkakortti(nimiPtr, arvoPtr));

    return mk;
}

int matkustus(shared_ptr<Matkakortti> mk, double hinta) {
    if (*mk->getArvo() - hinta >= 0) {
        mk->setArvo(*mk->getArvo() - hinta);
        cout << "Arvoa jäljellä " << *mk->getArvo() << endl;
    } else {
        cout << "Arvo ei riitä." << endl;
    }

    return 0;
}

void lataus(shared_ptr<Matkakortti> mk) {
    double arvo;
    cout << "Arvon lataus:" << endl;
    cout << "Anna arvo: ";
    cin >> arvo;

    mk->setArvo(*mk->getArvo() + arvo);

    cout << "Arvoa jäljellä: " << *mk->getArvo() << endl;
}

void tulostaTiedot(shared_ptr<Matkakortti> mk) {
    cout << "Kortin tiedot." << endl;
    cout << "Nimi: " << *mk->getNimi() << endl;
    cout << "Arvo: " << *mk->getArvo() << endl;
}

int tarkistaKortinOlemeassaOlo(shared_ptr<Matkakortti> ptr) {
    if (ptr != NULL) {
        return 1;
    } else {
        cout << "Matkakorttia ei ole luotu." << endl;
        return 0;
    }
}

void tulostaValikko(shared_ptr<Matkakortti> ptr) {
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
                ptr = alustus();
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

    cout << "Arvo valikkofunktion lopussa: " << *ptr->getArvo() << endl;

}