#ifndef LAV_HPP_INCLUDED
#define LAV_HPP_INCLUDED
#include "zivotinje.hpp"

enum PokretL {rici, obrucl, sedi, loptal};

class Lav : public Zivotinje
{
private:
    PokretL potez;
    string ime;
public:
    Lav():Zivotinje(lav, Afrikaa, 1),potez(rici),ime("ime") {}
    Lav (Zivotinja v, Kontinentii p, bool k, PokretL po, string i) : Zivotinje(v,p,k),potez(po),ime(i) {}
};


#endif // LAV_HPP_INCLUDED
