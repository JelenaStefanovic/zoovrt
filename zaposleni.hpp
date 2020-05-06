#ifndef ZAPOSLENI_HPP_INCLUDED
#define ZAPOSLENI_HPP_INCLUDED

class Zaposleni
{
private:
    string ime;
    string prezime;
public:
    Zaposleni()
    {
        ime="ime";
        prezime="prezime";
    }
    Zaposleni(string i, string p)
    {
        ime=i;
        prezime=p;
    }
};

#endif // ZAPOSLENI_HPP_INCLUDED
