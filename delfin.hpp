#ifndef DELFIN_HPP_INCLUDED
#define DELFIN_HPP_INCLUDED
#include "zivotinje.hpp"

enum PokretD {izranjanje, oglasavanje, salto, ledjno};

class Delfin : public Zivotinje
{
private:
    PokretD potez;
    string ime;
public:
    Delfin():Zivotinje(delfin, okeann, 0),potez(izranjanje),ime("ime") {}
    Delfin (Zivotinja v, Kontinentii p, bool k, PokretD po, string i) : Zivotinje(v,p,k),potez(po),ime(i) {}
};

#endif // DELFIN_HPP_INCLUDED
