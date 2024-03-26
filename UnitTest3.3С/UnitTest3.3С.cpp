#include "pch.h"
#include "CppUnitTest.h"
#include "../OOP3.3C/LongLong.h"
#include "../OOP3.3C/LongLong.cpp"
#include "../OOP3.3C/Object.cpp"
#include "../OOP3.3C/Object.h"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest33С
{
	TEST_CLASS(UnitTest33С)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			LongLong a(5, 10);
			LongLong b(5, 10);
			LongLong c(7, 15);

			// Act & Assert
			Assert::IsTrue(a == b); // Очікується, що a рівне b
			Assert::IsFalse(a == c);
		}
	};
}
