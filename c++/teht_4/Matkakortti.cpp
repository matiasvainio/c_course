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