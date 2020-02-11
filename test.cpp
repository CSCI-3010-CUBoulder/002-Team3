#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file


#include "catch.hpp"
#include "UtilityFunctions.h"

// Your tests go here
// Each TEST_CASE should test one function
TEST_CASE("factorial test", "[fact]") {
    REQUIRE(Factorial(1) == 1);
    REQUIRE(Factorial(4) == 24);
}


// Each SECTION should test one aspect of that function
