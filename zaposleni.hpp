#ifndef ZAPOSLENI_HPP_INCLUDED
#define ZAPOSLENI_HPP_INCLUDED

enum Vrsta {animatorr, cistac, prodavac_karata, hranitelj};

class Zaposleni
{
private:
    string ime;
    string prezime;
    Vrsta zanimanje;
public:
    Zaposleni()
    {
        ime="ime";
        prezime="prezime";
        zanimanje = animatorr;
    }
    Zaposleni(string i, string p, Vrsta z)
    {
        ime=i;
        prezime=p;
        zanimanje=z;
    }
    string getI()const
    {
        return ime;
    }
    string getPr()const
    {
        return prezime;
    }
    Vrsta getZ()const
    {
        return zanimanje;
    }
    friend ostream& operator << (ostream& izlaz, const Zaposleni& z)
    {
        izlaz << z.getI() << ", " << z.getPr() << ", " << z.getZ() << endl;
        return izlaz;
    }
};

#endif // ZAPOSLENI_HPP_INCLUDED
