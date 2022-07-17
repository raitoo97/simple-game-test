#include "bestia.h"

//constructores
bestia::bestia(string nameinit, int hpinit, int damageinit)
{
	name = nameinit;
	hp = hpinit;
	damage = damageinit;
}
bestia::bestia()
{
	name = "bestix";
	hp = 100;
	damage = 10;
}

//getters
int bestia::getvida()
{
	return hp;
}
int bestia::getdamage()
{
	return damage;
}
string bestia::getname()
{
	return name;
}

//setters
void bestia::setvida(int vidainit)
{
	hp = vidainit;
}
void bestia::setdamage(int damgeinit)
{
	damage = damgeinit;
}
void bestia::setname(string nameinit)
{
	name = nameinit;
}
//destructor
bestia::~bestia()
{
	cout << getname() << " Ha muerto en combate." << endl;
}
