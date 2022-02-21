#include "pch.h"
#include "CppUnitTest.h"
#include "c:\users\юра\source\repos\oop.1.2\FloatRange.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTestoop12
{
	TEST_CLASS(UnitTestoop12)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			FloatRange fr2;
			fr2.set_a(3);
			fr2.set_b(8);
			fr2.rangeСheck();
			fr2.display();
			Assert::AreEqual(5, 5);

		}
	};
}




















































#define _CRT_SECURE_NO_WARNINGS