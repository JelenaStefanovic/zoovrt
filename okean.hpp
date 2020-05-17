#ifndef OKEAN_HPP_INCLUDED
#define OKEAN_HPP_INCLUDED
#include <iostream>
#include "kontinent.hpp"

using namespace std;
enum faunaO {Kit, ajkula, Delfini, tropske_ribe};

class Okean : public Kontinenti
{
private:
    faunaO zivotinja;
    string opisProstora;
public:
    Okean ()
    {
        zivotinja=Delfini;
        opisProstora="Hladno, mokro jer je okean voda";
    }
    void Ispisi()
    {
    cout << "Okean" << endl;
    }
};

#endif // OKEAN_HPP_INCLUDED
