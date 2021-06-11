#include "Karta.h"

int Karta::wolneID = 1000;
int Karta::licznik = 0;

Karta::Karta() {
	Numer = wolneID;
	wolneID++;
}

Karta* Karta::Utworz() {
	Karta* Nowa_karta = new Karta();
	return Nowa_karta;
}
