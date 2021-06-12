#include <iostream>
#include "Rezerwacja.h"

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
	//Wypozyczenie tab[3]; pozniej bedzie do wypozyczen, wydaje mi sie, ze na logike to powinno byc na stosie zrobione

	Karta();
	static Karta* Utworz();
	void wypisz();
	void rozpocznij_rezerwacje(int);
};

#endif // !Kartah