#define CATCH_CONFIG_MAIN

#include <catch2/catch.hpp>
#include <sapien/lib.hpp>

TEST_CASE("Quick check", "[main]") {
  auto val = sapien::greeting();
  REQUIRE(val == 42);
}

TEST_CASE("Fail", "[main]") {
  auto val = sapien::greeting();
  REQUIRE(val == 0);
}
