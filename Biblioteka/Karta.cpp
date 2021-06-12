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

void Karta::rozpocznij_rezerwacje() {

	int flaga = -1;

	for (int i = 0; i < 3; i++)
	{
		if (tab_rez[i].od_kiedy == 0)
		{
			flaga = i;
			break;
		}
	}
	if (flaga != -1) {
		tab_rez[flaga].Rezerwuj();
	}
	else
		cout << "Wykorzystales juz wszystkie 3 rezerwacje" << endl; 
}