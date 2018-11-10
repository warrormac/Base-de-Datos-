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
    string game;
    int x=1,y;   //Este decide la opcion del menu
    int z=0;
    int cat=0;
    string *ptr;


    while (x!=0) //este es el menu
    {
        buscador p;
        p.menu("menu");
        cin>>x;
        z=0;

        while (z==0)
        {

            if (x==1)
            {
                game="categorias";
                ptr=&game;
                juego nomb(ptr);
                nomb.set_values(ptr);
                nomb.busca();

                cout<<"\nIngrese su categoria: ";
                cin>>game;
                ptr=&game;

                juego nomb1(ptr);
                nomb1.set_values(ptr);
                nomb1.nombres();
                cat=nomb1.buscar_juego();

                if (cat==0)
                {
                    cout<<"Categoria invalida, intente de nuevo: \n";

                    system("pause");
                }
                else
                    nomb1.busca();
                system("pause");
                z=1;
            }

            if (x==2)
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
