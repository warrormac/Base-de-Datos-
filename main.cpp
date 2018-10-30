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
    int cat=0;
    string *ptr;
    if (x==1)  //buscador de categorias
    {
        while (z==0)
        {

            int op=2;
            cout<< "presione 1 para ingresar alguna categoria, 0 para buscar en toda la base de datos.\n";
            cin>>op;
            while (op<0 && op>1)
            {
                cout<<"opcion invalida, intente de nuevo.\n";
                cout<<"presione 1 para ingresar alguna categoria, 0 para buscar en toda la base de datos.\n";
                cin>>op;
            }
            if (op==1)
            {
                cout<<"Ingrese su categoria: ";
                cin>>game;
                ptr=&game;

                juego nomb(ptr);
                nomb.set_values(ptr);
                nomb.nombres();

                cat=nomb.buscar_juego();


                if (cat==0)
                {
                    cout<<"Categoria invalida, intente de nuevo: \n";

                    system("pause");
                }
                else
                    nomb.busca();
                system("pause");


            }
            if (op==0)
            {
                cout<<"ingrese el nombre del juego: ";
                cin>>game;
                ptr=&game;

                juego nom(ptr);
                nom.set_values(ptr);
                nom.nom_juego();

                cat=nom.buscar_juego();

                if (cat==0)
                {
                    cout<<"Juego no encontrado, intente de nuevo: \n";

                    system("pause");
                }
                else
                    nom.busca();
                system("pause");
            }
        }


        }
}
