// Biblioteka.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>
#include <string>
#include "Aktorzy.h"
#include "Ksiazka.h"
#include "Rezerwacja.h"

void Czytelnik_nowy_karta() {
    Czytelnik::Dodaj_czytelnik();

}

void Zaloguj_obsluga()
{
    int U;

    do {
        cout << "Obsluga - dostepne dzialania:" << endl << "1. Dodaj nowa ksiazke" << endl << "2. Dodaj egz istniejacej ksiazki po tytule i autorze" << endl <<
            "3. Dodaj egz istniejacej ksiazki po ID" << endl << "4. Usun egz istniejacej ksiazki po tytule i autorze" << endl <<
            "5. Usun egz istniejacej ksiazki po ID" << endl << "7. Wypisz liste ksiazek" << endl << "6. Wypozyczenie ksiazki czytelnikowi" << endl << "0. //Wyloguj//" << endl;
        cin >> U;

        switch (U)
        {
        case 0:
            break;
        case 1:
            Ksiazka::Dodaj();
            break;
        case 2:
            Ksiazka::Dodaj_egzemplarz();
            break;
        case 3:
            Ksiazka::Dodaj_egzemplarz_id();
            break;
        case 4:
            Ksiazka::Usun_egzemplarz();
            break;
        case 5:
            Ksiazka::Usun_egzemplarz_id();
            break;
        case 6:
            //Wypozyczanie
            cout << "Ktory czytelnik chce wypozyczyc? " << endl << endl;
            Czytelnik::Wypisz();
            int wybor;
            cin >> wybor;
            cout << endl;
            if (Czytelnik::Czy_istnieje(wybor) == true) {
                Czytelnik* aktualny = Czytelnik::Zwroc(wybor);

            }
            else {
                cout << "Nie ma takiego uzytkownika!" << endl;
                system("PAUSE");
            }
            break;
        case 7:
            Ksiazka::Wypisz_ksia();
            break;
        default:
            break;
        }
    } while (U != 0);
}

void Zaloguj_czytelnik(int zalogowany)
{
    int U;
    int wybor;
    Czytelnik* aktualny = Czytelnik::Zwroc(zalogowany);
    cout << "Jestes zalogowany na " << aktualny->GetImie() << " " << aktualny->GetNazwisko() << endl << endl;

    do {
        cout << "Czytelnik - dostepne dzialania:" << endl << "1. Rezerwuj ksiazke" << endl << "2. Anuluj rezerwacje" << endl <<
            "3. Sprawdz rezerwacje" << endl << "0. //Wyloguj//" << endl;
        cin >> U;

        switch (U)
        {
        case 0:
            break;
        case 1:
            Ksiazka::Wypisz_ksia();            
                if (Ksiazka::Czy_sa_ksiazki() == true)
                {   
                    cout << "Ktora ksiazke chcesz zarezerwowac" << endl;
                    cin >> wybor;
                    if (Ksiazka::Czy_wolna(wybor) == true) {
                        aktualny->Karta_czytelnika->rozpocznij_rezerwacje(wybor);
                    }
                    else {
                        cout << "Nie ma wolnych egzemplarzy tej ksiazki" << endl;
                    }
                    system("PAUSE");
                }               
                else system("PAUSE");
            break;
        case 2:
            cout << "ktora rezerwacje chcesz anulowac?: " << endl;
            aktualny->Karta_czytelnika->Wypisz_rezerwacje();
            cout << endl << "podaj numer: ";
            cin >> wybor;
            aktualny->Karta_czytelnika->Anuluj_rezerwacje(wybor);
            break;
        case 3:            
            aktualny->Karta_czytelnika->Wypisz_rezerwacje();
            system("PAUSE");
            break;
        case 4:
            //sprawdz wypozyczenia
            break;
        default:
            break;
        }
    } while (U != 0);
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
        cout << "Na ktorego uzytkownika chcesz sie zalogowac?" << endl << endl;
        Czytelnik::Wypisz();
        cout << endl;
        int zalogowany;
        cin >> zalogowany;
        if (Czytelnik::Czy_istnieje(zalogowany) == true) {
        Zaloguj_czytelnik(zalogowany);
        }
        else {
            cout << "Nie ma takiego uzytkownika!" << endl;
            system("PAUSE");
        }
        break;
    case 3:
        Czytelnik::Dodaj_czytelnik();
        system("PAUSE");
        break;
    default:
        break;
    }
}

void Menu()
{
    int O;
    do {
    system("cls");
    
    cout << "Wybiez opcje wpisujac numer:" << endl << "1. Dodaj pracownika" << endl << "2. //Logowanie//" << endl << "3.  Wypisz czytelnikow " << endl << "4. Wypisz pracownikow" << endl << "0. Zakoncz" << endl;
    cin >> O;

    switch (O)
        {
        case 0:
            break;
        case 1:
            Obsluga::Dodaj_obsluga();
            break;
        case 2:
            Zaloguj_wybor();
            break;
        case 3:
            Czytelnik::Wypisz();
            system("PAUSE");
            break;
        case 4:
            Obsluga::Wypisz();
            system("PAUSE");
            break;
        default:
            break;
        }
    } while (O != 0);
}




int main()
{
    Czytelnik::Dodaj_czytelnik("Piotr", "Micek");
    Ksiazka::Dodaj("C++", "Ktostam", 5);
    Ksiazka::Dodaj("Visual", "Nikt", 1);
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
