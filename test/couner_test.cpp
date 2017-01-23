#ifdef TEST

#define CATCH_CONFIG_MAIN
#include <string>
#include "catch.hpp"
#include "Counter.hpp"


TEST_CASE("count letters") {
  std::string a = "abc";
  std::string b = "abc\n";
  REQUIRE(CountChars(a) == 3);
  REQUIRE(CountChars(b) == 4);
}

TEST_CASE("count words") {
  std::string a = "abc def1";
  std::string b = "abcdef1";
  std::string c = "abc def1 grf";
  REQUIRE(CountWords(a) == 2);
  REQUIRE(CountWords(b) == 1);
  REQUIRE(CountWords(c) == 3);
}

TEST_CASE("count lines") {
  std::string a = "abc\ndef";
  REQUIRE(CountLines(a) == 2);
}

TEST_CASE("COUNT EVERYTHING") {
  std::string a = "adg jhf\n ghj";
  REQUIRE(countEverything(a) == 17);
}
#endif
