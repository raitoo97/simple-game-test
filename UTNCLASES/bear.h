#pragma once
#include "bestia.h"
#include <iostream>
#include "Personaje.h"
using namespace std;
class bear : public bestia
{

public:

	void multiatack(Personaje* objetivo, int ataquegarras,int mordisco);
	bear(string nameinit,int vida);
	void setvida(int vidainit);
	int getvida();
	string getname();
	void setname(string nameinit);
	~bear();
	
};

