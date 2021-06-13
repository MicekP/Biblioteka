#include "Wypozyczenie.h"

void Wypozyczenie::wypozycz() {
    cout << "Jaka ksiazke chce wypozyczyc?: " << endl;
    Ksiazka::Wypisz_ksia();
    int wybor;
    cin >> wybor;
    if (Ksiazka::Czy_wolna(wybor) == false) {
        cout << "Nie ma egzemplarzy tej ksiazki" << endl;
        system("PAUSE");
    }
    else {
        Ksiazka* K = Ksiazka::Zwroc(wybor);
        ktora_K = K;
        K->L_wolnych_egz = K->L_wolnych_egz - 1;
        od_kiedy = time(NULL);
        cout << "Ile tygodni?" << endl;
        int tydzien;
        cin >> tydzien;
        int t_sekundy = tydzien * 7 * 24 * 60 * 60;
        do_kiedy = do_kiedy + t_sekundy;
        zwrocona = false;
    }
}

void Wypozyczenie::Wypozycz_z_rezerwacja(Ksiazka* K) {
    ktora_K = K;
    K->L_wolnych_egz = K->L_wolnych_egz - 1;
    od_kiedy = time(NULL);
    cout << "Ile tygodni?" << endl;
    int tydzien;
    cin >> tydzien;
    int t_sekundy = tydzien * 7 * 24 * 60 * 60;
    do_kiedy = do_kiedy + t_sekundy;
    zwrocona = false;
}

void Wypozyczenie::Zwrot() {
    zwrocona = true;
    ktora_K->L_wolnych_egz = ktora_K->L_wolnych_egz + 1;
}
