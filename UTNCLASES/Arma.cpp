#include "Arma.h"



//constructores
Arma::Arma()
{
	srand(time(NULL));
	damage = rand() % 20 + 1;
	durability = 50;
}

//getters
int Arma::getdamage()
{
	return damage;
}
int Arma::getdurability()
{
	return durability;
}

//setters
void Arma::setdamage(int damageinit)
{
	damage = damageinit;
}
void Arma::setdurability(int durabilityinit)
{
	durability = durabilityinit;

}

//acciones
void Arma::reducedurability()
{
	durability--;
}


