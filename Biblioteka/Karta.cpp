#include "Karta.h"
#include "Aktorzy.h"

Karta *tab_kart[3];
int Karta::wolneID = 1000;
int Karta::licznik = 0;

Karta::Karta(int id,Czytelnik Nowy) {
	Numer = id;
	Wlasciciel = Nowy;
}

void Karta::Utworz(Czytelnik Nowy) {
	if (licznik < 3) {
		tab_kart[licznik] = new Karta(wolneID, Nowy);
		licznik++;
		wolneID++;
	}
}