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
		tab_rez[i].ktora_K->L_wolnych_egz = tab_rez[i].ktora_K->L_wolnych_egz + 1;
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

bool Karta::Czy_jest_rezerwacja(int i) {
	if (i >= 0 && i < 3) {
		if (tab_rez[i].od_kiedy != 0) return true;
	}
	return false;
}

void Karta::rozpocznij_wypozyczenie() {

	int flaga = -1;
	int max = 0;

	for (int i = 0; i < 10; i++)
	{
		if (tab_wyp[i].zwrocona == false && tab_wyp[i].od_kiedy!=0)
		{
			max++;
			break;
		}
	}

	if (max >= 3) {
		cout << "Osiagnieto maksymalna liczbe aktywnych wypozyczen (max 3)" << endl;
		system("PAUSE");
	}
	else {
		for (int i = 0; i < 10; i++)
		{
			if (tab_wyp[i].od_kiedy == 0)
			{
				flaga = i;
				break;
			}
		}
		if (flaga == -1) {
			cout << "ERROR, pelna tablica wypozyczen" << endl;
			system("PAUSE");
		}
		else {
			cout << "Z rezerwacja? " << endl << "1 - tak" << endl << "2 - nie" << endl;
			int wybor;
			do {
				cin >> wybor;
			} while (wybor != 1 && wybor != 2);
			if (wybor == 1) {
				cout << "ktora rezerwacja? " << endl;
				Wypisz_rezerwacje();
				cin >> wybor;
				if (Czy_jest_rezerwacja(wybor) == false) {
					cout << "nie ma takiej rezerwacji" << endl;
					system("PAUSE");
				}
				else {
					Anuluj_rezerwacje(wybor);
					tab_wyp[flaga].Wypozycz_z_rezerwacja(tab_rez[wybor].ktora_K);
				}
			}
			else {
				tab_wyp[flaga].wypozycz();
			}
		}
	}

}

void Karta::Wypisz_wypozyczenia() {
	cout << "Aktualnie wypozyczone: " << endl;
	for (int i = 0; i < 10; i++) {
		if (tab_wyp[i].od_kiedy != 0 && tab_wyp[i].zwrocona==false) {

			char od_k[26];
			ctime_s(od_k, sizeof od_k, &tab_wyp[i].od_kiedy);

			char do_k[26];
			ctime_s(do_k, sizeof do_k, &tab_wyp[i].do_kiedy);

			cout << i << ". tytul: " << tab_wyp[i].ktora_K->Tytul << " autor: " << tab_wyp[i].ktora_K->Autor <<  endl << "od: " << od_k << "do: " << do_k << endl << endl;
		}
	}
	cout << "Zwrocone: " << endl;

	for (int i = 0; i < 10; i++) {
		if (tab_wyp[i].od_kiedy != 0 && tab_wyp[i].zwrocona == true) {

			char od_k[26];
			ctime_s(od_k, sizeof od_k, &tab_wyp[i].od_kiedy);

			char do_k[26];
			ctime_s(do_k, sizeof do_k, &tab_wyp[i].do_kiedy);

			cout << i << ". tytul: " << tab_wyp[i].ktora_K->Tytul << " autor: " << tab_wyp[i].ktora_K->Autor << endl << "od: " << od_k << "do: " << do_k << endl << endl;
		}
	}
	cout << endl;
}

bool Karta::Czy_jest_wyporzyczenie(int i) {
	if (i >= 0 && i < 10) {
		if (tab_wyp[i].do_kiedy == 0) return false;
		if (tab_wyp[i].zwrocona == true) return false;
		return true;
	}
	return false;
}

void Karta::rozpocznij_zwrot() {
	cout << "Ktora ksiazke chcesz zwrocic?:" << endl;
	cout << "Aktualnie wypozyczone: " << endl;
	for (int i = 0; i < 10; i++) {
		if (tab_wyp[i].od_kiedy != 0 && tab_wyp[i].zwrocona == false) {

			char od_k[26];
			ctime_s(od_k, sizeof od_k, &tab_wyp[i].od_kiedy);

			char do_k[26];
			ctime_s(do_k, sizeof do_k, &tab_wyp[i].do_kiedy);

			cout << i << ". tytul: " << tab_wyp[i].ktora_K->Tytul << " autor: " << tab_wyp[i].ktora_K->Autor << endl << "od: " << od_k << "do: " << do_k << endl << endl;
		}
	}
	int wybor;
	cin >> wybor;
	if (Czy_jest_wyporzyczenie(wybor) == true) {
		tab_wyp[wybor].Zwrot();
	}
}