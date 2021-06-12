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

void Karta::rozpocznij_rezerwacje(int wybor) {

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
		tab_rez[flaga].Rezerwuj(wybor);
	}
	else
		cout << "Wykorzystales juz wszystkie 3 rezerwacje" << endl; 
}

void Karta::Anuluj_rezerwacje(int i) {
	if (tab_rez[i].od_kiedy != 0) {
		tab_rez[i].od_kiedy = 0;
	}
	else {
		cout << "nie ma takiej rezerwacji" << endl;
		system("PAUSE");
	}

}

void Karta::Wypisz_rezerwacje() {

	for (int i = 0; i < 3; i++) {
		if  (tab_rez[i].od_kiedy != 0) {

		char od_k[26];
		ctime_s(od_k, sizeof od_k, &tab_rez[i].od_kiedy);

		char do_k[26];
		ctime_s(do_k, sizeof do_k, &tab_rez[i].do_kiedy);

		cout << i << ". tytul: " << tab_rez[i].ktora_K->Tytul << endl << "od: " << od_k << "do: " << do_k << endl << endl;
		}
	}
}