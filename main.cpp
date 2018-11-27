#include <iostream>
#include <string>
#include <stdlib.h>
#include <fstream>
#include <sstream>
#include <typeinfo>
#include "include/buscador.h"
#include "include/juego.h"
#include "include/ranking.h"
#include "src\ranking.cpp"
#include "menu.h"

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
        menu m("menu");
        m.print();
        cin>>x;
        z=0;

        while (z==0)
        {

            if (x==1)
            {
                string game1;
                game="categorias";
                ptr=&game;
                juego nomb(ptr);
                nomb.busca();

                getline(cin,game1);
                cout<<"\nIngrese su categoria: ";
                getline(cin,game1);
                ptr=&game1;


                juego nomb1(ptr);
                nomb1.nombres();
                cat=nomb1.buscar_juego();

                if (cat==0)
                {
                    cout<<"Categoria invalida, intente de nuevo: \n";

                    system("pause");
                }
                else
                    nomb1.busca();
                cout<<"Presione 2 si le gustaria revisar algun juego, sino presione 1";
                cin>>x;
                z=1;
            }

            if (x==2)
            {
                string game2;
                getline(cin,game2);
                cout<<"ingrese el nombre del juego: ";
                getline(cin,game2);
                ptr=&game2;

                juego nom(ptr);
                nom.nom_juego();

                cat=nom.buscar_juego();

                if (cat==0)
                {
                    cout<<"Juego no encontrado, intente de nuevo: \n";

                    system("pause");
                }
                else
                    nom.juegos();
                system("pause");
                z=1;

            }
             if (x==4)
            {
                string q;
                int y;
                string lista[8];
                lista[1]="C";lista[2]="E";
                lista[3]="E+10";lista[4]="T";
                lista[5]="M";lista[6]="A";
                lista[7]="RP";
                menu l("ESRB");
                l.print();
                cin>>q;
                cout<<q;
                    if (q=="1" || q=="2" || q=="3" || q=="4" || q=="5" || q=="6" || q=="7")
                    {
                        stringstream conv(q);
                        conv>>y;
                        ranking<int> XX(1);
                        XX.categoria();
                        XX.ranks(y);
                        z++;
                    }
                    if (q== "C" || q=="E" || q=="E+10" || q=="T" || q=="M" || q=="A" || q=="RP")
                    {


                        for (int cont=0;cont<8;cont++)
                        {
                            if (q==lista[cont])
                            {
                                ranking<int> XX(1);
                                XX.categoria();
                                XX.ranks(cont);
                                z++;
                                break;
                            }
                        }
                    }
                    if (z==0){
                        cout<<"Opcion invalida\nIngrese categoria de ranking de 1 a 4\n(1 siendo los top sellers y 4 los que estan en sale):  ";
                        cin>>x;}
                }
                if (x==5)
                {
                    menu cc("Creditos");
                    cc.print();
                    z=1;
                    system("pause");

                }

                if (x==0)
                    break;

            }
    }}

