#include "pocion.h"
//constructores
pocion::pocion(int curacioninit)
{
	curacion = curacioninit;
}
//getters
int pocion::getcuracion()
{
	return curacion;
}
//acciones
void pocion::curarhp(Personaje* Personajex)
{
		Personajex->hp += curacion;
}

