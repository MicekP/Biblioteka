// inz_op_balagan.cpp : Ten plik zawiera funkcjê „main”. W nim rozpoczyna siê i koñczy wykonywanie programu.
//

#include <iostream>
using namespace std;

class Osoba
{
private:

public:

    string Imie;
    string Nazwisko;
    string GetImie()
    {
        return Imie;
    }
    string GetNazwisko()
    {
        return Nazwisko;
    }
};

class Czytelnik : public Osoba
{
private:
    static int licznik;
public:
    static void Licznik_add()
    {
        licznik++;
    }

    Czytelnik()
    {
        Imie = "X";
        Nazwisko = "Y";
    }

    Czytelnik(string i, string n)
    {
        Imie = i;
        Nazwisko = n;
    }

    ~Czytelnik() {};

    static void Dodaj_czytelnik();

    static void Wypisz();
};

Czytelnik tab_czyt[3];
int Czytelnik::licznik = 0;

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

class Obsluga : public Osoba
{
private:
    static int licznik;
public:
    static void Licznik_add()
    {
        licznik++;
    }

    Obsluga()
    {
        Imie = "X";
        Nazwisko = "Y";
    }

    Obsluga(string i, string n)
    {
        Imie = i;
        Nazwisko = n;
    }

    ~Obsluga() {};

    static void Dodaj_obsluga();

    static void Wypisz();

};

Obsluga tab_obs[3];
int Obsluga::licznik = 0;

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

    cout << "Wybiez opcje:" << endl << "1. Dodaj pracownika" << endl << "2. Dodaj czytelnika" << endl << "3. Wypisz pracownikow" << endl << "4. Wypisz czytelnikow" << endl << "5. Zakoncz" << endl;
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

// Uruchomienie programu: Ctrl + F5 lub menu Debugowanie > Uruchom bez debugowania
// Debugowanie programu: F5 lub menu Debugowanie > Rozpocznij debugowanie

// Porady dotycz¹ce rozpoczynania pracy:
//   1. U¿yj okna Eksploratora rozwi¹zañ, aby dodaæ pliki i zarz¹dzaæ nimi
//   2. U¿yj okna programu Team Explorer, aby nawi¹zaæ po³¹czenie z kontrol¹ Ÿród³a
//   3. U¿yj okna Dane wyjœciowe, aby sprawdziæ dane wyjœciowe kompilacji i inne komunikaty
//   4. U¿yj okna Lista b³êdów, aby zobaczyæ b³êdy
//   5. Wybierz pozycjê Projekt > Dodaj nowy element, aby utworzyæ nowe pliki kodu, lub wybierz pozycjê Projekt > Dodaj istniej¹cy element, aby dodaæ istniej¹ce pliku kodu do projektu
//   6. Aby w przysz³oœci ponownie otworzyæ ten projekt, przejdŸ do pozycji Plik > Otwórz > Projekt i wybierz plik sln
