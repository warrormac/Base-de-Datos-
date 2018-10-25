#include <string>
#include <fstream>
#ifndef BUSCADOR_H
#define BUSCADOR_H

using namespace std;

class buscador
{
        public:
        ifstream arch;
        string texto;
        string name;
        buscador(string *ptr):name(*ptr){};


        void busca();


};

#endif // BUSCADOR_H
