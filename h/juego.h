#include <string>
#include "buscador.h"
#ifndef JUEGO_H
#define JUEGO_H


using namespace std;

class juego: public buscador
{
     public:
        string name;
        string *ptr;
        juego(string *x):name(*x){};


    public:

        void nombres();
        void nom_juego();
        int buscar_juego();

        ~juego()
        {
            delete ptr;
        }
};


#endif // JUEGO_H
