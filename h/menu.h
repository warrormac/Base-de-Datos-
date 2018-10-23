#include "buscador.h"
#ifndef MENU_H
#define MENU_H

#include <string>
#include <fstream>

using namespace std;

class menu: public buscador
{
    public:

        menu(string name):buscador(name){};
        void busc();

};

#endif // MENU_H
