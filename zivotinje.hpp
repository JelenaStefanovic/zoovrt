#ifndef ZIVOTINJE_HPP_INCLUDED
#define ZIVOTINJE_HPP_INCLUDED
#include <iostream>

using namespace std;
enum Zivotinja {pingvin, lav, lemur, delfin, zirafa, slon, kit, kengur};
enum Kontinentii {Afrikaa, Azijaa, Australijaa, Antartikk, okeann};
#include <fstream>
void citajTxt(string nazivFajla)
{
    string linija;
    ifstream fajl (nazivFajla);
    if (fajl.is_open())
    {
        while ( getline (fajl,linija) )
        {
            cout << linija << '\n';
        }
        fajl.close();
    }
    else
        cout << "Neuspesno otvoren fajl";
}

class Zivotinje
{
protected:
    Zivotinja vrsta;
    Kontinentii poreklo;
    bool kopnena;
public:
    Zivotinja getzi()const
    {
        return vrsta;
    }
    Kontinentii getk()const
    {
        return poreklo;
    }
    bool getb()const
    {
        return kopnena;
    }
    Zivotinje()
    {
        vrsta=pingvin;
        poreklo=Antartikk;
        kopnena=1;
    }
    Zivotinje(Zivotinja v, Kontinentii p, bool k)
    {
        vrsta=v;
        poreklo=p;
        kopnena=k;
    }
    void citajFajl(string nazivFajla)
    {
        cout<<"Spisak zjivotnja: "<<endl;
        citajTxt(nazivFajla);
        cout<<endl<<endl;
    }
    friend ostream& operator << (ostream& izlaz, const Zivotinje& z);
};

#endif // ZIVOTINJE_HPP_INCLUDED
