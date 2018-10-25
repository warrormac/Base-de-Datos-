#include <iostream>
#include <iostream>
#include <string>
#include <stdlib.h>
#include <fstream>
#include <sstream>
#include <typeinfo>
#include "buscador.h"
#include "juego.h"
#include "editador.h"

using namespace std;

int main()
{
    string game;
    int x=1;   //Este decide la opcion del menu 
    int z=0;
    string *ptr;
    if (x==1)  //buscador de categorias
    {
        while (z==0)
        {
            cout<<"Ingrese su categoria: ";
            cin>>game;
            ptr=&game;

            juego nomb(ptr);

            nomb.nombres();

            z=nomb.buscar_juego();


            if (z==0)
            {
                cout<<"Categoria invalida, intente de nuevo: \n";
                system("pause");
            }
        }
        buscador bus(ptr);
        bus.busca();
        system("pause");
    }


    if (x==2)   //buscador de juego   
    {
        cout<<"ingrese el nombre del juego: ";
        cin>>game;
        ptr=&game;
        
        editador busc(ptr);

    }

}
