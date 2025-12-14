#include <catch_amalgamated.hpp>
#include "project_euler_006.hpp"

TEST_CASE("Project Euler 006", "[project_euler_006]") {
  REQUIRE(project_euler_006(10) == 2640);
  REQUIRE(project_euler_006(100) == 25164150);
}

// end

