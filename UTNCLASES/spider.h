#pragma once
#include "bestia.h"
#include <iostream>
#include "Personaje.h"
using namespace std;
class spider : public bestia
{

public:
	spider(string nameinit,int vida);
	void ataquevenenoso(Personaje* objetivo,int num,int damageinit);
	string getname();
	~spider();
};

