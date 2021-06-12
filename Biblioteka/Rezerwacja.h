#ifndef Rezerwacjah
#define Rezerwacjah

#include <iostream>
#include <time.h>
using namespace std;


class Rezerwacja {
	static int wolny_numer;
public:
	int numer;
	int ID_ksiazki;
	time_t od_kiedy;
	time_t do_kiedy;

	Rezerwacja() {
		numer = 0;
		ID_ksiazki = 0;
		od_kiedy = 0;
		do_kiedy = 0;
	}

	 void Rezerwuj(int);
	 void Anuluj_rezerwacje();
};

#endif // !Rezerwacjah