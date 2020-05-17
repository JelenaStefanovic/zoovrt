#ifndef AUSTRALIJA_HPP_INCLUDED
#define AUSTRALIJA_HPP_INCLUDED
#include <iostream>
#include "kontinent.hpp"

using namespace std;
enum faunaAu {koala, kkengur, emu, tasmanijski_djavo};

class Australija : public Kontinenti
{
private:
    faunaAu zivotinja;
    string opisKontinenta;
public:
    Australija ()
    {
        zivotinja=kkengur;
        opisKontinenta="Toplo, suvo";
    }
    void Ispisi()
    {
    cout << "Australija" << endl;
    }
};

#endif // AUSTRALIJA_HPP_INCLUDED
