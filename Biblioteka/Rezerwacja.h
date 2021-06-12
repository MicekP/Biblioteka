#ifndef Rezerwacjah
#define Rezerwacjah
#include "Ksiazka.h"

#include <iostream>
#include <time.h>
using namespace std;


class Rezerwacja {
	static int wolny_numer;
public:
	int numer;
	Ksiazka* ktora_K;
	time_t od_kiedy;
	time_t do_kiedy;

	Rezerwacja() {
		ktora_K = NULL;
		numer = 0;
		od_kiedy = 0;
		do_kiedy = 0;
	}

	 void Rezerwuj(int);
};

#endif // !Rezerwacjah