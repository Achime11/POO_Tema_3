#include "Apartament.h"
#include "Proprietate.h"
#include<iostream>
#include <set>
using namespace std;
Apartament::Apartament()
{
    this->nume_prop="";
    this->nume_client="";
    this->suprafata_utila=0;
    this->discount=0;
    this->pretpm=0;
    this->etaj=0;
}
Apartament::~Apartament()
{
    this->nume_prop="";
    this->nume_client="";
    this->suprafata_utila=0;
    this->discount=0;
    this->pretpm=0;
    this->etaj=0;
}
Apartament::Apartament(const Apartament &other)
{
    this->nume_prop=other.nume_prop;
    this->nume_client=other.nume_client;
    this->suprafata_utila=other.suprafata_utila;
    this->discount=other.discount;
    this->pretpm=other.pretpm;
    this->etaj=other.etaj;
}
void Apartament::afisare_pret()
{
    cout<<pretpm*suprafata_utila*(1.0-discount/100.0)<<'\n';
}
void Apartament::afisare()
{
    cout<<"Nume Casa= "<<nume_prop<<"\n";
    cout<<"Nume Client= "<<nume_client<<"\n";
    cout<<"Discount= "<<discount<<"\n";
    cout<<"Suprafata Utila= "<<suprafata_utila<<"\n";
    cout<<"Pret pe Metru Patrat de Suprafata Utila= "<<pretpm<<"\n";
    cout<<"Etaj= "<<etaj<<"\n";
}
ostream& operator <<(ostream& outs,Apartament& x)
{
    x.afisare();
}
istream& operator>>(istream& in, Apartament& x)
{
    getline(in,x.nume_prop);
    cout<<"Nume Apartament= ";
    getline(in,x.nume_prop);
    cout<<"Nume Client= ";
    getline(in,x.nume_client);
    cout<<"Discount= ";
    in>>x.discount;
    cout<<"Suprafata Utila= ";
    in>>x.suprafata_utila;
    cout<<"Pret pe Metru Patrat de Suprafata Utila= ";
    in>>x.pretpm;
    cout<<"Etaj= ";
    in>>x.etaj;
    return in;
}
Apartament& Apartament::operator=(const Apartament&x)
{
    this->nume_prop=x.nume_prop;
    this->nume_client=x.nume_client;
    this->suprafata_utila=x.suprafata_utila;
    this->discount=x.discount;
    this->pretpm=x.pretpm;
    this->etaj=x.etaj;
}
