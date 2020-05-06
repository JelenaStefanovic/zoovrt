#ifndef HRANA_HPP_INCLUDED
#define HRANA_HPP_INCLUDED

enum Restoran {mala, srednja, velika};
enum Predstava {hot_dog, pica, burger, pomfrit, sladoled, cips, kokice, semenke};

class Hrana{
private:
    int cena;
    Restoran porcija;
    Predstava jelo;
public:
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

};

#endif // HRANA_HPP_INCLUDED
