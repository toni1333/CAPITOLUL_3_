
    #include <iostream>

     using namespace std;
  int main()

{

    cout << " INTRODUCETI TRIMESTRUL DORIT"<< endl;

   unsigned short trim =0;

         cin >>trim;

        switch (trim){

       case 1: trim= 1; cout<<"PROFITUL FIRMEI ESTE DE 3000 "<<endl<<"BILANTUL PE ANUL ANTERIOR ESTE DE 8375";  break;

       case 2 : trim= 2; cout<<"PROFITUL FIRMEI ESTE DE 5000"; break;

       case 3 : trim= 3; cout <<"PROFITUL FIRMEI ESTE DE 4000"; break;

       case 4 : trim= 4; cout<<"PROFITUL FIRMEI ESTE DE 2500"; break;

                 default : cout<<"NU ATI INTRODUS UN TRIMESTRU VALID!..." ;
                }
return 0;
}
