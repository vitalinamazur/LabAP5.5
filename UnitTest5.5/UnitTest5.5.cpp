#include "pch.h"
#include "CppUnitTest.h"  
#include "../LabAP5.5/LabAP5.5.cpp"    
using namespace Microsoft::VisualStudio::CppUnitTestFramework;


int countWays(int m, int x, int y, int z);

namespace UnitTest
{
    TEST_CLASS(UnitTest)
    {
    public:

        TEST_METHOD(TestCountWays1)
        {
            int m = 5, x = 1, y = 2, z = 3;
            int result = countWays(m, x, y, z);
            int expected = 13;  
            Assert::AreEqual(expected, result);
        }

        TEST_METHOD(TestCountWays2)
        {
            int m = 10, x = 2, y = 5, z = 3;
            int result = countWays(m, x, y, z);
            int expected = 14;  
            Assert::AreEqual(expected, result);
        }

        TEST_METHOD(TestCountWays3)
        {
            int m = 0, x = 1, y = 2, z = 3;
            int result = countWays(m, x, y, z);
            int expected = 1; 
            Assert::AreEqual(expected, result);
        }

        TEST_METHOD(TestCountWays4)
        {
            int m = 1, x = 2, y = 3, z = 4;
            int result = countWays(m, x, y, z);
            int expected = 0; 
            Assert::AreEqual(expected, result);
        }

        TEST_METHOD(TestCountWays5)
        {
            int m = 7, x = 3, y = 4, z = 5;
            int result = countWays(m, x, y, z);
            int expected = 2;  
            Assert::AreEqual(expected, result);
        }
    };
}
