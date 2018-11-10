#include <iostream>
#include <string>
#include <stdlib.h>
#include <fstream>
#include <sstream>
#include <typeinfo>
#include "ranking.h"

using namespace std;

template <class T>
ranking<T>::ranking(int x):equipo(x)
{

}

template <class T>
T ranking<T>::categoria()
{
    string cat[5];
    cat[1]="uno";cat[2]="dos";
    cat[3]="tres";cat[4]="cuatro";
    this -> ptr =new string[5];
    for (xx=1;xx<5;xx++)
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
            ss<<ptr[equipo]<<".txt";
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
