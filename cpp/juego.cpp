#include "juego.h"
#include <iostream>
#include <string>
#include <stdlib.h>
#include <fstream>

using namespace std;


void juego::nombres()
{
        string categorias[7];
        categorias[0]="Action & Adventure";categorias[1]="Fighting";
        categorias[2]="Indie";categorias[3]="Roleplaying";
        categorias[4]="RPG";categorias[5]="Shooters";
        categorias[6]="Sports";

        this -> ptr=new string[7];
        for (int y=0;y<7;y++)
        {
            ptr[y]=categorias[y];
        }

}

void juego::nom_juego()
{
    string nombre_juegos[52];
    nombre_juegos[0]="Metro Exodus";nombre_juegos[1]="halo 5";
    nombre_juegos[2]="Battlefield 5";nombre_juegos[3]="Call of Duty Black Ops 4";
    nombre_juegos[4]="PUBG";nombre_juegos[5]="Fortnite";
    nombre_juegos[6]="Destiny 2";nombre_juegos[7]="Spyro Reignited Trilogy";
    nombre_juegos[8]="HITMAN� 2";nombre_juegos[9]="Minecraft";
    nombre_juegos[10]="Red Dead Redemption 2";nombre_juegos[11]="Assassins Creed";
    nombre_juegos[12]="Overwatch";nombre_juegos[13]="Destiny";
    nombre_juegos[14]="Soulcalibur 6";nombre_juegos[15]="Street Fighter 30th Anniversary Collection";
    nombre_juegos[16]="Injustice 2";nombre_juegos[17]="Dragon Ball Fighterz";
    nombre_juegos[18]="Marvel VS Capcom: Infinite";nombre_juegos[19]="Teken 7";
    nombre_juegos[20]="Mortal Kombat";nombre_juegos[21]="Killer Instinct";
    nombre_juegos[22]="NARUTO SHIPPUDE: Ultimate Ninja STORM 4";nombre_juegos[23]="Warhammer: Vermintide 2";
    nombre_juegos[24]="Next Up Hero";nombre_juegos[25]="Sky Force Reloaded";
    nombre_juegos[26]="Layer of Fear";nombre_juegos[27]="Resident Evil 2";
    nombre_juegos[28]="The Walking Dead: Season 1";nombre_juegos[29]="Tom Clancys The Division 2";
    nombre_juegos[30]="Kindom Hearts 3";nombre_juegos[31]="Fallout 76";
    nombre_juegos[32]="Darksiders 3";nombre_juegos[33]="Adventure Time: Pirates of the Enchiridion";
    nombre_juegos[34]="State of Decay 2";nombre_juegos[35]="The Elder Scrolls V";
    nombre_juegos[36]="The Witcher";nombre_juegos[37]="Dark Souls 3";
    nombre_juegos[38]="Diablo 3";nombre_juegos[39]="Fallout 76";
    nombre_juegos[40]="WoW"; nombre_juegos[41]="Final Fantasy 15";
    nombre_juegos[42]="South Park: The Stick of Truth"; nombre_juegos[43]="NBA 2K";
    nombre_juegos[44]="FIFA 19"; nombre_juegos[45]="WWE 2K";
    nombre_juegos[46]="Rocket League"; nombre_juegos[47]="Madden NFL";
    nombre_juegos[48]="Steep"; nombre_juegos[49]="Gran Turismo Sport";
    nombre_juegos[50]="Tony Hawks Pro Skater";nombre_juegos[51]="Wii Sports";


    this-> ptr=new string[51];
    for (int y=0;y<30;y++)
    {
        ptr[y]=nombre_juegos[y];
    }
}


int juego::buscar_juego()
{

        for (int y=0;y<51;y++)
        {

            if (name==ptr[y])
                return 1;
        }
        delete ptr;
        return 0;
}
