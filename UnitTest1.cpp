#include "pch.h"
#include "CppUnitTest.h"
#include "../Kalkulator/funkcje.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			double expected = 1;
			double testVal = std::exp(1);
			double testResult = ln(testVal);

			Assert::AreEqual(expected, testResult);
		}
		TEST_METHOD(TestMethod2) {

		};
	};
}
