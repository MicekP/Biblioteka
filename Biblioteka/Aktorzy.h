#ifndef Aktorzyh
#define Aktorzyh

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

#endif // !Aktorzyh