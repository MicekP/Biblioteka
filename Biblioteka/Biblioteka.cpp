// Biblioteka.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>
#include <string>
#include "Aktorzy.h"
#include "Ksiazka.h"



void Zaloguj_obsluga()
{
    int U;

    cout << "Obsluga - dostepne dzialania:" << endl << "1. Dodaj nowa ksiazke" << endl << "2. Dodaj egz istniejacej ksiazki po tytule i autorze" << endl <<
        "3. Dodaj egz istniejacej ksiazki po ID" << endl << "4. Usun egz istniejacej ksiazki po tytule i autorze" << endl <<
        "5. Usun egz istniejacej ksiazki po ID" << endl << "7. Wypisz liste ksiazek"<< endl << "6. Wypozyczenie ksiazki czytelnikowi" << endl << "0. //Wyloguj//" << endl;
    cin >> U;

    switch (U)
    {
    case 0:
        break;
    case 1:
        Ksiazka::Dodaj();
        Zaloguj_obsluga();
        break;
    case 2:
        Ksiazka::Dodaj_egzemplarz();
        Zaloguj_obsluga();
        break;
    case 3:
        Ksiazka::Dodaj_egzemplarz_id();
        Zaloguj_obsluga();
        break;
    case 4:
        Ksiazka::Usun_egzemplarz();
        Zaloguj_obsluga();
        break;
    case 5:
        Ksiazka::Usun_egzemplarz_id();
        Zaloguj_obsluga();
        break;
    case 6:
        //Wypozyczanie
        break;
    case 7:
        Ksiazka::Wypisz_ksia();
        Zaloguj_obsluga();
        break;
    default:
        break;
    }
}

void Zaloguj_czytelnik()
{
    int U;

    cout << "Czytelnik - dostepne dzialania:" << endl << "1. Rezerwuj ksiazke" << endl << "2. Anuluj rezerwacje" << endl <<
        "3. Sprawdz rezerwacje" << endl << "0. //Wyloguj//" << endl;
    cin >> U;

    switch (U)
    {
    case 0:
        break;
    case 1:
        //rezerwacja
        Zaloguj_czytelnik();
        break;
    case 2:
        //anuluj rezerwacje
        Zaloguj_czytelnik();
        break;
    case 3:
        //sprawdz rezerwacje
        Zaloguj_czytelnik();
        break;
    default:
        break;

    }
}

void Zaloguj_wybor()
{
    int U;

    cout << "Logowanie jako:" << endl << "1. Obsluga" << endl << "2. Czytelnik" << endl << "3. Nowy czytelnik - tworzenie karty" << endl << "0. Powrot" << endl;
    cin >> U;

    switch (U)
    {
    case 0:
        break;
    case 1:
        Zaloguj_obsluga();
        break;
    case 2:
        Zaloguj_czytelnik();
        break;
    case 3:
        //Czytelnik_nowy_karta();
        break;
    default:
        break;
    }
}

void Menu()
{
    

    int O;

    cout << "Wybiez opcje wpisujac numer:" << endl << "1. Dodaj pracownika" << endl << "2. //Logowanie//" << endl << "3. Wypisz pracownikow" << endl << "4. Wypisz czytelnikow" << endl << "0. Zakoncz" << endl;
    cin >> O;

    switch (O)
    {
    case 0:
        break;
    case 1:
        Obsluga::Dodaj_obsluga();
        Menu();
        break;
    case 2:
        Zaloguj_wybor();
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
    default:
        break;
    }
}



int main()
{
    Menu();
    
    cout << endl;
    Ksiazka* K = Ksiazka::Zwroc(0);
    cout << K->Tytul;

    K->Tytul = "BBB";

    Ksiazka::Wypisz_ksia();
    
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
