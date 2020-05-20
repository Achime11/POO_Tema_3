#include "Casa.h"
#include "Proprietate.h"
#include<iostream>
using namespace std;
Casa::Casa()
{
    this->nume_prop="";
    this->nume_client="";
    this->suprafata_utila=0;
    this->discount=0;
    this->pretpm=0;
    this->s_curte=0;
    this->pretpc=0;
    this->etaje=0;
}
Casa::~Casa()
{
    this->nume_prop="";
    this->nume_client="";
    this->suprafata_utila=0;
    this->discount=0;
    this->pretpm=0;
    this->s_curte=0;
    this->pretpc=0;
    this->etaje=0;
}
Casa::Casa(const Casa &other)
{
    this->nume_prop=other.nume_prop;
    this->nume_client=other.nume_client;
    this->suprafata_utila=other.suprafata_utila;
    this->discount=other.discount;
    this->pretpm=other.pretpm;
    this->s_curte=other.s_curte;
    this->pretpc=other.pretpc;
    this->etaje=other.etaje;
    this->suprafata_etaj=other.suprafata_etaj;
}
void Casa::afisare_pret()
{
    cout<<pretpm*suprafata_utila*(1.0-discount/100.0)+pretpc*s_curte<<'\n';
}
void Casa::afisare()
{
    cout<<"Nume Casa= "<<nume_prop<<"\n";
    cout<<"Nume Client= "<<nume_client<<"\n";
    cout<<"Discount= "<<discount<<"\n";
    cout<<"Suprafata Utila= "<<suprafata_utila<<"\n";
    cout<<"Pret pe Metru Patrat de Suprafata Utila= "<<pretpm<<"\n";
    cout<<"Suprafata Curte= "<<s_curte<<"\n";
    cout<<"Pret pe Metru Patrat de Suprafata Curte= "<<pretpc<<"\n";
    cout<<"Numar Etaje= "<<etaje<<"\n";
    cout<<"Suprafata etajelor: ";
    for(int i=0;i<=etaje;++i)
        cout<<suprafata_etaj[i]<<" ";
    cout<<"\n";
}
ostream& operator <<(ostream& outs, Casa& x)
{
    x.afisare();
}
istream& operator>>(istream& in, Casa& x)
{
    getline(in,x.nume_prop);
    cout<<"Nume Casa= ";
    getline(in,x.nume_prop);
    cout<<"Nume Client= ";
    getline(in,x.nume_client);
    cout<<"Discount= ";
    in>>x.discount;
    cout<<"Suprafata Utila= ";
    in>>x.suprafata_utila;
    cout<<"Pret pe Metru Patrat de Suprafata Utila= ";
    in>>x.pretpm;
    cout<<"Suprafata Curte= ";
    in>>x.s_curte;
    cout<<"Pret pe Metru Patrat de Suprafata Curte= ";
    in>>x.pretpc;
    cout<<"Numar Etaje= ";
    in>>x.etaje;
    for(int i=0;i<=x.etaje;++i)
    {
        double aux;
        cin>>aux;
        x.suprafata_etaj.push_back(aux);
    }
    return in;
}
Casa& Casa::operator=(const Casa&x)
{
    this->nume_prop=x.nume_prop;
    this->nume_client=x.nume_client;
    this->suprafata_utila=x.suprafata_utila;
    this->discount=x.discount;
    this->pretpm=x.pretpm;
    this->s_curte=x.s_curte;
    this->pretpc=x.pretpc;
    this->etaje=x.etaje;
    this->suprafata_etaj=x.suprafata_etaj;
}
