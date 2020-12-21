#define CATCH_CONFIG_MAIN

#include <catch2/catch.hpp>
#include <sapien/lib.hpp>

TEST_CASE("Quick check", "[main]") {
  auto val = sapien::greeting();
  REQUIRE(val == 42);
}

TEST_CASE("Hello check", "[main]") {
  auto val = sapien::say_hello();

  REQUIRE(val == "Hello");
}
