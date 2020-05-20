#pragma once
#include "Proprietate.h"
#include <iostream>
#include <string>
#include <set>
using namespace std;
class Apartament: public virtual Proprietate
{
    protected:
        int etaj;
    public:
        Apartament();
        virtual ~Apartament();
        Apartament(const Apartament&);
        virtual void afisare();
        void mod_etaj(int x);
        virtual void afisare_pret();
        friend std::ostream& operator <<(std::ostream& outs, Apartament& x);
        friend std::istream& operator >>(std::istream& in, Apartament& x);
        Apartament& operator=(const Apartament&x);
};

