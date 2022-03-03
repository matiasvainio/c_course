#ifndef LEIMAAJA_H
#define LEIMAAJA_H
#include <ctime>
#include <memory>
#include <string>

#include "matkakortti.h"

class Leimaaja {
   private:
    leimaus leimaukset[5];

   public:
    void leimaa(shared_ptr<Matkakortti>, double);
    leimaus getLeimaukset();
};

struct leimaus {
    string nimi;
    int linja;
    time_t leimausAika;
};

#endif