
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

// Uruchomienie programu: Ctrl + F5 lub menu Debugowanie > Uruchom bez debugowania
// Debugowanie programu: F5 lub menu Debugowanie > Rozpocznij debugowanie

// Porady dotycz�ce rozpoczynania pracy:
//   1. U�yj okna Eksploratora rozwi�za�, aby doda� pliki i zarz�dza� nimi
//   2. U�yj okna programu Team Explorer, aby nawi�za� po��czenie z kontrol� �r�d�a
//   3. U�yj okna Dane wyj�ciowe, aby sprawdzi� dane wyj�ciowe kompilacji i inne komunikaty
//   4. U�yj okna Lista b��d�w, aby zobaczy� b��dy
//   5. Wybierz pozycj� Projekt > Dodaj nowy element, aby utworzy� nowe pliki kodu, lub wybierz pozycj� Projekt > Dodaj istniej�cy element, aby doda� istniej�ce pliku kodu do projektu
//   6. Aby w przysz�o�ci ponownie otworzy� ten projekt, przejd� do pozycji Plik > Otw�rz > Projekt i wybierz plik sln
