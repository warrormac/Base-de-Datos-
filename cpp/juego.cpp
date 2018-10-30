#include "juego.h"
#include <iostream>
#include <string>
#include <stdlib.h>
#include <fstream>

using namespace std;


void juego::nombres()
{
        string categorias[8];
        categorias[0]="Action";categorias[1]="Action-Adventure";
        categorias[2]="Adventure";categorias[3]="Role-playing";
        categorias[4]="Simulation";categorias[5]="Strategy";
        categorias[6]="Sport";categorias[7]="Idle";

        this -> ptr=new string[8];
        for (int y=0;y<8;y++)
        {
            ptr[y]=categorias[y];
        }



}

void juego::nom_juego()
{
    string nombre_juegos[30];
    nombre_juegos[0]="age of empires";nombre_juegos[1]="assassins creed";
    nombre_juegos[2]="broforce";nombre_juegos[3]="call of duty 4";
    nombre_juegos[4]="call of duty mw2";nombre_juegos[5]="cs:go";
    nombre_juegos[6]="dark souls";nombre_juegos[7]="diablo 3";
    nombre_juegos[8]="dota";nombre_juegos[9]="fallout 76";
    nombre_juegos[10]="FIFA 19";nombre_juegos[11]="firewatch";
    nombre_juegos[12]="forza horizo 4";nombre_juegos[13]="GTA 5";
    nombre_juegos[14]="halo";nombre_juegos[15]="heartstone";
    nombre_juegos[16]="journey";nombre_juegos[17]="l.a noire";
    nombre_juegos[18]="life is strange";nombre_juegos[19]="LOL";
    nombre_juegos[20]="madden";nombre_juegos[21]="minecraft";
    nombre_juegos[22]="nba 2k19";nombre_juegos[23]="overwatch";
    nombre_juegos[24]="PUBG";nombre_juegos[25]="skyrim";
    nombre_juegos[26]="strcraft";nombre_juegos[27]="the walking dead";
    nombre_juegos[28]="undertale";nombre_juegos[29]="WoW";

    this-> ptr=new string[30];
    for (int y=0;y<30;y++)
    {
        ptr[y]=nombre_juegos[y];
    }
}


int juego::buscar_juego()
{

        for (int y=0;y<30;y++)
        {
            if (name==ptr[y])
                return 1;
        }
        delete ptr;
        return 0;
}
