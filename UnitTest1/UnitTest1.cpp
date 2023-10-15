#include "pch.h"
#include "CppUnitTest.h"
#include "../labor54/labor54.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;
namespace UnitTest54 {
    TEST_CLASS(UnitTest54) {
public:    TEST_METHOD(TestMethod1) {
    for (int N = 1; N <= 10; ++N) {
        double res1 = sumOnDescentDecreasing(N);
        double res2 = sumOnDescentIncreasing(N);       
        double res3 = sumOnAscentDecreasing(N);
        double res4 = sumOnAscentIncreasing(N);
        double res5 = sumIterative(N);
        // Використовуємо Assert::AreEqual для порівняння результатів
        Assert::AreEqual(res1, res5, 1e-9);             Assert::AreEqual(res2, res5, 1e-9);
        Assert::AreEqual(res3, res5, 1e-9);              Assert::AreEqual(res4, res5, 1e-9);
    }
}
    };
}