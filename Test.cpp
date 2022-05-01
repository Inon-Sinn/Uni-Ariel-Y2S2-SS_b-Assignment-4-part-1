#include "doctest.h"

TEST_CASE("tests")
{
    for (int i=0; i <= 20; i++)
    {
        CHECK_EQ(2*i,i+i); // lmao..
    }
}