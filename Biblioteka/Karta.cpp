#include "Karta.h"

Karta tab_kart[10];
int Karta::wolneID = 1000;
int Karta::licznik = 0;

Karta::Karta() {
	Numer = wolneID;
	wolneID++;
}

Karta* Karta::Utworz() {
	tab_kart[licznik] = Karta();
	Karta* zwroc = &tab_kart[licznik];
	licznik++;
	return zwroc;
}

void Karta::wypisz() {
	cout << "TWOJ NUMER KARTY TO: " << Numer << endl << endl;
}