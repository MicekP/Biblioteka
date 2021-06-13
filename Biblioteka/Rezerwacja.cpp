#include "Rezerwacja.h"
#include "Ksiazka.h"
#include <time.h>

int Rezerwacja::wolny_numer = 1000;

void Rezerwacja::Rezerwuj(int wybor){
	
	Ksiazka *K = Ksiazka::Zwroc(wybor);
	ktora_K = K;
	K->L_wolnych_egz=K->L_wolnych_egz-1;
	od_kiedy = time(NULL);
	cout << "Ile tygodni rezerwowac?" << endl;
	int tydzien;
	cin >> tydzien;
	int t_sekundy = tydzien * 7 * 24 * 60 * 60;
	do_kiedy = do_kiedy + t_sekundy;
	numer = wolny_numer;
	wolny_numer++;
}


/*void Rezerwacja::Anuluj_rezerwacje() 
{

}
*/


