#include "Rezerwacja.h"
#include "Ksiazka.h"
#include <time.h>

int Rezerwacja::wolny_numer = 1000;

void Rezerwacja::Rezerwuj(int wybor){
	
	Ksiazka *K = Ksiazka::Zwroc(wybor);
	K->Usun_egzemplarz();
	time(&od_kiedy);
	cout << "Ile tygodni rezerwowac?" << endl;
	int tydzien;
	cin >> tydzien;
	int t_sekundy = tydzien * 7 * 24 * 60 * 60;
	do_kiedy = do_kiedy + t_sekundy;
	ID_ksiazki = K->ID;
	numer = wolny_numer;
	wolny_numer++;
}

void Rezerwacja::Anuluj_rezerwacje() {

}

