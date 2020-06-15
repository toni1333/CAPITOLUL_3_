#include <iostream>

using namespace std;

int main()
{
    unsigned int trim=0;

    cout<<"INTRODUCETI TRIMESTRUL DORIT "<<endl;
        cin>>trim;

    if ((trim<1)||(trim>4))
        cout<<"NU A FOST INTRODUSA O VALOARE VALIDA PENTRU TRIMESTRU!!!";
      else
           if (trim ==1){
              cout<<"PROFITUL FIRMEI=3000"<<endl;
               cout<<"BILANTUL FIRMEI AN ANTERIOR=8375"<<endl;
    }
                if (trim ==2)
                  cout<<"PROFITUL FIRMEI=5000"<<endl;

                    if (trim ==3)
                      cout<<"PROFITUL FIRMEI=4000"<<endl;

                        if (trim ==4)
                          cout<<"PROFITUL FIRMEI=2500"<<endl;


    return 0;
}
