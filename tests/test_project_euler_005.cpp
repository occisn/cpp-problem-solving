#include <catch_amalgamated.hpp>
#include "project_euler_005.hpp"

TEST_CASE("Project Euler 005", "[project_euler_005]") {
  REQUIRE(project_euler_005(10) == 2520);
  REQUIRE(project_euler_005(20) == 232792560);
}

// end

