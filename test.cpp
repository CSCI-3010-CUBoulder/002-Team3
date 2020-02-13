#define CATCH_CONFIG_MAIN

#include "catch.hpp"
#include "UtilityFunctions.h"

TEST_CASE("IsPositive test", "[IsPositive]") {
	REQUIRE(IsPositive(5));
	REQUIRE(!IsPositive(-3));
}

TEST_CASE("Factorial test", "[Factoril]") {
	REQUIRE(Factorial(3) == 6);
}