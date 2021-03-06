#include "Aktorzy.h"

Czytelnik tab_czyt[10];
int Czytelnik::licznik = 0;


void Czytelnik::Wypisz()
{
    for (int i = 0; i < 10; i++)
    {
        if (tab_czyt[i].Imie != "X")
            cout << i << ". " << tab_czyt[i].GetImie() << " " << tab_czyt[i].GetNazwisko() << endl;
        else
            break;
    }
}

void Czytelnik::Dodaj_czytelnik()
{
    string x;
    string y;

    cout << "Podaj Imie Czytelnika" << endl;
    cin >> x;
    cout << "Podaj Nazwisko Czytelnika" << endl;
    cin >> y;

    if (licznik < 10)
    {
        tab_czyt[licznik] = Czytelnik(x, y);
        tab_czyt[licznik].Karta_czytelnika = Karta::Utworz();

        tab_czyt[licznik].Karta_czytelnika->wypisz();
        Licznik_add();
    }
    else {
        cout << "ERROR: MAKSYMALNA LICZBA UZYTOWNIKOW" << endl;
        system("PAUSE");
    }


}

void Czytelnik::Dodaj_czytelnik(string x, string y)
{
    if (licznik < 10)
    {
        tab_czyt[licznik] = Czytelnik(x, y);
        tab_czyt[licznik].Karta_czytelnika = Karta::Utworz();

        tab_czyt[licznik].Karta_czytelnika->wypisz();
        Licznik_add();
    }
}

Czytelnik* Czytelnik::Zwroc(int i){
    return &tab_czyt[i];
}

bool Czytelnik::Czy_istnieje(int i) {
    if (i >= 0 && i < 10) {
        if (tab_czyt[i].Imie == "X") {
            return false;
        }
        else {
            return true;
        }
    }
}


Obsluga tab_obs[10];
int Obsluga::licznik = 0;

void Obsluga::Dodaj_obsluga()
{
    string x;
    string y;

    cout << "Podaj Imie Pracownika" << endl;
    cin >> x;
    cout << "Podaj Nazwisko Pracownika" << endl;
    cin >> y;

    if (licznik < 10)
    {
        tab_obs[licznik] = Obsluga(x, y);

        Licznik_add();
    }
}

void Obsluga::Dodaj_obsluga(string x, string y) {
    if (licznik < 10)
    {
        tab_obs[licznik] = Obsluga(x, y);

        Licznik_add();
    }
    else {
        cout << "ERROR: pelna tablica pracownikow" << endl;
        system("PAUSE");
    }
}

void Obsluga::Wypisz()
{
    for (int i = 0; i < 10; i++)
    {
        if (tab_obs[i].Imie != "X")
            cout << i << ". " << tab_obs[i].GetImie() << " " << tab_obs[i].GetNazwisko() << endl;
        else
            break;
    }
}

bool Obsluga::Czy_istnieje(int i) {
    if (i >= 0 && i < 10) {
        if (tab_obs[i].Imie == "X") return false;
        else return true;
    }
    return false;
}

Obsluga* Obsluga::Zwroc(int i) {
    return &tab_obs[i];
}



// Uruchomienie programu: Ctrl + F5 lub menu Debugowanie > Uruchom bez debugowania
// Debugowanie programu: F5 lub menu Debugowanie > Rozpocznij debugowanie

// Porady dotycz??ce rozpoczynania pracy:
//   1. U??yj okna Eksploratora rozwi??za??, aby doda?? pliki i zarz??dza?? nimi
//   2. U??yj okna programu Team Explorer, aby nawi??za?? po????czenie z kontrol?? ??r??d??a
//   3. U??yj okna Dane wyj??ciowe, aby sprawdzi?? dane wyj??ciowe kompilacji i inne komunikaty
//   4. U??yj okna Lista b????d??w, aby zobaczy?? b????dy
//   5. Wybierz pozycj?? Projekt > Dodaj nowy element, aby utworzy?? nowe pliki kodu, lub wybierz pozycj?? Projekt > Dodaj istniej??cy element, aby doda?? istniej??ce pliku kodu do projektu
//   6. Aby w przysz??o??ci ponownie otworzy?? ten projekt, przejd?? do pozycji Plik > Otw??rz > Projekt i wybierz plik sln
