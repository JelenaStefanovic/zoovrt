#ifndef ZOOVRT_HPP_INCLUDED
#define ZOOVRT_HPP_INCLUDED
#include "zaposleni.hpp"
#include "zivotinje.hpp"
#include <vector>;
#include <iostream>

class Zoovrt
{
private:
    string naziv;
    vector <Zaposleni> zaposleni;
    vector <Zivotinje> zivotinje;
public:
    Zoovrt()
    {
        naziv="Zooloski vrt";
    }
    void UnosUVektor(const Zaposleni& z)
    {
        zaposleni.push_back(z);
    }
    void ispis()
    {
        cout<<endl;
        cout<< "Ispis zaposlenih:" << endl;
        for(auto it=zaposleni.begin(); it<zaposleni.end(); it++)
        {
            cout<<*it<<endl;
        }
    }
    bool izbaci(const Zaposleni& z)
    {
        for (auto it=zaposleni.begin(); it<zaposleni.end(); it++)
        {
            if (z.getI()==(it)->getI() && z.getPr()==(it)->getPr())
            {
                zaposleni.erase(it);
                return true;
            }
        }
        return false;

    }
    bool Pretraga(const Zaposleni& z)
    {
        for(auto it=zaposleni.begin(); it<zaposleni.end(); it++)
        {
            if(z.getI()==(it)->getI() && z.getPr()==(it)->getPr())
            {
                return true;
            }
            return false;
        }
    }

    void UnosUVektorZ(const Zivotinje& ziv)
    {
        zivotinje.push_back(ziv);
    }
    void ispisZ()
    {
        cout<<endl;
        cout<< "Ispis zivotinja:" << endl;
        for(auto it=zivotinje.begin(); it<zivotinje.end(); it++)
        {
            cout<<*it<<endl;
        }
    }
    bool izbaciZ(const Zivotinje& ziv)
    {
        for (auto it=zivotinje.begin(); it<zivotinje.end(); it++)
        {
            if (ziv.getzi()==(it)->getzi() && ziv.getk()==(it)->getk() && ziv.getb()==(it)->getk())
            {
                zivotinje.erase(it);
                return true;
            }
        }
        return false;

    }
    bool PretragaZ(const Zivotinje& ziv)
    {
        for(auto it=zivotinje.begin(); it<zivotinje.end(); it++)
        {
            if (ziv.getzi()==(it)->getzi() && ziv.getk()==(it)->getk() && ziv.getb()==(it)->getk())
            {
                return true;
            }
            return false;
        }
    }
    void SpisakZivotinjaZ(string SpisakZivotinja)
    {
        cout<<"Spisak zjivotnja: "<<endl;
        cout << endl;
        citajTxt(SpisakZivotinja);
        cout<<endl<<endl;
    }


    /*vector<string> splitSen(string str, char c=',')
    {
        string w = "";
        vector<string> v;
        for (auto rem : str)
        {
            if (rem==c)
            {
                v.push_back(w);
                w="";
            }
            else
            {
                w=w+rem;
            }
        }
        v.push_back(w);

        return v;
    }

    void ucitajZivotinje(string n)
    {
        string zivotinjeF=n;
        string linija;
        vector<string> result;
        ifstream fajl (zivotinjeF);
        if (fajl.is_open())
        {
            while ( getline (fajl,linija) )
            {
                if (linija!="")
                {
                    result = splitSen(linija);
                    Zivotinje z(result[0], result[1], result[2]);
                    vektorziv.push_back(z);
                }
            }
            fajl.close();
        }
        else
            cout << "Neuspesno otvoren fajl";
    }
    void dodajZivotinju()
    {
        string fajl="SpisakZivotinja.txt";
        ucitajZivotinje("SpisakZivotinja.txt");
    }*/

};

#endif // ZOOVRT_HPP_INCLUDED
