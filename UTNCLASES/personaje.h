#pragma once
#include "bestia.h"
#include <iostream>
#include "Arma.h"



using namespace std;




class Personaje {
private:
	string name = "";
	int damage = 0;
	Arma espada;
	

public:
	
	Personaje(string nameinit, int hpinit);
	int hp = 0;
	int gethp();
	int getdamage();
	string getname();
	void setvida(int vidainit);
	void setdamage(int damageinit);
	void setname(string nameinit);
	
	void atacar(bestia* objetivo);
	void recibirdano(bestia* atacante);
	~Personaje();











};

