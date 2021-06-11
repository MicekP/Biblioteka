#ifndef Rezerwacjah
#define Rezerwacjah

#include <iostream>
using namespace std;

class Rezerwacja {
public:
	int numer;
	int ID_ksiazki;
	time_t od_kiedy;
	time_t do_kiedy;

	static void Rezerwuj();
	static void Anuluj_rezerwacje();
};

#endif // !Rezerwacjah