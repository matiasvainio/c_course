#include "leimaaja.h"
#include "matkakortti.h"

#include <iostream>
#include <string>

using namespace std;

Leimaaja::Leimaaja() {}

Leimaaja::leimaa(std::shared_ptr<Matkakortti> ptr, double hinta) {
    int linja;
    cout << "Syötä linjan numero: " << endl;
    cin >> linja;

}