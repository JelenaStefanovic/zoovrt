#ifndef AFRIKA_HPP_INCLUDED
#define AFRIKA_HPP_INCLUDED
#include <iostream>
#include "kontinent.hpp"

using namespace std;
enum faunaAf {antilopa, llav, hijena, bizon};

class Afrika : public Kontinenti
{
private:
    faunaAf zivotinja;
    string opisKontinenta;
public:
    Afrika ()
    {
        zivotinja=llav;
        opisKontinenta="Toplo, suvo";
    }
    void Ispisi()
    {
    cout << "Afrika" << endl;
    }
};

#endif // AFRIKA_HPP_INCLUDED
