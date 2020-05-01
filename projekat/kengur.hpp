#ifndef KENGUR_HPP_INCLUDED
#define KENGUR_HPP_INCLUDED
#include "zivotinje.hpp"

enum Pokret {skoci, dete_u_dzepu, boks, preskakanje_prepreka};

class Kengur : public Zivotinje{
private:
    Pokret potez;
    string ime;
public:
    Kengur (Zivotinja v, Kontinenti p, bool k, Pokret po, string i) : Zivotinje(v,p,k),potez(po),ime(i);
} ;

#endif // KENGUR_HPP_INCLUDED
