#include "Personaje.h"





//constuctores
Personaje::Personaje(string nameinit, int hpinit)
{
	name = nameinit;
	hp = hpinit;
	damage = espada.getdamage();
	
}

//getters
int Personaje::gethp()
{
	return hp;
}
int Personaje::getdamage()
{
	return damage;
}
string Personaje::getname()
{
	return name;
}


//setters
void Personaje::setvida(int vidainit)
{
	hp = vidainit;
}
void Personaje::setdamage(int damageinit)
{
	damage = damageinit;
}
void Personaje::setname(string nameinit)
{
	name = nameinit;
}
//acciones

void Personaje::atacar(bestia* objetivo)
{
	objetivo->hp -= damage;
	
}
void Personaje::recibirdano(bestia* atacante)
{
	hp -= atacante->getdamage();
	
}
//destructor
Personaje::~Personaje()
{
	cout << "el Personaje ha muerto" << endl;
}




