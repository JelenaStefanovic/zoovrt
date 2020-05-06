#ifndef PINGVIN_HPP_INCLUDED
#define PINGVIN_HPP_INCLUDED
#include "zivotinje.hpp"

enum PokretP {NaStomaku, loptanje, plivanje, Oglasavanje, hvatanjeRibe};

class Pingvin : public Zivotinje
{
private:
    PokretP potez;
    string ime;
public:
    Pingvin():Zivotinje(pingvin, Antartik, 1),potez(NaStomaku),ime("ime") {}
    Pingvin (Zivotinja v, Kontinenti p, bool k, PokretP po, string i) : Zivotinje(v,p,k),potez(po),ime(i) {}
};

#endif // PINGVIN_HPP_INCLUDED
