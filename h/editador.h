#include <string>
#ifndef EDITADOR_H
#define EDITADOR_H

using namespace std;

class editador
{
    public:
        string nombre;
        editador(string *x):nombre(*x){};


    public:
        void buscar();
};

#endif // EDITADOR_H
