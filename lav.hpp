#ifndef LAV_HPP_INCLUDED
#define LAV_HPP_INCLUDED
#include "zivotinje.hpp"

enum Pokret {rici, obruc, sedi, lopta};

class Lav : public Zivotinje{
private:
    Pokret potez;
    string ime;
public:
    Lav (Zivotinja v, Kontinenti p, bool k, Pokret po, string i) : Zivotinje(v,p,k),potez(po),ime(i);
};


#endif // LAV_HPP_INCLUDED
