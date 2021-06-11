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
    }


}

void Czytelnik::Dodaj_czytelnik(string x, string y)
{
    if (licznik < 10)
    {
        tab_czyt[licznik] = Czytelnik(x, y);

        Licznik_add();
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

void Obsluga::Wypisz()
{
    for (int i = 0; i < 10; i++)
    {
        if (tab_obs[i].Imie != "X")
            cout << tab_obs[i].GetImie() << " " << tab_obs[i].GetNazwisko() << endl;
        else
            break;
    }
}


// Uruchomienie programu: Ctrl + F5 lub menu Debugowanie > Uruchom bez debugowania
// Debugowanie programu: F5 lub menu Debugowanie > Rozpocznij debugowanie

// Porady dotyczące rozpoczynania pracy:
//   1. Użyj okna Eksploratora rozwiązań, aby dodać pliki i zarządzać nimi
//   2. Użyj okna programu Team Explorer, aby nawiązać połączenie z kontrolą źródła
//   3. Użyj okna Dane wyjściowe, aby sprawdzić dane wyjściowe kompilacji i inne komunikaty
//   4. Użyj okna Lista błędów, aby zobaczyć błędy
//   5. Wybierz pozycję Projekt > Dodaj nowy element, aby utworzyć nowe pliki kodu, lub wybierz pozycję Projekt > Dodaj istniejący element, aby dodać istniejące pliku kodu do projektu
//   6. Aby w przyszłości ponownie otworzyć ten projekt, przejdź do pozycji Plik > Otwórz > Projekt i wybierz plik sln
