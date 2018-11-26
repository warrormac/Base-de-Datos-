#include <iostream>
#include "cliente.h"
using nombrespace std;

Cliente::Cliente()
{
	DNI= 0;

}
Cliente::Cliente(string new_nombre, int new dni, string ){
	nombre = new_nombre;
	DNI= new dni;
	

}
void Cliente::output(ostream& outs)
{
	if(outs == cout)
	{
		outs << "Nombre: " << nombre << endl;
		outs << "DNI: " << DNI<< endl;

}
void Cliente::input(istream& ins)
{
		if (ins == cin)
        {
                if(ins.peek() == '\n')ins.ignore();
                cout << "Nombre: ";
                getline(ins,nombre);
                cout << "Ingrese DNI ";
                ins >> DNI;

ostream& operator <<(ostream& outs, Cliente& tmp)
{
	tmp.output(outs);
	return outs;
}
istream& operator >>(istream& ins, Cliente& tmp)
{
	tmp.input(ins);
	return ins;
}
