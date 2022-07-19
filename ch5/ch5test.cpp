#define CATCH_CONFIG_MAIN
#include "../catch.hpp"
#include "ch5.h"

TEST_CASE("REGoldenRatio - testing n = 1, 5, and 10")
{
    double n1 = REGoldenRatio(1);
    double n5 = REGoldenRatio(5);
    double n10 = REGoldenRatio(10);
    cout << "n = 1 relative error: "
         << n1 << endl;
    cout << "n = 5 relative error: "
         << n5 << endl;
    cout << "n = 10 relative error: "
         << n10 << endl;
    REQUIRE(abs(n1 - 0.23606797) < 0.0000001);
    REQUIRE(abs(n5 - 0.0043052216) < 0.0000001);
    REQUIRE(abs(n10 - 0.000034922137) < 0.0000001);
}
