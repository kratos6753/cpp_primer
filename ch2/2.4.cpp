#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"

TEST_CASE("test")
{
    unsigned u = 10, u2 = 42;
    int i = 10, i2 = 42;

    CHECK(u2 - u == 32);
    CHECK(u - u2 == -32); // here -32 is converted to unsigned equivalent before comparing
    CHECK(i2 - i == 32);
    CHECK(i - i2 == -32);
    CHECK(i - u == 0);
    CHECK(u - i == 0);
}