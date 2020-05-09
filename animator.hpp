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
    Animator() : Zaposleni("ime", "prezime"), zivotinja(pingvin, Antartik, 1), rekviziti(lopta) {}
    Animator(string i, string p, Stvari rek, Zivotinja v, Kontinenti po, bool k) : Zaposleni(i, p), rekviziti(rek), zivotinja(v,po,k) {}
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
