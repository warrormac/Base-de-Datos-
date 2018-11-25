#include "buscador.h"
#ifndef RANKING_H
#define RANKING_H
#include <string>

using namespace std;

template <class T>
class ranking
{
    public:
        int equipo;
        int xx;
        string *ptr;


    public:

        ranking(int x){equipo=x;};
        T categoria();

        T ranks(T valor);

};
#endif // RANKING_H
