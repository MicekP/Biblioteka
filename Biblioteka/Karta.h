#include <iostream>
#include "Rezerwacja.h"
#include "Wypozyczenie.h"

#ifndef Kartah
#define Kartah
using namespace std;

class Karta{
private:
	static int wolneID; // kontroluje id, zeby nie powtarzalo sie, rosnie wraz z nowa kart¹
	static int licznik; // kontroluje czy zmiesci sie w tablicy
public:
	int Numer;   //po prostu ID, moze nazwac to ID?
	Rezerwacja tab_rez[3];  
	Wypozyczenie tab_wyp[10]; 

	Karta();
	static Karta* Utworz();
	void wypisz();
	void rozpocznij_rezerwacje(int);
	void Anuluj_rezerwacje(int);
	bool Czy_jest_rezerwacja(int);
	void Wypisz_rezerwacje();
	void rozpocznij_wypozyczenie();
	void Wypisz_wypozyczenia();
	void rozpocznij_zwrot();
	bool Czy_jest_wyporzyczenie(int);
};

#endif // !Kartah