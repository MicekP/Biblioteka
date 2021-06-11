#ifndef Wypozyczenieh
#define Wypozyczenieh

#include <iostream>
using namespace std;

class Wypozyczenie {
public:
	time_t Od_kiedy;
	time_t Do_kiedy;
	bool zwrocona;

	static void Wypozyczenie_rezerwacji();
	static void Wypozyczenie_bez_rezerwacji();
	//int Zwrot();						//idea byla taka ze zwraca kare, ale to chyba nie ma sensu, chyba ze bedzie gdzies zapisywane, moze po prostu wyswietlic "kara taka i taka" i elo
	//void Nalicz_kare();					//tutaj w sumie mogloby byc wypisana jaka kara, albo w ogole to usunac, bo ta funkcja sie nie przyda inaczej niz do uzycia w zwrot
};

#endif // !Wypozyczenieh