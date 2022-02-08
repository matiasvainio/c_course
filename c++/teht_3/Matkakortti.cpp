#include "matkakortti.h"

#include <iostream>
#include <string>

void Matkakortti::setNimi(std::string input) {
    nimi = input;
}

string Matkakortti::getNimi() {
    return nimi;
}

void Matkakortti::setArvo(double input) {
    arvo = input;
}

double Matkakortti::getArvo() {
    return arvo;
}