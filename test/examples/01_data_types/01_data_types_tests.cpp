#define CATCH_CONFIG_MAIN // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "int.h"
#include "char.h"

TEST_CASE("Verify Test Configuration", "verification")
{
	REQUIRE(true == true);
}

TEST_CASE("Test echo variable function", "do values echo")
{
	REQUIRE(echo_variable(5) == 5);		  // assertion
	REQUIRE(echo_variable(10) == 10);	  // assertion
	REQUIRE(echo_variable(100) == 100);	  // assertion
	REQUIRE(echo_variable(1000) == 1000); // assertion
}

TEST_CASE("Test get char function", "do values char")
{
	REQUIRE(get_char_ascii_value('A') == 65);
	REQUIRE(get_char_ascii_value('a') == 97);
}

/*test case echo_variable */

/*test case add_to_double_1 with 0 as parameter*/

/*test case add_to_double_1 with 1 as parameter*/

/*test case add_to_double_2 with 0 as parameter*/

/*test case add_to_double_2 with 1 as parameter*/

/*test case char test ASCII values */

/*test case string test ASCII values Joe characters are equal to 74, 111, and 10*/