#ifndef TEHT_4_H
#define TEHT_4_H

#include "matkakortti.h"

Matkakortti* alustus();
int matkustus(Matkakortti*, double);
void lataus(Matkakortti*);
void tulostaValikko();
void tulostaTiedot(Matkakortti*);

#endif