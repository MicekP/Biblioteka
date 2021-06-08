// Biblioteka.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>
#include"Aktorzy.cpp"

Czytelnik tab_czyt[3];
int Czytelnik::licznik = 0;

Obsluga tab_obs[3];
int Obsluga::licznik = 0;

void Czytelnik::Wypisz()
{
    for (int i = 0; i < 3; i++)
    {
        if (tab_czyt[i].Imie != "X")
            cout << tab_czyt[i].GetImie() << " " << tab_czyt[i].GetNazwisko() << endl;
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

    if (licznik < 3)
    {
        tab_czyt[licznik].Imie = x;
        tab_czyt[licznik].Nazwisko = y;

        Licznik_add();
    }
}

void Obsluga::Dodaj_obsluga()
{
    string x;
    string y;

    cout << "Podaj Imie Pracownika" << endl;
    cin >> x;
    cout << "Podaj Nazwisko Pracownika" << endl;
    cin >> y;

    if (licznik < 3)
    {
        tab_obs[licznik].Imie = x;
        tab_obs[licznik].Nazwisko = y;

        Licznik_add();
    }
}

void Obsluga::Wypisz()
{
    for (int i = 0; i < 3; i++)
    {
        if (tab_obs[i].Imie != "X")
            cout << tab_obs[i].GetImie() << " " << tab_obs[i].GetNazwisko() << endl;
        else
            break;
    }
}

void Menu()
{

    int X;

    cout << "Wybiez opcje wpisujac numer:" << endl << "1. Dodaj pracownika" << endl << "2. Dodaj czytelnika" << endl << "3. Wypisz pracownikow" << endl << "4. Wypisz czytelnikow" << endl << "5. Zakoncz" << endl;
    cin >> X;

    switch (X)
    {
    case 1:
        Obsluga::Dodaj_obsluga();
        Menu();
    case 2:
        Czytelnik::Dodaj_czytelnik();
        Menu();
    case 3:
        Obsluga::Wypisz();
        Menu();
    case 4:
        Czytelnik::Wypisz();
        Menu();
    case 5:
        break;
    default:
        break;
    }
}

int main()
{
	Menu();
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
