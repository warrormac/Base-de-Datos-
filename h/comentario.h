#include <string>
#include <fstream>
#ifndef COMENTARIO_H
#define COMENTARIO_H

using namespace std;

class comentario:public buscador
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
        void comenta();


};
#endif
