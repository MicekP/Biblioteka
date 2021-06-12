#include <iostream>
#include "Karta.h"

#ifndef Aktorzyh
#define Aktorzyh

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
    
    Karta* Karta_czytelnika = NULL;

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
    static void Dodaj_czytelnik(string, string); //od razu podajemy imie i nazwisko
    static Czytelnik* Zwroc(int);
    static void Wypisz();
    static bool Czy_istnieje(int);
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


#endif // !Aktorzyh