#include "spider.h"
//constructor
spider::spider(string nameinit, int vida)
{
	name = nameinit;
	hp = vida;

}
//ataques
void spider::ataquevenenoso(Personaje* objetivo, int num, int damageinit)
{
	if (num > 5) {
		objetivo->hp -= damageinit;
		cout << "El pj ha recibido " << damageinit << " de daño venenoso" << endl;
	}
	else if (num <= 5) {

		cout << "El PJ no ha recibido daño" << endl;
	}
}
//getters
string spider::getname()
{
	return name;
}
//destructor
spider::~spider()
{
	cout << "La arania ha muerto" << endl;
}
