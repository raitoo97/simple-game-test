#include <iostream>
#include <ctime>
#include "Personaje.h"
#include "pocion.h"
#include "bestia.h"
#include "bear.h"
#include "spider.h"

#pragma once

using namespace std;

int main() {
	//numeros random

	srand(time(NULL));

	//variables

	string yesorno = "";
	string& refyesorno = yesorno;
	int casos = 0;
	int& refcasos = casos;
	int pocioncura = rand() % 25 + 1;
	int arañaposibilidad = rand() % 10 + 1;
	int osopolaratackgarras = rand() % 7 + 1;
	int osopolarmordida = rand() % 15 + 1;
	int osopardogarras = rand() % 5 + 1;
	int osopardomordida = rand() % 7 + 1;
	int damagehydra = rand() % 20 + 1;
	int damagernacuadjo = rand() % 5 + 1;

	Personaje* Personaje1 = new Personaje("Personaje_Prueba", 100);
	spider* spider1 = new spider("arania de entrenamiento", 40);
	pocion* pocion1 = new pocion(pocioncura);
	bear* bear1 = new bear("Oso Polar", 44);
	bestia* bestia1 = new bestia();

	//introduccion

	cout << "Bienvenido al entrenamiento a continuacion las reglas:" << endl;
	cout << "Te enfrentaras a 3 criaturas " << endl;
	cout << "En el medio de cada combate tendras un descanso en cual podras tomar una pocion de salud" << endl;
	cout << "si decides tomar la pocion , te curaras pero el proximo combate sera mas dificil" << endl;
	cout << "por otro lado, el jugador empezara con 100 de vida, pero no tiene limite de vida es decir, si tomas la pocion aun no recibiendo daño en combato te curaras mas de 100" << endl;

	cout << endl << endl;

	// 1er combate
	cout << "primer combate contra una arania" << endl;
	cout << "ha comenzando el combate" << endl;

	while (Personaje1->gethp() > 0 && spider1->getvida() > 0) {
		cout << "Vida del PJ: " << Personaje1->gethp() << endl;
		cout << "Vida de la arania: " << spider1->getvida() << endl;
		Personaje1->atacar(spider1);
		spider1->ataquevenenoso(Personaje1, arañaposibilidad, 10);

	}

	if (Personaje1->gethp() <= 0) {

		delete Personaje1;
		Personaje1 = nullptr;
		return 0;
	}
	else if (spider1->getvida() <= 0) {
		delete spider1;
		spider1 = nullptr;
	}

	cout << endl << endl << endl;

	// breack del primer combate

	cout << "Vida del PJ despues del primer combate: " << Personaje1->gethp() << endl;
	cout << "Felicidades has superado el primer combate deseas tomar la pocion de salud?, recuerda antes leer las isntrucciones en la parte de arriba " << endl;
	cout << "escribe la palabra si , si quieres tomarla o no si no quieres: ";
	cin >> yesorno;
	if (yesorno == "si") {

		pocion1->curarhp(Personaje1);
		cout << "Ahora tu PJ tiene " << Personaje1->gethp() << " puntos de vida." << endl;
		casos = 0;
	}
	else if (yesorno == "no" && yesorno == "NO") {

		bear1->setname("oso pardo");
		bear1->setvida(34);
		casos = 1;
	}

	// segundo combate

	cout << "Comienza el segundo combate " << endl;

	if (casos == 0) {
		while (Personaje1->gethp() > 0 && bear1->getvida() > 0) {
			cout << "Vida del PJ: " << Personaje1->gethp() << endl;
			cout << "Vida de " << bear1->getname() << ":" << bear1->getvida() << endl;
			Personaje1->atacar(bear1);
			bear1->multiatack(Personaje1, osopolaratackgarras, osopolarmordida);
		}
	}
	else if (casos == 1) {

		while (Personaje1->gethp() > 0 && bear1->getvida() > 0){

		cout << "Vida del PJ: " << Personaje1->gethp() << endl;
		cout << "Vida de " << bear1->getname() << ":" << bear1->getvida() << endl;
		Personaje1->atacar(bear1);
	    bear1->multiatack(Personaje1, osopardogarras, osopardomordida);
	}
    }


	if (Personaje1->gethp() <= 0) {

		delete Personaje1;
		Personaje1 = nullptr;
		return 0;
	}
	else if (bear1->getvida() <= 0) {
		delete bear1;
		bear1 = nullptr;
	}

	// breack del segundo combate

	cout << "tu Personaje despues del segundo combate tiene " << Personaje1->gethp() << " puntos de vida" << endl;

	cout << "Bienvenido al ultimo combate, felicitacion por llegar aca.." << endl;
	cout << "Queres tomar una pocion antes del ultimo combate? por favor escribo si o no: ";
	cin >> refyesorno;

	if (refyesorno == "si") {
		pocion1->curarhp(Personaje1);
		bestia1->setname("Gran hydra");
		bestia1->setdamage(damagehydra);
		refcasos = 0;
	} else if (refyesorno == "no") {
		bestia1->setname("Pequeño renacuajo");
		bestia1->setdamage(damagernacuadjo);
		bestia1->setvida(10);
		refcasos = 1;
	
	}

	if (casos == 0) {
		while (Personaje1->gethp() > 0 && bestia1->getvida() > 0) {
			cout << "Vida del PJ: " << Personaje1->gethp() << endl;
			cout << "Vida de " << bestia1->getname() << ":" << bestia1->getvida() << endl;
			Personaje1->atacar(bestia1);
			Personaje1->recibirdano(bestia1);
		}
	}
	else if (casos == 1) {
		    while (Personaje1->gethp() > 0 && bestia1->getvida() > 0) {
			cout << "Vida del PJ: " << Personaje1->gethp() << endl;
			cout << "Vida de " << bestia1->getname() << ":" << bestia1->getvida() << endl;
			Personaje1->atacar(bestia1);
			Personaje1->recibirdano(bestia1);
			
		}
	}

	if (Personaje1->gethp() <= 0) {

		delete Personaje1;
		Personaje1 = nullptr;
		return 0;
	}
	else if (bestia1->getvida() <= 0) {
		delete bestia1;
		bestia1 = nullptr;
	}
	cout << "Vida del PJ al final del juego: " << Personaje1->gethp() << endl;
	//Mensaje final
	cout << endl << endl;
	cout << "Felicitacion has completado el desafio, de premio te vamos a dar una torta" << endl;

}
