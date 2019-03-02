#include "stdafx.h"
#include "CppUnitTest.h"
#include "../calculator3/testheader.h"


using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace TestCalculator
{		
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int sum = printSum(10);
			Assert::AreEqual(55, sum);

		}

	};
}