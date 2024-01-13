#include "pch.h"
#include "CppUnitTest.h"
#include "../calc/funkcje.cpp"

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
			double expected = 1;
			double testResult = ex(9, 1);

			Assert::AreEqual(expected, testResult);
		}
		TEST_METHOD(TestMethod3) {
			double list [9] =  { 1, 4, 5, 2, 7, 7, 8, 3, 2 };
			int size = 9;
			double expected = 2.4037008503093;
			double testResult = sd(list, 9);
			Assert::AreEqual(expected, testResult);
		}
		TEST_METHOD(TestMethod4) {
			double list[9] = { 1, 4, 5, 2, 7, 7, 8, 3, 2 };
			int size = 9;
			double expected = 4;
			double testResult = fmed(list, 9);
			Assert::AreEqual(expected, testResult);
		}
		TEST_METHOD(TestMethod5) {
			double list[9] = { 1, 4, 5, 2, 7, 7, 8, 3, 2 };
			int size = 9;
			double expVal[9] = { 1, 2, 2, 3, 4, 5, 7, 7, 8 };
			double* expected = expVal;
			double* testResult = sort(list, 9);
			Assert::AreEqual(expected, testResult);
		}
	};
}
