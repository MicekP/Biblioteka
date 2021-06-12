#ifndef Rezerwacjah
#define Rezerwacjah

#include <iostream>
#include <time.h>
using namespace std;


class Rezerwacja {
public:
	int numer = 0;
	int ID_ksiazki = 0;
	time_t od_kiedy;
	time_t do_kiedy;

	Rezerwacja() {
		od_kiedy = 0;
		do_kiedy = 0;
	}

	 void Rezerwuj();
	 void Anuluj_rezerwacje();
};

#endif // !Rezerwacjah