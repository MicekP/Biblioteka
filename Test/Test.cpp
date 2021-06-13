#include "pch.h"
#include "CppUnitTest.h"
#include "../Biblioteka/Aktorzy.h"
#include "../Biblioteka/Ksiazka.h"
#include "../Biblioteka/Ksiazka.cpp"
#include "../Biblioteka/Karta.h"
#include "../Biblioteka/Rezerwacja.h"
#include "../Biblioteka/Wypozyczenie.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace Test
{
	TEST_CLASS(Test)
	{
	public:
		
		TEST_METHOD(TestCzytelnik)
		{
			Czytelnik Test("Jan", "Kowalski");
			string testi = "Jan";
			string testn = "Kowalski";

			Assert::AreEqual(Test.Imie, testi);
			Assert::AreEqual(Test.Nazwisko, testn);
		}

		TEST_METHOD(TestObsluga)
		{
			Obsluga Test("Adam", "Nowak");
			string testi = "Adam";
			string testn = "Nowak";

			Assert::AreEqual(Test.Imie, testi);
			Assert::AreEqual(Test.Nazwisko, testn);
		}
		
		TEST_METHOD(TestKsiazka)
		{
			Ksiazka Test("Test", "Jan Kowalski", 1);
			string testt = "Test";
			string testa = "Jan Kowalski";
			int testl = 1;

			Assert::AreEqual(Test.Tytul, testt);
			Assert::AreEqual(Test.Autor, testa);
			Assert::AreEqual(Test.L_egz, testl);
		}

		TEST_METHOD(TestWypozyczenie)
		{
			Wypozyczenie Test;
			time_t Od = 0;
			time_t Do = 0;
			bool zw = false;

			
			Assert::AreEqual(Test.od_kiedy, Od);
			Assert::AreEqual(Test.do_kiedy, Do);
			Assert::AreEqual(Test.zwrocona, zw);
			
		}

		TEST_METHOD(TestRezerwacja)
		{
			Rezerwacja Test;
			time_t Od = 0;
			time_t Do = 0;
			int n = 0;

			Assert::AreEqual(Test.od_kiedy, Od);
			Assert::AreEqual(Test.do_kiedy, Do);
			Assert::AreEqual(Test.numer, n);
		}
	};
}
