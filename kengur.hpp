#ifndef KENGUR_HPP_INCLUDED
#define KENGUR_HPP_INCLUDED
#include "zivotinje.hpp"

enum PokretK {skoci, dete_u_dzepu, boks, preskakanje_prepreka};

class Kengur : public Zivotinje
{
private:
    PokretK potez;
    string ime;
public:
    Kengur():Zivotinje(kengur, Australija, 1),potez(skoci),ime("ime") {}
    Kengur (Zivotinja v, Kontinenti p, bool k, PokretK po, string i) : Zivotinje(v,p,k),potez(po),ime(i) {}
} ;

#endif // KENGUR_HPP_INCLUDED
