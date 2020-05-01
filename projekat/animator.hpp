#ifndef ANIMATOR_HPP_INCLUDED
#define ANIMATOR_HPP_INCLUDED
#include "zaposleni.hpp"
#include "zivotinje.hpp"

enum Stvari {obruc, lopte, stap, muzika};

class Animator : public Zaposleni{
private:
    Stvari rekviziti;
    Zivotinje zivotinja;
public:
    Animator() : Zaposleni(0, "ime", "prezime") zivotinja(pingvin, antartik, 1), rekviziti(lopta){}
    Animator(string i, string p, Stvari rek, Zivotinja v, Kontinenti p, bool k) : Zaposleni(i, p), rekviziti(rek), zivotinja(v,p,k){}

};

#endif // ANIMATOR_HPP_INCLUDEDcout<<"1. delfin"<<endl;
