#ifndef KORISNICI_HPP_INCLUDED
#define KORISNICI_HPP_INCLUDED
#include "zivotinje.hpp"


class Korisnici
{
private:
    string ime;
    string prezime;
    int pin;
    bool zaposleni;
public:
    Korisnici()
    {
        ime="Ime";
        prezime="Prezime";
        pin=0;
        zaposleni=false;
    }
    Korisnici(string i, string p, int pi, bool z)
    {
        ime=i;
        prezime=p;
        pin=pi;
        zaposleni=z;
    }
    string getIk()const
    {
        return ime;
    }
    string getPk()const
    {
        return prezime;
    }
    int getSk()const
    {
        return pin;
    }
    bool getZk()const
    {
        return zaposleni;
    }
    //friend ostream& operator<<(ostream& izlaz, const Korisnici& kor);
    void Posetilac ()
    {
        cout << "*****************************************" << endl;
        cout << "Unesite vase ime: " << endl;
        cin >> ime;
        cout << "*****************************************" << endl;
        cout << "Unesite vase prezime: " << endl;
        cin >> prezime;
        cout << "*****************************************" << endl;
        cout << "Dobrodosli u nas zooloski vrt " << ime << " " << prezime << "!" << endl;
    }
    int Pin(int xK)
    {
        xK=123654;
        return xK;
    }
    void Zaposleni ()
    {
        cout << "*****************************************" << endl;
        cout << "Unesite vase ime: " << endl;
        cin >> ime;
        cout << "*****************************************" << endl;
        cout << "Unesite vase prezime: " << endl;
        cin >> prezime;
        cout << "*****************************************" << endl;

        int xK, yK=1,pin2;
        xK=Pin(xK);
        if(pin==xK)
        {
            cout << "Uspesno ukucan pin." << endl;
            cout << "*****************************************" << endl;
            yK=1;
        }
        else if (pin!=xK)
        {
            do
            {
                cout << "Unesite pin: " << endl;
                cin >> pin2;
                cout << "*****************************************" << endl;
                if (pin2==123654)
                {
                    cout << "Uspesno ukucan pin." << endl;
                    yK=1;
                }
                else
                {
                    cout << "Pogresan pin, probaj ponovo." << endl;
                    cout << "*****************************************" << endl;
                    yK=0;
                }
            }
            while(yK==0);
        }
        Zivotinje ziv;
        cout << "*****************************************" << endl;
        ziv.SpisakZivotinja("SpisakZivotinja.txt");
        cout << "*****************************************" << endl;
    }


};

#endif // KORISNICI_HPP_INCLUDED
