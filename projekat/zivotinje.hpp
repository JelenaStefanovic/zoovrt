#ifndef ZIVOTINJE_HPP_INCLUDED
#define ZIVOTINJE_HPP_INCLUDED

enum Zivotinja {pingvin, lav, lemur, delfin, zirafa, slon, kit, kengur};
enum Kontinenti {Afrika, Azija, Australija, Antartik, okean};

class Zivotinje{
protected:
    Zivotinja vrsta;
    Kontinenti poreklo;
    bool kopnena;
public:
    Zivotinje()
    {
        vrsta=pingvin;
        poreklo=antartik;
        kopnena=1;
    }

    Zivotinje(Zivotinja v, Kontinenti p, bool k)
    {
        vrsta=v;
        poreklo=p;
        kopnena=k;
    }
};

#endif // ZIVOTINJE_HPP_INCLUDED
