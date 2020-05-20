#pragma once
#include "Proprietate.h"
#include <iostream>
#include <string>
#include <vector>
#include <set>
using namespace std;
class Casa: public virtual Proprietate
{
    protected:
        double s_curte;
        double pretpc;
        int etaje;
        vector<double> suprafata_etaj;
    public:
        Casa();
        virtual ~Casa();
        Casa(const Casa&);
        virtual void afisare();
        void mod_s_curte(int x);
        virtual void afisare_pret();
        friend std::ostream& operator <<(std::ostream& outs, Casa& x);
        friend std::istream& operator >>(std::istream& in, Casa& x);
        Casa& operator =(const Casa& x);
};
