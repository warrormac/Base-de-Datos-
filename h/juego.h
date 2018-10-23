#include <string>
#ifndef JUEGO_H
#define JUEGO_H


using namespace std;
class juego
{
     public:
        string name;
        string *ptr;
        juego(string x):name(x){}


    public:

        void nombres();
        int buscar_juego();
};


#endif // JUEGO_H
