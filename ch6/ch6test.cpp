#define CATCH_CONFIG_MAIN
#include "../catch.hpp"
#include "ch6.h"

TEST_CASE("bisectionMethod")
{
    int i;
    double c = -5;
    double d = 0;
    i = bisectionMethod(c, d, 0.0001, 1);
    cout << "Function A: Iterations: " << i
         << " A: " << c
         << " B: " << d;
    REQUIRE(true);
}
