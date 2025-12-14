#include <catch_amalgamated.hpp>
#include "project_euler_001.hpp"

TEST_CASE("Project Euler 001", "[project_euler_001]") {
    REQUIRE(project_euler_001(10) == 23);
    REQUIRE(project_euler_001(1000) == 233168);
}

// end

