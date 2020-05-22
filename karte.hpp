#ifndef KARTE_HPP_INCLUDED
#define KARTE_HPP_INCLUDED
#include "animator.hpp"
#include "korisnici.hpp"

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
        return karta;https://ww2.123movies.la/serie/over-the-garden-wall-kzgkx7y/s1/watching.html
    }

    friend ostream& operator << (ostream& izlaz, const Karte& k);*/

    void Prodaja()
    {
        Korisnici korP;
        korP.Posetilac();
        cout << "*****************************************" << endl;
        cout <<"Izaberite vrstu karte koju zelite: "<< endl;
        cout <<"1. jednodnevna - 2000 din." << endl;
        cout <<"2. poludnevna - 1300 din."<< endl;
        cout << "*****************************************" << endl;
        int pom1;
        int pom2;
        int pom3;
        int pom4;
        int ziv;
        int termin;
        int jpk;
        int brojK;
        int br;
        do
        {
            cin >> jpk;
            cout << "*****************************************" << endl;
            if (jpk==1)
            {
                cena=2000;
                cout <<"Vasa cena za sada je: " << cena << endl;
                cout << "*****************************************" << endl;
                pom1=1;
            }
            else if (jpk==2)
            {
                cena=1300;
                cout << "Vasa cena za sada je: " << cena << endl;
                cout << "*****************************************" << endl;
                pom1=1;
            }
            else if (jpk>2)
            {
                pom1=0;
                cout << "*****************************************" << endl;
                cout << "!!!  Broj koji ste uneli ne odgovara ponudjenim opcijama  !!!" << endl;
                cout << "*****************************************" << endl;
                continue;
            }
        }
        while (pom1==0);

        int predst;
        cout << "Da li zelite da gledate predstavu?" << endl;
        cout << "1. Ne" << endl;
        cout << "2. Da (cena predstave je 1000 din) " << endl;
        cout << "*****************************************" << endl;
        do
        {
            cin >> predst;
            if (predst==1)
            {
                cout <<"Unesite broj karata"<<endl;
                cout << "*****************************************" << endl;
                cin >> brojK;
                cena=cena*brojK;
                cout << "Vas iznos je: " << cena << endl;
                cout << "*****************************************" << endl;
                pom3=1;
            }
            if (predst==2)
            {
                pom3=1;
                cena=cena+1000;
                cout << "*****************************************" << endl;
                cout << "Izaberite termin: "<< endl;
                cout << "1. 08:00"<< endl;
                cout << "2. 10:00"<< endl;
                cout << "3. 12:00"<< endl;
                cout << "4. 17:00"<< endl;
                cout << "5. 20:00"<< endl;
                cout << "*****************************************" << endl;
                cin>>termin;
                cout << "*****************************************" << endl;
                do
                {
                    if (termin==1)
                    {
                        cout<<"Izabrali ste predstavu u 08:00"<<endl;
                        cout << "*****************************************" << endl;
                        pom4=1;
                    }
                    else if (termin==2)
                    {
                        cout<<"Izabrali ste predstavu u 10:00"<<endl;
                        cout << "*****************************************" << endl;
                        pom4=1;
                    }
                    else if (termin==3)
                    {
                        cout<<"Izabrali ste predstavu u 12:00"<<endl;
                        cout << "*****************************************" << endl;
                        pom4=1;
                    }
                    else if (termin==4)
                    {
                        cout<<"Izabrali ste predstavu u 17:00"<<endl;
                        cout << "*****************************************" << endl;
                        pom4=1;
                    }
                    else if (termin==5)
                    {
                        cout<<"Izabrali ste predstavu u 20:00"<<endl;
                        cout << "*****************************************" << endl;
                        pom4=1;
                    }
                    else if(termin>5)
                    {
                        pom4=0;
                        cout << "*****************************************" << endl;
                        cout << "!!!  Broj koji ste uneli ne odgovara ponudjenim opcijama  !!!" << endl;
                        cout << "*****************************************" << endl;
                        continue;
                    }
                }
                while (pom4==0);
                do
                {

                    cout << endl;
                    cout<<"Izaberite koju zivotinju zelite da vidite: "<<endl;
                    cout<<"1. delfin"<<endl;
                    cout<<"2. pingvin"<<endl;
                    cout<<"3. lav"<<endl;
                    cout<<"4. kengur"<<endl;
                    cout << "*****************************************" << endl;
                    cin>>ziv;
                    cout << "*****************************************" << endl;
                    if (ziv==1)
                    {
                        Animator a1("Pera", "Peric", animatorr, obruc, delfin, okeann, 0);
                        cout<<"Izabrali ste delfina, Vas animator je Pera Peric" <<endl;
                        cout << "*****************************************" << endl;
                        cout<<"Unesite broj karata"<<endl;
                        cout << "*****************************************" << endl;
                        cin>>br;
                        cena=cena*br;
                        cout << "*****************************************" << endl;
                        cout<<"Vas iznos je: "<<cena<<endl;
                        cout << "*****************************************" << endl;
                        pom2=1;
                    }
                    if (ziv==2)
                    {
                        Animator a2("Nikola", "Nikolić", animatorr, lopta, pingvin, Antartikk, 1);
                        cout<<"Izabrali ste pingvina, Vas animator je Nikola Nikolic"<<endl;
                        cout << "*****************************************" << endl;
                        cout<<"Unesite broj karata"<<endl;
                        cout << "*****************************************" << endl;
                        cin>>br;
                        cena=cena*br;
                        cout << "*****************************************" << endl;
                        cout<<"Vas iznos je: "<<cena<<endl;
                        cout << "*****************************************" << endl;
                        pom2=1;
                    }
                    if (ziv==3)
                    {
                        Animator a3("Aleksa", "Aleksić", animatorr, muzika, lav, Afrikaa, 1);
                        cout<<"Izabrali ste lava, Vas animator je Aleksa Aleksic"<<endl;
                        cout << "*****************************************" << endl;
                        cout<<"Unesite broj karata"<<endl;
                        cout << "*****************************************" << endl;
                        cin>>br;
                        cena=cena*br;
                        cout << "*****************************************" << endl;
                        cout<<"Vas iznos je: "<<cena<<endl;
                        cout << "*****************************************" << endl;
                        pom2=1;
                    }
                    if (ziv==4)
                    {
                        Animator a4("Lazar", "Lazarević", animatorr, stap, kengur, Australijaa, 1);
                        cout<<"Izabrali ste kengura, Vas animator je Lazar Lazarevic"<<endl;
                        cout << "*****************************************" << endl;
                        cout<<"Unesite broj karata"<<endl;
                        cout << "*****************************************" << endl;
                        cin>>br;
                        cena=cena*br;
                        cout << "*****************************************" << endl;
                        cout<<"Vas iznos je: "<<cena<<endl;
                        cout << "*****************************************" << endl;
                        pom2=1;
                    }
                    if (ziv>4)
                    {
                        pom2=0;
                        cout << "*****************************************" << endl;
                        cout << "!!!  Broj koji ste uneli ne odgovara ponudjenim opcijama  !!!" << endl;
                        cout << "*****************************************" << endl;
                        continue;
                    }
                }
                while(pom2==0);
            }
            if (predst>2)
            {
                pom3=0;
                cout << "*****************************************" << endl;
                cout << "!!!  Broj koji ste uneli ne odgovara ponudjenim opcijama  !!!" << endl;
                cout << "*****************************************" << endl;
                continue;

            }
        }
        while (pom3==0);
    }

};

#endif // KARTE_HPP_INCLUDED
