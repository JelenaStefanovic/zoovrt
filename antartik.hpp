#ifndef ANTARTIK_HPP_INCLUDED
#define ANTARTIK_HPP_INCLUDED
#include <iostream>
#include "kontinent.hpp"

using namespace std;
enum faunaAn {foka, polarni_medved, polarna_lisica, ppingvin};

class Antartik : public Kontinenti
{
private:
    faunaAn zivotinja;
    string opisKontinenta;
public:
    Antartik ()
    {
        zivotinja=ppingvin;
        opisKontinenta="Vrlo hladno";
    }
    void Ispisi()
    {
    cout << "Antartik" << endl;
    }
};

#endif // ANTARTIK_HPP_INCLUDED
