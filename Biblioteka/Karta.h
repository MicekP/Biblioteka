#include <iostream>

#ifndef Kartah
#define Kartah
using namespace std;

class Karta{
private:
	static int wolneID; // kontroluje id, zeby nie powtarzalo sie, rosnie wraz z nowa kart¹
	static int licznik; // kontroluje czy zmiesci sie w tablicy
public:
	int Numer;   //po prostu ID, moze nazwac to ID?
	//Rezerwacja tab[3];  pozniej bedzie do rezerwacji
	//Wypozyczenie tab[3]; pozniej bedzie do wypozyczen, wydaje mi sie, ze na logike to powinno byc na stosie zrobione

	Karta();
	static void Utworz_karte();
	void Rozpocznij_rezerwacje();
	void Wypisz_rezerwacje();
	void Wypisz_wypozyczenia();

};

#endif // !Kartah