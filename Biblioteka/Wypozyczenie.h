#ifndef Wypozyczenieh
#define Wypozyczenieh
#include "Ksiazka.h"

#include <iostream>
using namespace std;

class Wypozyczenie {
public:
	time_t od_kiedy;
	time_t do_kiedy;
	Ksiazka *ktora_K;
	bool zwrocona;

	Wypozyczenie(){
		ktora_K = NULL;
		od_kiedy = 0;
		do_kiedy = 0;
		zwrocona = false;
	}
	void wypozycz();
	void Wypozycz_z_rezerwacja(Ksiazka*);
	void Zwrot();						//idea byla taka ze zwraca kare, ale to chyba nie ma sensu, chyba ze bedzie gdzies zapisywane, moze po prostu wyswietlic "kara taka i taka" i elo
	//void Nalicz_kare();					//tutaj w sumie mogloby byc wypisana jaka kara, albo w ogole to usunac, bo ta funkcja sie nie przyda inaczej niz do uzycia w zwrot
};

#endif // !Wypozyczenieh