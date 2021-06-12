#include "pch.h"
#include "CppUnitTest.h"
#include "../Biblioteka/Aktorzy.h"

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

		}
	};
}