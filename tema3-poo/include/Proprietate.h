#pragma once
#include <iostream>
#include <string>
using namespace std;
class Proprietate
{
    protected:
        string nume_prop;
        string nume_client;
        double suprafata_utila;
        double discount;
        double pretpm;
    public:
        Proprietate();
        virtual ~Proprietate();
        Proprietate(const Proprietate&);
        virtual void afisare();
        string get_nume();
        void mod_nume_prop(string nume);
        void mod_nume_client(string nume);
        void mod_pretm(double x);
        void mod_discount(double x);
        void mod_suprafata_utila(double x);
        virtual void afisare_pret();
        friend std::ostream& operator <<(std::ostream& outs, Proprietate& x);
        friend std::istream& operator >>(std::istream& in, Proprietate& x);
};
