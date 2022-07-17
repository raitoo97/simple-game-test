#pragma once
#include <iostream>
#include <ctime>
using namespace std;

class Arma
{
private:
	int damage = 0;
	int durability = 0;

public:
	Arma();
	int getdamage();
	int getdurability();
	void setdamage(int damageinit);
	void reducedurability();
	void setdurability(int durabilityinit);

};

