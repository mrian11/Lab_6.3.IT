#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab_6.3/LAB.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTestLab63IT
{
	TEST_CLASS(UnitTestLab63IT)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int a[] = { -5,3,8,6,-2,-1 };
			int n = 6;
			double p = Sum(a, n);
			Assert::AreEqual(p, 12.0);
		}
	};
}
