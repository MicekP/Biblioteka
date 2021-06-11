#include "Ksiazka.h"
#include <string>

Ksiazka tab_ksia[10];
int Ksiazka::licznik = 0;


void Ksiazka::Dodaj()
{
      string X;
      string Y;
      int Z;

      string NO;
      getline(cin, NO);
  
      cout << "Podaj tytul:" << endl;
      getline(cin, X);

      cout << "Podaj autora:" << endl;
      getline(cin, Y);

      cout << "Podaj ilosc egzemplarzy do dodania:" << endl;
      cin >> Z;
      
      if (licznik < 10)
      {
          tab_ksia[licznik] = Ksiazka(X, Y, Z);
          Licznik_add();
      }
}

void Ksiazka::Dodaj_egzemplarz_id()
{
    int X;
    int Y;

    cout << "Podaj ID ksiazki:" << endl;
	cin >> X;
    cout << "Podaj ilosc egzemplarzy do dodania:" << endl;
    cin >> Y;
  
    for(int i = 0; i < 10; i++)
    {
        if(tab_ksia[i].ID == X)
        {
            tab_ksia[i].L_egz += Y;
            tab_ksia[i].L_wolnych_egz += Y;
            return;
        }
        else
        {
            cout << "Brak ksiazki o podanym ID" << endl;
            return;
        }
    }
}

void Ksiazka::Dodaj_egzemplarz()
{
    string X;
    string Y;
    int Z;

    string NO;
    getline(cin, NO);

    cout << "Podaj tytul:" << endl;
    getline(cin, X);

    cout << "Podaj autora:" << endl;
    getline(cin, Y);

    cout << "Podaj ilosc egzemplarzy do dodania:" << endl;
    cin >> Z;

    for (int i = 0; i < 10; i++)
    {
        if (tab_ksia[i].Tytul == X && tab_ksia[i].Autor == Y)
        {
            tab_ksia[i].L_egz += Z;
            tab_ksia[i].L_wolnych_egz += Z;
            return;
        }
        else
        {
            cout << "Brak ksiazki o podanym tytule i/lub autorze" << endl;
            return;
        }
    }
    
}

void Ksiazka::Usun_egzemplarz_id()
{
    int X;
    int Y;

    cout << "Podaj ID ksiazki:" << endl;
    cin >> X;
    cout << "Podaj ilosc egzemplarzy do usuniecia:" << endl;
    cin >> Y;

    for (int i = 0; i < 10; i++)
    {
        if (tab_ksia[i].ID == X)
        {
            tab_ksia[i].L_egz -= Y;
            tab_ksia[i].L_wolnych_egz -= Y;
            
            if (tab_ksia[i].L_egz <= 0)
            {
                tab_ksia[i].~Ksiazka();
            }
            return;
        }
        else
        {
            cout << "Brak ksiazki o podanym ID" << endl;
            return;
        }
    }
}

void Ksiazka::Usun_egzemplarz()
{
    string X;
    string Y;
    int Z;

    string NO;
    getline(cin, NO);

    cout << "Podaj tytul:" << endl;
    getline(cin, X);

    cout << "Podaj autora:" << endl;
    getline(cin, Y);

    cout << "Podaj ilosc egzemplarzy do usuniecia:" << endl;
    cin >> Z;

    for (int i = 0; i < 10; i++)
    {
        if (tab_ksia[i].Tytul == X && tab_ksia[i].Autor == Y)
        {
            tab_ksia[i].L_egz -= Z;
            tab_ksia[i].L_wolnych_egz -= Z;

            if (tab_ksia[i].L_egz <= 0)
            {
                tab_ksia[i].~Ksiazka();
            }
            return;
        }
        else
        {
            cout << "Brak ksiazki o podanym tytule i/lub autorze" << endl;
            return;
        }
    }
}

void Ksiazka::Wypisz_ksia()
{
    for (int i = 0; i < 10; i++)
    {
        if (tab_ksia[i].Tytul != "X")
            cout << tab_ksia[i].ID << " " << tab_ksia[i].Tytul << " " << tab_ksia[i].Autor << endl;
        else
            break;
    }
}

Ksiazka* Ksiazka::Zwroc(int i)
{
    return &tab_ksia[i];
}