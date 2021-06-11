#ifndef Ksiazkah
#define Ksiazkah

#include <iostream>
#include <string>
using namespace std;

class Ksiazka {
private:
	static int licznik;
public:
	int ID;
	string Tytul;
	string Autor;
	int L_egz;						//liczba wszystkich egzemplarzy
	int L_wolnych_egz;			//liczba egzemplarzy w bibliotece, niewypozyczonych
	
	Ksiazka()
	{
		ID = 0;
		Tytul = "X";
		Autor = "Y Z";
		
		L_egz = 0;
		L_wolnych_egz = 0;
	}
	
	Ksiazka(string t, string a, int i)
	{
		ID = 1000 + licznik;
		Tytul = t;
		Autor = a;
		
		L_egz = i;
		L_wolnych_egz = i;
	}
	
	~Ksiazka() {};
		
	static void Licznik_add()
	{
		licznik++;
	}
	
	static void Dodaj();				// dodawanie pozycji, tytul, autor, ilosc
	static void Usun_egzemplarz();			//usuwanie po tytule i autorze, ilosc
	static void Usun_egzemplarz_id();		// usuwanie po id, ilosc
	static void Dodaj_egzemplarz(); 		// dodaj egzemplarz po autorze i tytule, ilosc
	static void Dodaj_egzemplarz_id();		// dodaj po id, ilosc
	static void Wypisz_ksia();					//wypisz liste ksiazek
};

#endif // !Ksiazkah
