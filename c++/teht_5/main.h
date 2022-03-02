#ifndef MAIN_H 
#define MAIN_H 

#include "matkakortti.h"

Matkakortti* alustus();
int matkustus(Matkakortti*, double);
void lataus(Matkakortti*);
void tulostaValikko();
void tulostaTiedot(Matkakortti*);

#endif