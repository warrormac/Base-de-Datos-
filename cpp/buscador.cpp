#include "buscador.h"
#include <iostream>
#include <string>
#include <stdlib.h>
#include <fstream>
#include <sstream>





 void buscador::busca()
{
     stringstream ss;
    ss<<name<<".txt";
    string s=ss.str();
     arch.open(s.data(),ios::in);
     while (!arch.eof())
    {
        getline(arch,texto);
        cout<<texto<<endl;
    }
}

void buscador::juegos()
{
 stringstream ss;
    ss<<name<<".txt";
    string s=ss.str();
     arch.open(s.data(),ios::in);
     while (!arch.eof())
    {
        getline(arch,texto);
        cout<<texto<<endl;
    }
}
