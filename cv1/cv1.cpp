#include <iostream>
#include "cisla.h"

using namespace std;

int main() {
    locale::global(locale("czech"));

    int x, y;
    cout << "Zadejte dvě celá čísla oddělaná mezerou: ";
    cin >> x >> y;

    Cisla* cisla = new Cisla(x, y);
    Operace op;

    do {
        cout << "\nZvolte operaci:\n"
            << "1 - Součet\n"
            << "2 - Rozdíl\n"
            << "3 - Součin\n"
            << "4 - Podíl\n"
            << "5 - Maximum\n"
            << "6 - Průměr\n"
            << "7 - Nejmenší společný násobek (NSN)\n"
            << "8 - Největší společný dělitel (NSD)\n"
            << "9 - Je alespoň jedno číslo nulové?\n"
            << "10 - Zobrazit čísla\n"
            << "11 - Celočíselné dělení a zbytek\n"
            << "0 - Konec\n"
            << "Zadejte číslo operace: ";
        int volba;
        cin >> volba;
        op = static_cast<Operace>(volba);

        if (op != KONEC)
            cisla->operace(op);

    } while (op != KONEC);

    delete cisla;
    return 0;
}
