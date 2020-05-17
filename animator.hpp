#ifndef ANIMATOR_HPP_INCLUDED
#define ANIMATOR_HPP_INCLUDED
#include "zaposleni.hpp"
#include "zivotinje.hpp"


enum Stvari {obruc, lopta, stap, muzika};

class Animator : public Zaposleni
{
private:
    Stvari rekviziti;
    Zivotinje zivotinja;
public:
    Animator() : Zaposleni("ime", "prezime", animatorr), zivotinja(pingvin, Antartikk, 1), rekviziti(lopta) {}
    Animator(string i, string p, Vrsta vr, Stvari rek, Zivotinja v, Kontinentii po, bool k) : Zaposleni(i, p, vr), rekviziti(rek), zivotinja(v,po,k) {}
    Stvari getr()const
    {
        return rekviziti;
    }
    Zivotinje getz()const
    {
        return zivotinja;
    }
    friend ostream& operator << (ostream& izlaz, const Animator& a);
};

#endif // ANIMATOR_HPP_INCLUDEDcout<<"1. delfin"<<endl;
