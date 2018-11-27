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

    ifstream game;
    ofstream nuevotexto;
    stringstream juego1;
    juego<<name<<" .txt";
    string juego2 = juego1.str();
    
    game.open(".txt",ios::out);
    
    while(!game.eof())
    {
        while(filein >> strTemp)
    {
        if(strTemp == strReplace){
            strTemp = strNew;
            //found = true;
        }
        strTemp += "\n";
        fileout << strTemp;
        //if(found) break;
    }
    return 0;
           
        
