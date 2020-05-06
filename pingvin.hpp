#ifndef PINGVIN_HPP_INCLUDED
#define PINGVIN_HPP_INCLUDED
#include "zivotinje.hpp"

enum Pokret {NaStomaku, loptanje, plivanje, oglasavanje, hvatanjeRibe};

class Pingvin : public Zivotinje{
private:
    Pokret potez;
    string ime;
public:
    Pingvin (Zivotinja v, Kontinenti p, bool k, Pokret po, string i) : Zivotinje(v,p,k),potez(po),ime(i);
};

#endif // PINGVIN_HPP_INCLUDED
