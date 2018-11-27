#include <string>
#include <fstream>
#ifndef EDITADOR_H
#define EDITADOR_H

using namespace std;

class editador
{
        protected:
    
        ifstream arch;
        string texto;
        string name;
        
        public:
        editador(string *a):name(*a){};
        
        void busca();
        void edita();


};
#endif
