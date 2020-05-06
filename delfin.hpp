#ifndef DELFIN_HPP_INCLUDED
#define DELFIN_HPP_INCLUDED
#include "zivotinje.hpp"

enum Pokreti {izranjanje, oglasavanje, salto, ledjno};

class Delfin : public Zivotinje{
private:
    Pokret potez;
    string ime;
public:
    Delfin (Zivotinja v, Kontinenti p, bool k, Pokret po, string i) : Zivotinje(v,p,k),potez(po),ime(i);
};

#endif // DELFIN_HPP_INCLUDED
