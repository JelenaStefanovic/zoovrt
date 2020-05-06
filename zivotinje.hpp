#ifndef ZIVOTINJE_HPP_INCLUDED
#define ZIVOTINJE_HPP_INCLUDED
#include <iostream>

using namespace std;
enum Zivotinja {pingvin, lav, lemur, delfin, zirafa, slon, kit, kengur};
enum Kontinenti {Afrika, Azija, Australija, Antartik, okean};
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
    Kontinenti poreklo;
    bool kopnena;
public:
    Zivotinje()
    {
        vrsta=pingvin;
        poreklo=Antartik;
        kopnena=1;
    }

    Zivotinje(Zivotinja v, Kontinenti p, bool k)
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
};

#endif // ZIVOTINJE_HPP_INCLUDED
