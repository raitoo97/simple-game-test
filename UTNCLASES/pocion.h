#pragma once
#include "Personaje.h"
class pocion
{
private:
	int curacion = 0;
public:
	pocion(int curacioninit);
	int getcuracion();
	void curarhp(Personaje* Personajex);


};

