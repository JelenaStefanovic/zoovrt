#ifndef ZIVOTINJE_HPP_INCLUDED
#define ZIVOTINJE_HPP_INCLUDED
#include <iostream>
#include <vector>;
#include "windows.h"
#include <fstream>


using namespace std;

enum Zivotinja {pingvin, lav, lemur, delfin, zirafa, slon, kit, kengur};
enum Kontinentii {Afrikaa, Azijaa, Australijaa, Antartikk, okeann};

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
    vector <Zivotinje*> vektorziv;
    vector <Zivotinje> zivotinje;

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
    /*void DodajZ()const
    {
        ofstream fajl;
        fajl.open (SpisakZivotinja, ios_base::app);
        for(auto it=zivotinje.begin();it!=vektorziv.end();it++)
        {
            fajl<<(it)->getzi()<<" ";
            fajl<<(it)->getk()<<" ";
            fajl<<(it)->getb()<<" "<<endl;
        }
        fajl.close();
    }*/
    void pisiTxt(string SpisakZivotinja, string tekst, char mode='w')
    {
        ofstream fajl;
        if (mode=='a')
        {
            fajl.open (SpisakZivotinja, ios_base::app);
        }
        else
        {
            fajl.open (SpisakZivotinja);
        }
        fajl << tekst << endl;
        fajl.close();

    }


    friend ostream& operator << (ostream& izlaz, const Zivotinje& z);



    // ovo nije radilo na zalost :(

    /*void SpisakZivotinja()
    {
        ifstream fajl("SpisakZivotinja.txt");
        if (fajl.is_open())
        {
            Zivotinja vrstaa;
            Kontinentii kontinentt;
            bool kopnenaa;
            while(!fajl.eof())
            {
                fajl >> vrstaa >> kontinentt >> kopnenaa ;
                if(fajl.eof()) break;
                    Zivotinje* pokk = new Zivotinje();
                    vrstaz.push_back(pokk);
            }
            fajl.close();
        }
        else
        {
            cout << " Neuspesno otvaranje fajla. " << "SpisakZivotinja.txt" << endl;
        }
    }*/

    /*void TraziZivotinju()
    {
        while(1)
        {
            cout << "Pretraga za: ";
            string vrstaZiv;
            cin >> vrstaZiv;
            cout << "Pronadjene zivotinje: " << endl;
            for(auto it=vrstaz.begin(); it!=vrstaz.end(); it++)
            {
                if(((*it)->getzi())==vrstaZiv)
                    cout<<**it;
            }
                break;
        }
    }*/
};

#endif // ZIVOTINJE_HPP_INCLUDED
