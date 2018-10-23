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
int juego::buscar_juego()
{
        for (int y=0;y<7;y++)
        {
            if (name==ptr[y])
                return 1;
        }
        delete ptr;
        return 0;


}
