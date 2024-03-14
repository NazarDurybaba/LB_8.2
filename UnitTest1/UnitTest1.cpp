#include "pch.h"
#include "CppUnitTest.h"
#include "../LB_8.2.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(RemoveBracketsTest)
		{
			string str = "hello (abc) world";
			string result = RemoveBrackets(str);
			Assert::AreEqual(string("hello  world"), result);
		}

	};
}
