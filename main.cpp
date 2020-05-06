#include <iostream>
#include "afrika.hpp"
#include "animator.hpp"
#include "antartik.hpp"
#include "australija.hpp"
#include "azija.hpp"
#include "delfin.hpp"
#include "hrana.hpp"
#include "karte.hpp"
#include "kengur.hpp"
#include "lav.hpp"
#include "okean.hpp"
#include "pingvin.hpp"
#include "predstave.hpp"
#include "suvenirnica.hpp"
#include "zaposleni.hpp"
#include "zivotinje.hpp"
#include "zoovrt.hpp"

using namespace std;

int main()
{
    /*
    Moja ideje za funkcionalnost projekta su sledece:
    1. Prodaja karata odnosno ulaznica:
    Korisnik izabere da li zeli poludnevnu celodnevnu ili kartu za predstavu,
    za svaku ispise cenu, ako korisnik izabere jednu od prve dve ponudi mu i predstau za taj dan, bira termin,
    zivotinju,animatora, termin, na kraju broj karata i ispise mu se konacna cena.
    2. Dodavanje zivotinja u zoo vrt
    */
    Zivotinje z1(pingvin, Antartik, 1);
    z1.citajFajl("Spisak.txt");
    return 0;
}
