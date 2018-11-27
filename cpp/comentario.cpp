#include "comentario.h"
#include <iostream>
#include <string>
#include <stdlib.h>
#include <fstream>
#include <sstream>


using namespace std;

void buscador::busca()
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

void comentario::comenta()
{

   #include<iostream>
#include <fstream>

using namespace std;
 int main() {
ofstream comentario("comentario.txt", ios::app);
comentario << "hola mundo" << endl;  comentario.close();
 return 0; }

