#ifndef MENU_H
#define MENU_H
#include "buscador.h"

class menu: public buscador
{
public:
    menu (string a):buscador(a){};

    int print();

};

#endif // MENU_H
