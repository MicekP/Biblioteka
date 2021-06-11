// Biblioteka.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>
#include "Aktorzy.h"


void Menu()
{
    system("cls");

    int O;

    cout << "Wybiez opcje wpisujac numer:" << endl << "1. Dodaj pracownika" << endl << "2. Dodaj czytelnika" << endl << "3. Wypisz pracownikow" << endl << "4. Wypisz czytelnikow" << endl << "5. Zakoncz" << endl;
    cin >> O;

    switch (O)
    {
    case 1:
        Obsluga::Dodaj_obsluga();
        Menu();
        break;
    case 2:
        Czytelnik::Dodaj_czytelnik();
        Menu();
        break;
    case 3:
        Obsluga::Wypisz();
        Menu();
        break;
    case 4:
        Czytelnik::Wypisz();
        Menu();
        break;
    case 5:
        break;
    default:
        break;
    }
}

int main()
{
    Czytelnik::Dodaj_czytelnik("Piotr", "Micek"); // test dodawania czytelnikow
    Czytelnik::Wypisz();

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
