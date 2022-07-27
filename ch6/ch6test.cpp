#define CATCH_CONFIG_MAIN
#include "../catch.hpp"
#include "ch6.h"

TEST_CASE("bisectionMethod")
{
    int i;
    double a = 0;
    double b = 2;
    // function A, positive roots
    i = bisectionMethod(a, b, 0.0001, 0);
    cout << "Function A: Iterations: " << i
         << " A: " << a
         << " B: " << b << endl;
    a = 2;
    b = 5;
    i = bisectionMethod(a, b, 0.0001, 0);
    cout << "Function A: Iterations: " << i
         << " A: " << a
         << " B: " << b << endl;
    // function B, negative roots
    a = -5;
    b = 0;
    i = bisectionMethod(a, b, 0.0001, 1);
    cout << "Function B: Iterations: " << i
         << " A: " << a
         << " B: " << b << endl;
    // function C, first positive root
    a = 1;
    b = 2;
    i = bisectionMethod(a, b, 0.0001, 2);
    cout << "Function C: Iterations: " << i
         << " A: " << a
         << " B: " << b << endl;
    REQUIRE(true);
}
