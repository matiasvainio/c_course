# Matkakortti.cpp
```
#include "matkakortti.h"

#include <iostream>
#include <string>

Matkakortti::Matkakortti(std::string _nimi, double _arvo) : nimi(new string(_nimi)), arvo(new double(_arvo)) {}

Matkakortti::~Matkakortti() {
    delete nimi, arvo;
}

void Matkakortti::setNimi(std::string input) {
    *this->nimi = input;
}

string* Matkakortti::getNimi() {
    return this->nimi;
}

void Matkakortti::setArvo(double input) {
    *this->arvo = input;
}

double* Matkakortti::getArvo() {
    return this->arvo;
}
```

# Matkakortti.h
```
#ifndef MATKAKORTTI_H
#define MATKAKORTTI_H
#include <string>

using namespace std;

class Matkakortti {
   private:
    string* nimi;
    double* arvo;

   public:
    Matkakortti();
    Matkakortti(string, double);
    ~Matkakortti();

    void setNimi(string nimi);
    void setArvo(double arvo);
    string* getNimi();
    double* getArvo();
};

#endif
```


# Tulostus
```
Valikko:
1. Luo matkakortti
2. Lataa saldoa
3. Matkusta helsingissä
4. Matkusta seutuliikenteessä
5. Tulosta kortin tiedot
6. Lopetus
Valitse:
1
Nimi: foo
Arvo: 2
Valikko:
1. Luo matkakortti
2. Lataa saldoa
3. Matkusta helsingissä
4. Matkusta seutuliikenteessä
5. Tulosta kortin tiedot
6. Lopetus
Valitse:
3
Arvo ei riitä.
Valikko:
1. Luo matkakortti
2. Lataa saldoa
3. Matkusta helsingissä
4. Matkusta seutuliikenteessä
5. Tulosta kortin tiedot
6. Lopetus
Valitse:
2
Arvon lataus:
Anna arvo: 10
Arvoa jäljellä: 12
Valikko:
1. Luo matkakortti
2. Lataa saldoa
3. Matkusta helsingissä
4. Matkusta seutuliikenteessä
5. Tulosta kortin tiedot
6. Lopetus
Valitse:
3
Arvoa jäljellä 9.5
Valikko:
1. Luo matkakortti
2. Lataa saldoa
3. Matkusta helsingissä
4. Matkusta seutuliikenteessä
5. Tulosta kortin tiedot
6. Lopetus
Valitse:
4
Arvoa jäljellä 6.2
Valikko:
1. Luo matkakortti
2. Lataa saldoa
3. Matkusta helsingissä
4. Matkusta seutuliikenteessä
5. Tulosta kortin tiedot
6. Lopetus
Valitse:
5
Kortin tiedot.
Nimi: foo
Arvo: 6.2
Valikko:
1. Luo matkakortti
2. Lataa saldoa
3. Matkusta helsingissä
4. Matkusta seutuliikenteessä
5. Tulosta kortin tiedot
6. Lopetus
Valitse:
4
Arvoa jäljellä 2.9
Valikko:
1. Luo matkakortti
2. Lataa saldoa
3. Matkusta helsingissä
4. Matkusta seutuliikenteessä
5. Tulosta kortin tiedot
6. Lopetus
Valitse:
4
Arvo ei riitä.
Valikko:
1. Luo matkakortti
2. Lataa saldoa
3. Matkusta helsingissä
4. Matkusta seutuliikenteessä
5. Tulosta kortin tiedot
6. Lopetus
Valitse:
6

```