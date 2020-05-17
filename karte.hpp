#ifndef KARTE_HPP_INCLUDED
#define KARTE_HPP_INCLUDED
#include "animator.hpp"

enum Ulaznica {jednodnevna, poludnevna, predstava};

class Karte
{
private:
    int cena;
    Ulaznica karta;
    static int brojKarata;
public:
    Karte()
    {
        cena=2000;
        karta=jednodnevna;
        brojKarata++;
    }
    Karte (int c, Ulaznica k)
    {
        c=cena;
        k=karta;
        brojKarata++;
    }
    ~Karte()
    {
        brojKarata--;
    }
    static int getBroj()
    {
        return brojKarata;
    }
    int getBr()
    {
        return brojKarata;
    }
    /*int getCena()const
    {
        return cena;
    }
    Ulaznica getk()const
    {
        return karta;
    }

    friend ostream& operator << (ostream& izlaz, const Karte& k);*/

    void Prodaja()
    {
        int odgovor1;
        cout<<"Izaberite vrstu karte koju želite: "<<endl;
        cout<<"1. jednodnevna - 2000 din." <<endl;
        cout<<"2. poludnevna - 1300 din."<<endl;
        cin>>odgovor1;
        if (odgovor1==1 || odgovor1==2)
        {
            if (odgovor1==1)
            {
                cena=2000;
                cout<<"Vaša cena za sada je: "<<cena<<endl;
            }
            if (odgovor1==2)
            {
                cena=1300;
                cout<<"Vaša cena za sada je: "<<cena<<endl;
            }
            int odgovor2;
            cout<<"Da li želite da gledate predstavu?"<<endl;
            cout<<"1. Ne"<<endl;
            cout<<"2. Da"<<endl;
            cin>>odgovor2;
            if (odgovor2==1)
            {
                int broj;
                cout<<"Unesite broj karata"<<endl;
                cin>>broj;
                cena=cena*broj;
                cout<<"Vaš iznos je: "<<cena<<endl;
            }
            if (odgovor2==2)
            {
                cena=cena+1000;
                int odg1;
                cout<<"Izaberite termin: "<<endl;
                cout<<"1. 08:00"<<endl;
                cout<<"2. 10:00"<<endl;
                cout<<"3. 12:00"<<endl;
                cout<<"4. 17:00"<<endl;
                cout<<"5. 20:00"<<endl;
                cin>>odg1;
                if(odg1>0 && odg1<6)
                {
                    int odg2;
                    cout<<"Izaberite koju životinju želite da vidite: "<<endl;
                    cout<<"1. delfin"<<endl;
                    cout<<"2. pingvin"<<endl;
                    cout<<"3. lav"<<endl;
                    cout<<"4. kengur"<<endl;
                    if (odg2==1)
                    {
                        Animator a1("Pera", "Perić", animatorr, obruc, delfin, okeann, 0);
                        cout<<"Vaš animator je Pera Perić"<<endl;
                    }
                    if (odg2==2)
                    {
                        Animator a2("Nikola", "Nikolić", animatorr, lopta, pingvin, Antartikk, 1);
                        cout<<"Vaš animator je Nikola Nikolić"<<endl;
                    }
                    if (odg2==3)
                    {
                        Animator a3("Aleksa", "Aleksić", animatorr, muzika, lav, Afrikaa, 1);
                        cout<<"Vaš animator je Aleksa Aleksić"<<endl;
                    }
                    if (odg2==4)
                    {
                        Animator a4("Lazar", "Lazarević", animatorr, stap, kengur, Australijaa, 1);
                        cout<<"Vaš animator je Lazar Lazarević"<<endl;
                    }
                    if (odg2>4)
                    {
                        cout<<"Uneli ste pogrešan broj"<<endl;
                    }
                }
                int br;
                cout<<"Unesite broj karata"<<endl;
                cin>>br;
                cena=cena*br;
                cout<<"Vaš iznos je: "<<cena<<endl;
            }
        }
        else
        {
            cout<<"Izabrali ste nepostojeću opciju"<<endl;
        }

    }

};

#endif // KARTE_HPP_INCLUDED
