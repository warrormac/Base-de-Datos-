#ifndef CLIENTE_H
#define CLIENTE_H


using namespace std;

class Cliente
{
	public:
		Cliente();
		Cliente(string new_name, int new_id);

		string get_name()const{return name;}
		get_id_number()const{return id_number;}
		
	private:
		string name;
		int DNI;
		
};
ostream& operator <<(ostream& outs, Employee& tmp);
istream& operator >>(istream& ins, Employee& tmp);
#endif
