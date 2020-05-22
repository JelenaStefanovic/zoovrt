#ifndef ZIVOTINJE_HPP_INCLUDED
#define ZIVOTINJE_HPP_INCLUDED
#include <iostream>
#include <vector>;
#include "windows.h"

using namespace std;
enum Zivotinja {pingvin, lav, lemur, delfin, zirafa, slon, kit, kengur};
enum Kontinentii {Afrikaa, Azijaa, Australijaa, Antartikk, okeann};
#include <fstream>
void citajTxt(string SpisakZivotinja)
{
    string linija;
    ifstream fajl (SpisakZivotinja);
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
    vector <Zivotinje*> vrstaz;
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
    void SpisakZivotinja(string SpisakZivotinja)
    {
        cout<<"Spisak zjivotnja: "<<endl;
        cout << endl;
        citajTxt(SpisakZivotinja);
        cout<<endl<<endl;
    }
    friend ostream& operator << (ostream& izlaz, const Zivotinje& z);

    void TraziZivotinju(const Zivotinje& zi)
    {
        while(1)
        {
            cout << "Pretraga za: ";
            string vrstaZiv;
            cin >> vrstaZiv;
            cout << "Pronadjene zivotinje: " << endl;
            for(auto it=vrstaz.begin(); it!=vrstaz.end(); it++)
            {
                //if((*it->getzi())==vrstaZiv)
                    cout<<**it;
            }
                break;
        }
    }
};

#endif // ZIVOTINJE_HPP_INCLUDED
