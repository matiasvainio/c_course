#ifndef MATKAKORTTI_H
#define MATKAKORTTI_H
#include <string>

using namespace std;

class Matkakortti {
   private:
    string nimi;
    double arvo;

   public:
    void setNimi(string);
    void setArvo(double);
    string getNimi();
    double getArvo();
};

#endif