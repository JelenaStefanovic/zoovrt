#ifndef PREDSTAVE_HPP_INCLUDED
#define PREDSTAVE_HPP_INCLUDED
#include "delfin.hpp"
#include "pingvin.hpp"
#include "lav.hpp"
#include "kengur.hpp"
#include "animator.hpp"
#include "karte.hpp"

enum Satnica {osam_am, deset_am, podne, pet_pm, osam_pm};

class Predstave{
private:
    Satnica vreme;
    Animator anim;
    Delfin delf;
    Pingvin pingv;
    Lav laav;
    Kengur kenguur;
public:
    Predstave() : anim("ime", "prezime", lopta, pingvin), delf(delfin, okean, 0, izranjanje, "ime"), pingv(pingvin, Antartik, 1, plivanje, "ime"), laav(lav, Afrika, 1, sedi, "ime"), kenguur(kengur, Australija, 1, boks, "ime"){}
    Predstave(Satnica v, string i, string p, Stvari rek, Zivotinja vA, Kontinenti pA, bool kA, Zivotinja vD, Kontinenti pD, bool kD, Pokret poD, string iD, Zivotinja vP, Kontinenti pP, bool kP, Pokret poP, string iP, Zivotinja vL, Kontinenti pL, bool kL, Pokret poL, string iL, Zivotinja vK, Kontinenti pK, bool kK, Pokret poK, string iK) : anim(i,p,rek,vA,pA,kA), delf(vD,pD,kD,poD,iD), pingv(vP,pP,kP,poP,iP), laav(vL,pL,kL,poL,iL), kenguur(vK,pK,kK,poK,iK){}

};


#endif // PREDSTAVE_HPP_INCLUDED
