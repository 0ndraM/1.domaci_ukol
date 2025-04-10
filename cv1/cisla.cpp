#include "cisla.h"
#include <iomanip>
#include <iostream>

using namespace std;

// Pomocná vlastní funkce na absolutní hodnotu
int absInt(int x) {
    return (x < 0) ? -x : x;
}

Cisla::Cisla(int x, int y) : a(x), b(y) {}

int Cisla::getA() const { return a; }
int Cisla::getB() const { return b; }

int Cisla::soucet() const { return a + b; }
int Cisla::rozdil() const { return a - b; }
int Cisla::soucin() const { return a * b; }

double Cisla::podil() const {
    if (b == 0) return NAN;
    return static_cast<double>(a) / b;
}

int Cisla::maximum() const {
    return (a > b) ? a : b;
}

double Cisla::prumer() const {
    return (a + b) / 2.0;
}

int Cisla::gcd(int x, int y) const {
    x = absInt(x);
    y = absInt(y);
    while (y != 0) {
        int temp = y;
        y = x % y;
        x = temp;
    }
    return x;
}

int Cisla::lcm(int x, int y) const {
    if (x == 0 || y == 0) return 0;
    return absInt(x * y) / gcd(x, y);
}

int Cisla::nejvetsiSpolecnyDelitel() const {
    return gcd(a, b);
}

int Cisla::nejmensiSpolecnyNasobek() const {
    return lcm(a, b);
}

bool Cisla::jeNulove() const {
    return (a == 0 || b == 0);
}

void Cisla::celoCisDeleni(int& vysledek, int& zbytek) const {
    if (b != 0) {
        vysledek = a / b;
        zbytek = a % b;
    }
    else {
        vysledek = 0;
        zbytek = 0;
    }
}

void Cisla::operace(Operace op) const {
    cout << fixed << setprecision(2);
    cout << "\nÈísla: " << a << " a " << b << endl;
    cout << "Operace è. " << static_cast<int>(op) << " -> Výsledek: ";

    switch (op) {
    case SOUCET: cout << soucet(); break;
    case ROZDIL: cout << rozdil(); break;
    case SOUCIN: cout << soucin(); break;
    case PODIL:
        if (b != 0) cout << podil();
        else cout << "Nelze dìlit nulou";
        break;
    case MAXIMUM: cout << maximum(); break;
    case PRUMER: cout << prumer(); break;
    case NSN: cout << nejmensiSpolecnyNasobek(); break;
    case NSD: cout << nejvetsiSpolecnyDelitel(); break;
    case NULOVA: cout << (jeNulove() ? "Ano" : "Ne"); break;
    case ZOBRAZ: cout << "Èísla: " << a << " a " << b; break;
    case DELE: {
        int vysledek, zbytek;
        celoCisDeleni(vysledek, zbytek);
        if (b != 0)
            cout << "Celoèíselný podíl: " << vysledek << ", Zbytek: " << zbytek;
        else
            cout << "Nelze dìlit nulou";
        break;
    }
    case KONEC: cout << "Ukonèuji program..."; break;
    default: cout << "Neznámá operace"; break;
    }

    cout << endl;
}
