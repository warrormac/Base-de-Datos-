
#include <iostream>
#include <string>
#include <stdlib.h>
#include <fstream>
#include <sstream>
#include <typeinfo>
#include "ranking.h"

using namespace std;



template <class T>
T ranking<T>::categoria()
{
    string cat[7];
    cat[1]="C";cat[2]="E";
    cat[3]="E+10";cat[4]="T";
    cat[5]="M";cat[6]="A";
    cat[7]="RP";
    this -> ptr =new string[8];
    for (xx=1;xx<8;xx++)
        ptr[xx]=cat[xx];


}

template <class T>
T ranking<T>::ranks(T valor)
{

        ifstream arch;
        string texto;

        stringstream ss;
        if (typeid(valor).name()==typeid(int).name())
        {
            ss<<ptr[valor]<<".txt";
            string s=ss.str();

            arch.open(s.data(),ios::in);

            while (!arch.eof())
            {
                getline(arch,texto);
                cout<<texto<<endl;

            }
            system("pause");

            delete ptr;
        }


}


