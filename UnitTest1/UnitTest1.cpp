#include "pch.h"
#include "CppUnitTest.h"
#include "C:\Users\LEGION\source\repos\Lab_6.32\Lab_6.32\Source.cpp"  

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int t;
			const int n = 10;
			int a[n] = { 4, 23, 78, 9, -57, 34, 96, 6, -2, 1 };
			t = Sum(a, n, 0);
			Assert::AreEqual(-24, t);
		}
	};
}
