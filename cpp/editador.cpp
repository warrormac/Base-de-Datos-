#include "editador.h"
#include <iostream>
#include <string>
#include <stdlib.h>
#include <fstream>
#include <sstream>


using namespace std;
ifstream lectura;
    ifstream verificador;
    ofstream auxiliar;
    char auxCodigo[30];
    char codigoModif[30];
    char auxNombre[30];
    char auxDomicilio[30];
    char auxCelular[20];
    char auxFecha[30];
    bool encontrado=false;
    bool coincidencia=false;
    bool mismoCodigo=false;
    lectura.open("clientes.txt",ios::in);
    verificador.open("clientes.txt",ios::in);
    auxiliar.open("auxiliar.txt",ios::out);
    cout<<"\t\t\t\t***Modificar los datos de un cliente***\t\t\t\t\n\n";
    if(lectura.is_open()&&verificador.is_open()&&auxiliar.is_open())
    {
        fflush(stdin);
        cout<<"Ingresa el c\242digo del cliente que deseas modificar: ";
        cin.getline(auxCodigo,30);

        if(strcmp(auxCodigo,"")==0)
        {
            do
            {
                cout<<"c\242digo de cliente no v\240lido!, intentalo nuevamente: ";
                cin.getline(auxCodigo,30);
            }
            while(strcmp(auxCodigo,"")==0);
        }

        strcpy(codigoModif,auxCodigo);

        lectura>>codigoCliente;
        while(!lectura.eof())
        {
            lectura>>nombre>>domicilio>>celular>>FechaPago;
            if(strcmp(auxCodigo,codigoCliente)==0)
            {
                encontrado=true;
                mostarRegistro(codigoModif);

                cout<<"**********************************************";
                cout<<"\n\n";
                cout<<"Ingresa la nueva informaci\242n para el cliente\n\n";
                fflush(stdin);
                cout<<"Ingresa el c\242digo del cliente: ";
                cin.getline(auxCodigo,30);
                if(strcmp(auxCodigo,codigoModif)==0)
                {
                    mismoCodigo=true;
                }
                if(mismoCodigo==false)
                {
                    do
                    {
                        if(strcmp(auxCodigo,codigoModif)==0)
                        {
                            coincidencia=false;
                            break;
                        }
                        verificador.seekg(0);
                        verificador>>codigoCliente;
                        while(!verificador.eof())
                        {
                            verificador>>nombre>>domicilio>>celular>>FechaPago;

                            if(strcmp(codigoCliente,auxCodigo)==0)
                            {
                                coincidencia=true;
                                cout<<"\n\nYa existe un cliente con ese c\242digo!\n\n";
                                cout<<"El cliente con ese c\242digo es: "<<nombre<<"\n\n";
                                cout<<"Ingresa un c\242digo v\240lido!: ";
                                cin.getline(auxCodigo,30);

                                if(strcmp(auxCodigo,"")==0)
                                {
                                    do
                                    {
                                        cout<<"\nc\242digo de cliente no v\240lido!, ";
                                        cout<<"intentalo nuevamente: ";
                                        cin.getline(auxCodigo,30);
                                    }
                                    while(strcmp(auxCodigo,"")==0);
                                }
                                break;
                            }

                            verificador>>codigoCliente;
                        }

                        if(verificador.eof()&&strcmp(auxCodigo,codigoCliente)!=0)
                        {
                            coincidencia=false;
                        }

                    }
                    while(coincidencia==true);
                }
                system(CLEAR);
                cout<<"***Modificar los datos de un cliente***\n\n";
                cout<<"Ingresa el c\242digo del cliente que deseas modificar: ";
                cout<<codigoModif;
                mostarRegistro(codigoModif);
                cout<<"**********************************************";
                cout<<"\n\n";
                cout<<"Ingresa la nueva informaci\242n para el cliente\n\n";
                cout<<"Ingresa el c\242digo del cliente: ";
                cout<<auxCodigo;
                cout<<"\n\n";
                fflush(stdin);
                cout<<"Ingresa el nombre del cliente: ";
                cin.getline(auxNombre,30);
                fflush(stdin);
                cout<<"\n\n";
                cout<<"Ingresa el domicilio del cliente: ";
                cin.getline(auxDomicilio,30);
                cout<<"\n\n";
                fflush(stdin);
                cout<<"Ingresa el n\243mero de telefono del cliente: ";
                cin.getline(auxCelular,20);
                cout<<"\n\n";
                fflush(stdin);
                cout<<"Ingresa la fecha de inscripci\242n del cliente: ";
                cin.getline(auxFecha,30);
                cout<<"\n\n";
                auxiliar<<auxCodigo<<"\n\n"<<auxNombre<<"\n\n"<<auxDomicilio<<"\n\n"<<auxCelular
                        <<"\n\n"<<auxFecha<<"\n\n";
                cout<<"El Registro se ha modificado correctamente.\n\n";
            }


            else
            {

                auxiliar<<codigoCliente<<"\n\n"<<nombre<<"\n\n"<<domicilio<<"\n\n"<<celular
                        <<"\n\n"<<FechaPago<<"\n\n";
            }


            lectura>>codigoCliente;
        }

    }
    else
    {
        error();
    }

    if(encontrado==false)
    {
        cout<<"\n\nNo se encontr\242 ning\243n registro con ese c\242digo!\n\n";
    }
    lectura.close();
    verificador.close();
    auxiliar.close();
    remove("clientes.txt");
    rename("auxiliar.txt","clientes.txt");
    pausa();
}
