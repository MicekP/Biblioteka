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
		
	};
}
