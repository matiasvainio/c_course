#ifndef MATKAKORTTI_H
#define MATKAKORTTI_H
#include <string>
#include <memory>

using namespace std;

class Matkakortti {
   private:
    shared_ptr<string> nimi;
    shared_ptr<double> arvo;

   public:
    Matkakortti();
    Matkakortti(shared_ptr<string>, shared_ptr<double>);

    void setNimi(string nimi);
    void setArvo(double arvo);
    shared_ptr<string> getNimi();
    shared_ptr<double> getArvo();
};

#endif