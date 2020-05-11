#include <iostream>
#include "afrika.hpp"
#include "animator.hpp"
#include "antartik.hpp"
#include "australija.hpp"
#include "azija.hpp"
#include "delfin.hpp"
#include "hrana.hpp"
#include "karte.hpp"
#include "kengur.hpp"
#include "lav.hpp"
#include "okean.hpp"
#include "pingvin.hpp"
#include "predstave.hpp"
#include "suvenirnica.hpp"
#include "zaposleni.hpp"
#include "zivotinje.hpp"
#include "zoovrt.hpp"

using namespace std;

int Karte::brojKarata=0;

ostream& operator <<(ostream& izlaz, const Zivotinje& z)
{

    if (z.getb()==1)
    {
       izlaz << "Kopnena"<< endl;
    }
    else
    {
        izlaz << "Vodena" << endl;
    }


    if (z.getk()==0)
    {
        izlaz << "Poreklo: Afrika" << endl;
    }
    if (z.getk()==1)
    {
        izlaz << "Poreklo: Azija" << endl;
    }
    if (z.getk()==2)
    {
        izlaz << "Poreklo: Ausralija" << endl;
    }
    if (z.getk()==3)
    {
        izlaz << "Poreklo: Antartik" << endl;
    }
    if (z.getk()==4)
    {
        izlaz << "Poreklo: okean" << endl;
    }

    if (z.getzi()==0)
    {
        izlaz << "Zivotinja: pingvin" << endl;
    }
    else if (z.getzi()==1)
    {
        izlaz << "Zivotinja: lav" << endl;
    }
    else if (z.getzi()==2)
    {
        izlaz << "Zivotinja: lemur" << endl;
    }
    else if (z.getzi()==4)
    {
        izlaz << "Zivotinja: delfin" << endl;
    }
    else if (z.getzi()==5)
    {
        izlaz << "Zivotinja: zirafa" << endl;
    }
    else if (z.getzi()==6)
    {
        izlaz << "Zivotinja: slon" << endl;
    }
    else if (z.getzi()==7)
    {
        izlaz << "Zivotinja: kit" << endl;
    }
    else if (z.getzi()==8)
    {
        izlaz << "Zivotinja: kengur" << endl;
    }
    return izlaz;
}
ostream& operator << (ostream& izlaz, const Animator& a)
{
    izlaz << "Ispis animatora: " << endl;
    if (a.getr()==0)
        izlaz << "Rekvizit: obruc" << endl;
    else if(a.getr()==1)
        izlaz << "Rekvizit: lopta" << endl;
    else if(a.getr()==2)
        izlaz << "Rekvizit: stap" << endl;
    else if(a.getr()== 3)
        izlaz << "Rekvizit: muzika" << endl;

    izlaz << "Vrsta: " << a.getz() << endl;
    return izlaz;
}

ostream& operator << (ostream& izlaz, const Hrana& h)
{
    izlaz << "Ispis hrane: " << endl;
    izlaz << "Cena proizvoda je: " << h.getcena() << endl;

    if(h.getre()==0)
    {
        izlaz << "Porcija: mala" << endl;
    }
    else if (h.getre()==1)
    {
        izlaz << "Porcija: srednja" << endl;
    }
    else if (h.getre()==2)
    {
        izlaz << "Porcija: velika" << endl;
    }

    if(h.getpr()==0)
    {
        izlaz << "Jelo: hot dog" << endl;
    }
    else if(h.getpr()==1)
    {
        izlaz << "Jelo: pica" << endl;
    }
    else if(h.getpr()==2)
    {
        izlaz << "Jelo: burger" << endl;
    }
    else if(h.getpr()==3)
    {
        izlaz << "Jelo: pomfrit" << endl;
    }
    else if(h.getpr()==4)
    {
        izlaz << "Jelo: sladoled" << endl;
    }
    else if(h.getpr()==5)
    {
        izlaz << "Jelo: cips" << endl;
    }
    else if(h.getpr()==6)
    {
        izlaz << "Jelo: kokice" << endl;
    }
    else if(h.getpr()==7)
    {
        izlaz << "Jelo: semenke" << endl;
    }
    return izlaz;
}

ostream& operator << (ostream& izlaz, const Suvenirnica& s)
{
    cout << "Ispis suvenira: " << endl;
    if(s.getsu()==0)
    {
        izlaz << "Suvenir: skulptura" << endl;
    }
    else if(s.getsu()==1)
    {
        izlaz << "Suvenir: privezak" << endl;
    }
    else if(s.getsu()==2)
    {
        izlaz << "Suvenir: igracka" << endl;
    }
    else if(s.getsu()==3)
    {
        izlaz << "Suvenir: razglednica" << endl;
    }
    else if(s.getsu()==4)
    {
        izlaz << "Suvenir: majica" << endl;
    }

    izlaz << "Cena: " << s.getCenaSuvenira() << endl;
    return izlaz;
}



int main()
{
    /*~
    Moja ideje za funkcionalnost projekta su sledece:
    1. Prodaja karata odnosno ulaznica:
    Korisnik izabere da li zeli poludnevnu celodnevnu ili kartu za predstavu,
    za svaku ispise cenu, ako korisnik izabere jednu od prve dve ponudi mu i predstau za taj dan, bira termin,
    zivotinju,animatora, termin, na kraju broj karata i ispise mu se konacna cena.
    2. Dodavanje zivotinja u zoo vrt
    */
    Zivotinje z1(pingvin, Antartik, 1);
    z1.citajFajl("Spisak.txt");
    Animator an1("Aleksa", "Aleksić", muzika, lav, Afrika, 1);
    cout << an1 << endl;
    Hrana h1(200, srednja, burger);
    cout << h1 << endl;
    Suvenirnica s1(privezak, 500);
    cout << s1 << endl;
    cout << "Broj prodatih karata: " << Karte::getBroj() << endl;
    Karte k1;
    cout << "Ispis karata: " << endl;
    cout << k1.getBr() << endl;
    cout << "Broj prodatih karata: " << Karte::getBroj() << endl;
    return 0;
}
