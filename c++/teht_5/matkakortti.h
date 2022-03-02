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