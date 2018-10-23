#include <iostream>
#include <iostream>
#include <string>
#include <stdlib.h>
#include <fstream>
#include <sstream>
#include <typeinfo>
#include "buscador.h"
#include "juego.h"

using namespace std;

int main()
{
    string team;
    int z=0;
    string *ptr;
    cout<<"Ingrese nombre del equipo: ";
    while (z==0)
    {
        cin>>team;
        ptr=&team;

        juego nomb(team);

        nomb.nombres();

        z=nomb.buscar_juego();


        if (z==0)
        {
            cout<<"Equipo invalido, intente de nuevo: \n";
            system("pause");
        }
    }
    buscador bus(ptr);
    bus.busca();
    system("pause");
}
