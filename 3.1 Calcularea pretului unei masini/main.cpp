#include <iostream>

using namespace std;

int main()
{
    unsigned int pret= 7000;
       cout<<"DORITI SA ADAUGATI CLIMA? 500EURO (d /n)"<<endl;
         char raspuns1 ='n';
           cin>>raspuns1;

                 if ((raspuns1 == 'd') || (raspuns1 == 'D'))
                     pret+=500;

         cout<<"VRETI SA ADAUGATI TRACTIUNE 4X4? 1000EURO (d /n)"<<endl;
           char raspuns2='n';
             cin>>raspuns2;
                   if ((raspuns2 == 'd') || (raspuns2 == 'D'))
                       pret +=1000;

                cout<<"VRETI SCAUNE DE PIELE? 250EURO (d /n)"<<endl;
                   char raspuns3='n';
                     cin>>raspuns3;
                        if ((raspuns3 == 'd') || (raspuns3 == 'D'))
                            pret +=250;

                    cout<<"VRETI SA ADAUGATI 8 BOXE? 125EURO (d /n)"<<endl;
                       char raspuns4='n';
                         cin>>raspuns4;
                          if ((raspuns4 == 'd') || (raspuns4 == 'D'))
                              pret +=125;

     cout<<"PRET FINAL! "<<pret;


     return 0;

}
