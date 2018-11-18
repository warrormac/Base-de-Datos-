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
                cout<<"codigo de cliente no valido, intentalo nuevamente: ";
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

               
                cout<<"Ingresa la nueva informacion para el cliente\n\n";
                fflush(stdin);
                cout<<"Ingresa el codigo del cliente: ";
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
                                cout<<"Ya existe un cliente con ese codigo!\n\n";
                                cout<<"El cliente con ese codigo es: "<<nombre<<"\n\n";
                                cout<<"Ingresa un codigo valido!: ";
                                cin.getline(auxCodigo,30);

                                if(strcmp(auxCodigo,"")==0)
                                {
                                    do
                                    {
                                        cout<<"codigo de cliente no valido!, ";
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
