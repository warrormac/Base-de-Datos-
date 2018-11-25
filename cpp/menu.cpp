#include "menu.h"
#include <fstream>
#include <sstream>
#include <iostream>

int menu::print()
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
