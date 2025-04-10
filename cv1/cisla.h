#pragma once
#include <iostream>

enum Operace {
    KONEC = 0,
    SOUCET = 1,
    ROZDIL,
    SOUCIN,
    PODIL,
    MAXIMUM,
    PRUMER,
    NSN,
    NSD,
    NULOVA,
    ZOBRAZ,
    DELE,
    OPERACE_CELOK
};

class Cisla {
private:
    const int a;
    const int b;

    int gcd(int x, int y) const;
    int lcm(int x, int y) const;

public:
    Cisla(int x, int y);
    int getA() const;
    int getB() const;

    int soucet() const;
    int rozdil() const;
    int soucin() const;
    double podil() const;
    int maximum() const;
    double prumer() const;
    int nejvetsiSpolecnyDelitel() const;
    int nejmensiSpolecnyNasobek() const;
    bool jeNulove() const;
    void celoCisDeleni(int& vysledek, int& zbytek) const;

    void operace(Operace op) const;
};