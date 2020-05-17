#ifndef PREDSTAVE_HPP_INCLUDED
#define PREDSTAVE_HPP_INCLUDED
#include "delfin.hpp"
#include "pingvin.hpp"
#include "lav.hpp"
#include "kengur.hpp"
#include "animator.hpp"

enum Satnica {osam_am, deset_am, podne, pet_pm, osam_pm};

class Predstave
{
private:
    Satnica vreme;
    Animator anim;
    Pingvin pingv;
    Delfin delf;
    Lav laav;
    Kengur kenguur;
public:
    Predstave():anim("ime","prezime", animatorr,obruc, pingvin, Antartikk, 1),delf(delfin, okeann, 0, izranjanje, "Dragan"), pingv(pingvin, Antartikk,1,NaStomaku,"Kovalski"),laav(lav,Afrikaa, 1, rici, "Stefan"), kenguur(kengur, Australijaa,1,skoci,"Dusan"), vreme(osam_am) {}
    Predstave(string i, string p, Vrsta vr, Stvari rek, Zivotinja v, Kontinentii po, bool k,  Zivotinja vD, Kontinentii pD, bool kD, PokretD poD, string iD,  Zivotinja vP, Kontinentii pP, bool kP, PokretP poP, string iP,  Zivotinja vL, Kontinentii pL, bool kL, PokretL poL, string iL,  Zivotinja vK, Kontinentii pK, bool kK, PokretK poK, string iK, Satnica vreme):anim(i,p,vr, rek,v,po,k),delf(vD,pD,kD,poD,iD),pingv(vP,pP,kP,poP,iP),laav(vL,pL,kP,poL,iL),kenguur(vK,pK,kK,poK,iK) {}
};


#endif // PREDSTAVE_HPP_INCLUDED
