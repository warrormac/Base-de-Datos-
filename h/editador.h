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
        string nombre;
        
        ofstream arch1;
        string texto1;
        string nombre1;
        
        public:
        editador(string *a):nombre(*a){};
        
        void busca();
        void edita();


};
#endif
