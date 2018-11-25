#include <string>
#include "buscador.h"
#ifndef JUEGO_H
#define JUEGO_H


using namespace std;

class juego:public buscador

{
     public:
        string names;
        string *ptr;
        juego(string *x):buscador(*x){};


    public:

        void nombres();
        void nom_juego();
        int buscar_juego();

        ~juego(){};

};


#endif // JUEGO_H
