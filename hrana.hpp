#ifndef HRANA_HPP_INCLUDED
#define HRANA_HPP_INCLUDED

enum Restoran {mala, srednja, velika};
enum Predstava {hot_dog, pica, burger, pomfrit, sladoled, cips, kokice, semenke};

class Hrana
{
private:
    int cena;
    Restoran porcija;
    Predstava jelo;
public:
    int getcena()const
    {
        return cena;
    }
    Restoran getre()const
    {
        return porcija;
    }
    Predstava getpr()const
    {
        return jelo;
    }
    Hrana()
    {
        cena=0;
        porcija=mala;
        jelo=hot_dog;
    }
    Hrana(int c, Restoran p, Predstava j)
    {
        cena=c;
        porcija=p;
        jelo=j;
    }
    friend ostream& operator << (ostream& izlaz, const Hrana& h);

};

#endif // HRANA_HPP_INCLUDED
