#include "bear.h"

//acciones
void bear::multiatack(Personaje* objetivo, int ataquegarras, int mordisco)
{
	objetivo->hp -= ataquegarras;
	objetivo->hp -= mordisco;
	cout << "Ataque de garras: " << ataquegarras << endl;
	cout << "Ataque de mordisco: " << mordisco << endl;
	
}
//constructores
bear::bear(string nameinit, int vida)
{
	name = nameinit;
	hp = vida;
}
//getters y setters
void bear::setvida(int vidainit)
{
	hp = vidainit;
}
int bear::getvida()
{
	return hp;
}
string bear::getname()
{
	return name;
}
void bear::setname(string nameinit)
{
	name = nameinit;
}
//destructor
bear::~bear()
{
	cout << "el oso ha muerto" << endl;
}


