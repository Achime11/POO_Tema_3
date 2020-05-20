#include "Proprietate.h"
#include<iostream>
using namespace std;
Proprietate::Proprietate()
{
    this->nume_prop="";
    this->nume_client="";
    this->suprafata_utila=0;
    this->discount=0;
    this->pretpm=0;
}
Proprietate::~Proprietate()
{
    this->nume_prop="";
    this->nume_client="";
    this->suprafata_utila=0;
    this->discount=0;
    this->pretpm=0;
}
Proprietate::Proprietate(const Proprietate &other)
{
    this->nume_prop=other.nume_prop;
    this->nume_client=other.nume_client;
    this->suprafata_utila=other.suprafata_utila;
    this->discount=other.discount;
    this->pretpm=other.pretpm;
}
void Proprietate::mod_nume_prop(string nume)
{
    this->nume_prop=nume;
}
void Proprietate::mod_nume_client(string nume)
{
    this->nume_client=nume;
}
void Proprietate::mod_pretm(double x)
{
    this->pretpm=x;
}
void Proprietate::mod_suprafata_utila(double x)
{
    this->suprafata_utila=x;
}
void Proprietate::mod_discount(double x)
{
    this->discount=x;
}
void Proprietate::afisare_pret()
{
    cout<<pretpm*suprafata_utila*(1.0-discount/100.0)<<'\n';
}
void Proprietate::afisare()
{
    cout<<nume_prop<<"\n";
    cout<<nume_client<<"\n";
    cout<<suprafata_utila<<"\n";
    cout<<discount<<"\n";
    cout<<pretpm<<"\n";
}
string Proprietate::get_nume()
{
    return nume_prop;
}
ostream& operator <<(ostream& outs,Proprietate& x)
{
    x.afisare();
}
std::istream& operator>>(std::istream& in, Proprietate& x)
{
    getline(in,x.nume_prop);
    getline(in,x.nume_prop);
    getline(in,x.nume_client);
    in>>x.suprafata_utila;
    in>>x.discount;
    in>>x.pretpm;
    return in;
}
