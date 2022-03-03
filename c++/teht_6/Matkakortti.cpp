#include "matkakortti.h"

#include <iostream>
#include <memory>
#include <string>

using namespace std;

Matkakortti::Matkakortti(shared_ptr<string> _nimi, shared_ptr<double> _arvo) {
    nimi = move(_nimi);
    arvo = move(_arvo);
}

Matkakortti::Matkakortti() {}

void Matkakortti::setNimi(string input) {
    *this->nimi = input;
}

shared_ptr<string> Matkakortti::getNimi() {
    return this->nimi;
}

void Matkakortti::setArvo(double input) {
    *this->arvo = input;
}

shared_ptr<double> Matkakortti::getArvo() {
    return this->arvo;
}
