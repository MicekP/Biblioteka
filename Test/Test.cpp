#include "pch.h"
#include "CppUnitTest.h"
#include "../Biblioteka/Aktorzy.h"
#include "../Biblioteka/Ksiazka.h"
#include "../Biblioteka/Ksiazka.cpp"

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

		TEST_METHOD(TestKarta)
		{
			Karta Test("Test", "Jan Kowalski", 1);
			string testt = "Test";
			string testa = "Jan Kowalski";
			int testl = 1;

			Assert::AreEqual(Test.wolneID, testt);
			Assert::AreEqual(Test.licznik, testa);
		}
		
		TEST_METHOD(TestRezerwacja)
		{
			Rezerwacja Test("Test", "Adam Nowacki", 1);
			string testt = "Test";
			string testa = "Adam Nowacki";
			int testl = 1;

			Assert::AreEqual(Test.Od_kiedy, testt);
			Assert::AreEqual(Test.Do_kiedy, testa);

		}

		TEST_METHOD(TestWypozyczenie)
		{
			Wypozyczenie Test("Test", "Janusz Kowal", 1);
			string testt = "Test";
			string testa = "Janusz Kowal";
			int testl = 1;

			Assert::AreEqual(Test.Od_kiedy, testt);
			Assert::AreEqual(Test.Do_kiedy, testa);
			Assert::AreEqual(Test.zwrocona, testl);
			
		}
	};
}
