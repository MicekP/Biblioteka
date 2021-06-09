#ifndef Ksiazkah
#define Ksiazkah

#include <iostream>
using namespace std;

class Ksiazka {
public:
	int ID;
	string tytul;
	string autor;
	int L_egz;						//liczba wszystkich egzemplarzy
	int L_wolnych_egz;				//liczba egzemplarzy w bibliotece, niewypozyczonych

	void Dodaj(string, string, int);				// dodawanie pozycji, tytul, autor, ilosc
	void Usun();								//usuniecie calej pozycji, gdy nie ma juz w ogole egzemplarzy
	void Usun_egzemplarz(string, string, int);	//usuwanie po tytule i autorze, ilosc
	void Usun_egzemplarz(int, int);				// usuwanie po id, ilosc
	void Dodaj_egzemplarz(string, string, int); // dodaj egzemplarz po autorze i tytule, ilosc
	void Dodaj_egzemplarz(int, int);			// dodaj po id, ilosc
};

#endif // !Ksiazkah