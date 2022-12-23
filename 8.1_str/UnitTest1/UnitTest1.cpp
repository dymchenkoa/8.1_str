#include "pch.h"
#include "CppUnitTest.h"
#include "../8.1_str/Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
    TEST_CLASS(UnitTest1)
    {
    public:

        TEST_METHOD(TestMethod1)
        {
            string text = "hellowhile hello";
            int actual = IsOrNot(text);
            Assert::AreEqual(1, actual);
        }
    };
}