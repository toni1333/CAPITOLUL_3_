#include <iostream>

using namespace std;

int main()
{
    unsigned int pret= 7000;
       cout<<"DORITI SA ADAUGATI CLIMA? 500EURO (d /n)"<<endl;
         char raspuns ='n';
           cin>>raspuns;

                 if ((raspuns == 'd') || (raspuns == 'D'))
                     pret+=500;

         cout<<"VRETI SA ADAUGATI TRACTIUNE 4X4? 1000EURO (d /n)"<<endl;
             cin>>raspuns;
                   if ((raspuns == 'd') || (raspuns == 'D'))
                       pret +=1000;

                cout<<"VRETI SCAUNE DE PIELE? 250EURO (d /n)"<<endl;
                     cin>>raspuns;
                        if ((raspuns == 'd') || (raspuns == 'D'))
                            pret +=250;

                    cout<<"VRETI SA ADAUGATI 8 BOXE? 125EURO (d /n)"<<endl;
                         cin>>raspuns;
                          if ((raspuns == 'd') || (raspuns == 'D'))
                              pret +=125;

     cout<<"PRET FINAL! "<<pret;


     return 0;

}
