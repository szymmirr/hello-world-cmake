#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "main.h"

TEST_CASE("Succesful return", "[whatever]") {
	REQUIRE(main() == 0);
}

TEST_CASE("Unsuccesful return", "[whatever]") {
	REQUIRE_FALSE(main() == 1);
}
