#ifndef AZIJA_HPP_INCLUDED
#define AZIJA_HPP_INCLUDED
#include <iostream>
#include "kontinent.hpp"

using namespace std;
enum faunaAz {Slon, panda, nosorog, tigar};

class Azija: public Kontinenti
{
private:
    faunaAz zivotinja;
    string opisKontinenta;
public:
    Azija ()
    {
        zivotinja=panda;
        opisKontinenta="Toplo, mozda suvo";
    }
    void Ispisi()
    {
    cout << "Azija" << endl;
    }
};

#endif // AZIJA_HPP_INCLUDED
