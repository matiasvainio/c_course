#ifndef MAIN_H 
#define MAIN_H 

#include "matkakortti.h"

shared_ptr<Matkakortti> alustus();
int matkustus(shared_ptr<Matkakortti>, double);
void lataus(shared_ptr<Matkakortti>);
void tulostaValikko(shared_ptr<Matkakortti>);
void tulostaTiedot(shared_ptr<Matkakortti>);

#endif