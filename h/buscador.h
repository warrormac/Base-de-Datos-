#include <string>
#include <fstream>
#ifndef BUSCADOR_H
#define BUSCADOR_H

using namespace std;

class buscador //clase padre
{
        protected:
        ifstream arch;
        string texto;
        string name;
        //buscador(string *ptr):name(*ptr){};

        public:
        buscador(string *a):name(*a){};
        buscador(string a):name(a){};





        void busca();
        void juegos();


};
#endif
