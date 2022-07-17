#pragma once
#include <iostream>
using namespace std;
class bestia
{
protected:

	int damage = 0;
	string name = "";

public:

	int hp = 0;
	bestia(string nameinit,int hpinit, int damageinit);
	bestia();
	int getvida();
	int getdamage();
	string getname();
	void setvida(int vidainit);
	void setdamage(int damgeinit);
	void setname(string nameinit);
	~bestia();
	



};

