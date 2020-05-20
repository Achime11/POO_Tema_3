#include <iostream>
#include <vector>
#include "Proprietate.h"
#include "Apartament.h"
#include "Casa.h"
#include "InvalidProp.h"
#include "Gestiune.h"
#include <set>

using namespace std;
int n;
vector <Casa> Case;
vector <Apartament> Apartamente;
set<pair<string, string>> Proprietati;
int main()
{
    cout<<"Numar Proprietati= ";
    cin>>n;
    for(int i=1;i<=n;++i)
    {
        Casa aux_casa;
        Apartament aux_apartament;
        try
        {
            cout<<"Tip proprietate (1=Apartament, 2=Casa)= ";
            int tip;
            cin>>tip;
            if(tip==1)
            {
                cin>>aux_apartament;
                Proprietati.insert(make_pair(aux_apartament.get_nume(),"Apartament"));
                Apartamente.push_back(aux_apartament);
            }
            else if(tip==2)
            {
                cin>>aux_casa;
                Proprietati.insert(make_pair(aux_casa.get_nume(),"Casa"));
                Case.push_back(aux_casa);
            }
            else throw(InvalidProp());
        }
        catch(exception&e)
        {
            cout<<e.what()<<"\n";
        }
    }
    cout<<"\n\n";
    for(auto x:Proprietati)
        cout<<x.first<<" - "<<x.second<<'\n';
    cout<<"\n\n";
    cout<<"Lista Caselor: \n";
    for(int i=0;i<Case.size();++i)
        cout<<Case[i]<<'\n';
    cout<<"\n\n";
    cout<<"Lista Apartamentelor: \n";
    for(int i=0;i<Apartamente.size();++i)
        cout<<Apartamente[i]<<'\n';
    return 0;
}
