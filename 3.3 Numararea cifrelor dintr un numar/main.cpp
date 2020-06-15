#include <iostream>

using namespace std;
int main (){

     int NR, nrc=0;

   cout<<"INTRODUCETI NUMARUL DE ANALIZAT..."<<endl;

               cin >>NR;

         do{
             NR=NR/10;
                nrc++;

            }while(NR);

                cout <<"NUMARUL CIFRELOR ESTE : "<<nrc;

    return 0;

}
