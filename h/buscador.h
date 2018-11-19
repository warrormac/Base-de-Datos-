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
        void set_values (string *a)
            { name=*a;}


        int menu(string );
        void busca();
        void juegos();


};
