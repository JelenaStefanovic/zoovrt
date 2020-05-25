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
#include "korisnici.hpp"
#include <iostream>
#include <algorithm>
#include <string>
#include <fstream>
#include <cstdlib>
#include <vector>

using namespace std;

void Pocetak()
{
    int b, x, loz, y, un, z;
    Zoovrt zv;
    Zivotinje zivotinjaa1(lav, Antartikk, true);
    Zivotinje zivotinjaa2(slon, Azijaa, true);
    Zivotinje zivotinjaa3(kit,okeann,false);
    do
    {

        cout << "Unesite broj: " << endl;
        cout << "1. Kupovanje karata (posetilac)" << endl;
        cout << "2. Dodavanje zivotinja (zaposleni)" << endl;

        cin >> b;
        if (b==1)
        {
            cout << "*****************************************" << endl;
            cout << "Kupovina karata: " << endl;
            Karte k(1000, jednodnevna);
            k.Prodaja();
            x=1;
        }
        else if (b==2)
        {
            do
            {
                cout << "*****************************************" << endl;
                cout << "Da li znate lozinku?" << endl;
                cout << "1. Da" << endl;
                cout << "2. Ne" << endl;
                cin >> loz;
                if (loz==1)
                {
                    Korisnici kor;
                    kor.Zaposleni();
                    y=1;
                    x=1;
                    cout << "Pritisnite jedan (1) da dodate zivotinju" << endl;
                    cin >> un;
                    if (un == 1)
                    {
                        cout << "Trenutni spisak zivotinja: " << endl;
                        zv.SpisakZivotinjaZ("SpisakZivotinja.txt");
                        cout << "Spisak sa dodatom zivotinjom: " << endl;
                        zivotinjaa1.pisiTxt("SpisakZivotinja.txt", "Lav Afrika kopnena", 'a');
                        zv.SpisakZivotinjaZ("SpisakZivotinja.txt");
                        zv.UnosUVektorZ(zivotinjaa1);
                        zv.UnosUVektorZ(zivotinjaa2);
                        zv.UnosUVektorZ(zivotinjaa3);
                        cout << endl;
                        zv.ispisZ();


                    }
                    else if (un > 1)
                    {
                        cout << "*****************************************" << endl;
                        cout << "!!!  Broj koji ste uneli ne odgovara ponudjenim opcijama  !!!" << endl;
                        cout << "*****************************************" << endl;
                    }

                }
                else if (loz==2)
                {
                    cout << "*****************************************" << endl;
                    cout << "Povratak na prvo unosenje broja..." << endl;
                    y=0;
                    x=0;
                    break;
                }
                else if (loz>2)
                {
                    y=0;
                    cout << "*****************************************" << endl;
                    cout << "!!!  Broj koji ste uneli ne odgovara ponudjenim opcijama  !!!" << endl;
                    cout << "*****************************************" << endl;
                    continue;
                }
            }
            while(y==0);

        }
        else if (b>2)
        {
            x=0;
            cout << "*****************************************" << endl;
            cout << "!!!  Broj koji ste uneli ne odgovara ponudjenim opcijama  !!!" << endl;
            cout << "*****************************************" << endl;
            continue;
        }
    }
    while(x==0);
}

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
    /*
    Moja ideje za funkcionalnost projekta su sledece:
    1. Prodaja karata odnosno ulaznica:
    Korisnik izabere da li zeli poludnevnu celodnevnu ili kartu za predstavu,
    za svaku ispise cenu, ako korisnik izabere jednu od prve dve ponudi mu i predstau za taj dan, bira termin,
    zivotinju,animatora, termin, na kraju broj karata i ispise mu se konacna cena.
    2. Dodavanje zivotinja u zoo vrt
    */
    cout << "*****************************************" << endl;
    cout << "Zadaci sa proslih rokova" << endl;
    cout << "*****************************************" << endl;
    Zoovrt zoo;
    Zaposleni zap1 ("Stefan","Stefanovic", cistac);
    Zaposleni zap2 ("Ivana","Ivanovic", prodavac_karata);
    Zaposleni zap3 ("Marija","Maric",hranitelj);
    Animator an2("Danijel","Danilovic", animatorr, obruc, lav, Afrikaa, 1);
    Zivotinje z1(pingvin, Antartikk, 1);
    z1.SpisakZivotinja("SpisakZivotinja.txt");
    Animator an1("Aleksa", "Aleksić", animatorr, muzika, lav, Afrikaa, 1);
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
    zoo.ispis();
    zoo.UnosUVektor(zap1);
    zoo.UnosUVektor(zap2);
    zoo.UnosUVektor(zap3);
    zoo.UnosUVektor(an2);
    zoo.ispis();
    if (zoo.izbaci(zap2)==true)
        cout << "Izbacili ste zaposlenog: " << zap2 <<endl;
    else
        cout<< "Neuspesno izbacen zaposleni" << endl;
    zoo.ispis();
    if (zoo.Pretraga(zap1)==true)
        cout << "Uspesno pronadjen zaposleni: " << zap1 << endl;
    else
        cout << "neuspesno pronadjen zaposleni" << endl;

    Kontinenti* kontinenti[20];
    Afrika af;
    Antartik an;
    Australija au;
    Azija az;
    Okean ok;
    kontinenti[0]=&af;
    kontinenti[1]=&an;
    kontinenti[2]=&au;
    kontinenti[3]=&az;
    kontinenti[4]=&ok;
    cout<<"Ispis kontinenata: "<<endl;
    for (int i=0; i<=4; i++)
    {
        kontinenti[i]->Ispisi();
    }
    cout << "*****************************************" << endl;

    Pocetak();



    return 0;


}
