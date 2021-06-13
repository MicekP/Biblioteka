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
	void Zwrot();						
};

#endif // !Wypozyczenieh