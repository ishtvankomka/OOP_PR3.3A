#define CATCH_CONFIG_MAIN
#include "catch.h"
#include "Fraction.cpp"
#include "Fraction.hpp"
#include "Fraction_Descendant_open.cpp"
#include "Fraction_Descendant_open.hpp"
TEST_CASE( "Arguments initialized") {
    
    Fraction_Descendant_open testing1;
    REQUIRE( toNumber("99") == 99);
    REQUIRE( toNumber("0.1") == 0.1);
}
