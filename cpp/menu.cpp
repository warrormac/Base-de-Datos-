#include "menu.h"
#include "buscador.h"
#include <fstream>
#include <sstream>
#include <iostream>
#include <string>
#include <stdlib.h>


using namespace std;

void menu::busc()
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
