#ifndef ZOOVRT_HPP_INCLUDED
#define ZOOVRT_HPP_INCLUDED
#include "zaposleni.hpp"
#include "zivotinje.hpp"
#include <vector>;
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

};

#endif // ZOOVRT_HPP_INCLUDED
