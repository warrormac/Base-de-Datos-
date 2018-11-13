#include <string>
#ifndef EDITOR_H
#define EDITOR_H

using namespace std;

class editor
{
    public:
        string nombre;
        editador(string *x):nombre(*x){};


    public:
        void buscar();
};

class cliente {
    
   public:
    string nombre;
    int id;
    string dir;
    int cat;
    
    public:

        void buscarcliente();
        void categoria();
        
        ~cliente(){};

};

class kommentar {
    
   public:
   string komment;
    
    public:

        void buscarjuego();
        void agregark();
       

        ~kommentar(){};

};

    
        
#endif // EDITOR_H
