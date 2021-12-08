#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab6-2-iter/main.hpp"
#include "../Lab6-2-iter/main.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest61iter
{
	TEST_CLASS(UnitTest61iter)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			Assert::IsTrue(isOdd(1));
			Assert::IsFalse(isOdd(2));
		}
	};
}
