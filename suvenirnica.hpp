#ifndef SUVENIRNICA_HPP_INCLUDED
#define SUVENIRNICA_HPP_INCLUDED

enum Suveniri {skulptura, privezak, igracka, slika, razglednica, majica};

class Suvenirnica
{
private:
    Suveniri suvenir;
    int cena;
public:
    Suvenirnica()
    {
        suvenir=skulptura;
        cena=500;
    }

    Suvenirnica(Suveniri s, int c)
    {
        suvenir=s;
        cena=c;
    }

    Suveniri getsu() const
    {
        return suvenir;
    }
    int getCenaSuvenira() const
    {
        return cena;
    }
    friend ostream& operator << (ostream& izlaz, const Suvenirnica& s);

};

#endif // SUVENIRNICA_HPP_INCLUDED
