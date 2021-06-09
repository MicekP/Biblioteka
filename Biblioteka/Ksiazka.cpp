#include "Ksiazka.h"

Ksiazka tab_ksia[10];
int Ksiazka::licznik = 0;

void Dodaj()
{
      string X;
      string Y;
      int Z;
  
      cout << "Podaj tytul:" << endl;
      cin >> X;
      cout << "Podaj autora:" << endl;
      cin >> Y;
      cout << "Podaj ilosc egzemplarzy do dodania:" << endl;
      cin >> Z;
      
      if (licznik < 10)
      {
        tab_ksia[licznik] = Ksiazka(X, Y, Z);
        Licznik_add();
      }
      
}

void Usun()
{
  
}

void Dodaj_egzemplarz_id()
{
    int X;
    int Y;
  
    cout << "Podaj ID ksiazki:" << endl;
	cin >> X;
    cout << "Podaj ilosc egzemplarzy do dodania:" << endl;
    cin >> Y;
  
    for(int i; i < 10; i++)
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
void Dodaj_egzemplarz()
{
    string X;
    string Y;
    int Z;

    cout << "Podaj tytul ksiazki:" << endl;
    cin >> X;
    cout << "Podaj autora:" << endl;
    cin >> Y;
    cout << "Podaj ilosc egzemplarzy do dodania:" << endl;
    cin >> Z;

    for (int i; i < 10; i++)
    {
        if (tab_ksia[i].tytul == X && tab_ksia[i].autor == Y)
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
void Usun_egzemplarz_id()
{
    int X;
    int Y;

    cout << "Podaj ID ksiazki:" << endl;
    cin >> X;
    cout << "Podaj ilosc egzemplarzy do usuniecia:" << endl;
    cin >> Y;

    for (int i; i < 10; i++)
    {
        if (tab_ksia[i].ID == X)
        {
            tab_ksia[i].L_egz -= Y;
            tab_ksia[i].L_wolnych_egz -= Y;
            
            if (tab_ksia[i].L_egz <= 0)
            {
                //Usun();
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
void Usun_egzemplarz()
{
    string X;
    string Y;
    int Z;

    cout << "Podaj tytul ksiazki:" << endl;
    cin >> X;
    cout << "Podaj autora:" << endl;
    cin >> Y;
    cout << "Podaj ilosc egzemplarzy do usuniecia:" << endl;
    cin >> Z;

    for (int i; i < 10; i++)
    {
        if (tab_ksia[i].tytul == X && tab_ksia[i].autor == Y)
        {
            tab_ksia[i].L_egz -= Z;
            tab_ksia[i].L_wolnych_egz -= Z;

            if (tab_ksia[i].L_egz <= 0)
            {
                //Usun();
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
