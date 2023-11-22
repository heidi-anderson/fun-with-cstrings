#define CATCH_CONFIG_MAIN
#include "..\\catch.hpp"
#include "a0009.h"

TEST_CASE("swapStrings - happy, joy")
{
    char s1[10] = "happy";
    char s2[10] = "joy";
   
    swapStrings(s1, s2);
    
    REQUIRE( strcmp( s1, "joy" ) == 0 );
    REQUIRE( strcmp( s2, "happy" ) == 0 );
}

TEST_CASE("sortOrder - small array")
{
    char words[5][21] = { "happy", "sad", "apple", "day", "milk" };
    sortOrder( words, 5 );
    
    REQUIRE(strcmp( words[0], "apple" ) == 0);
    REQUIRE(strcmp( words[4], "sad" ) == 0);
}

TEST_CASE("sortLen - small array")
{
    char words[5][21] = { "happy", "sad", "apple", "day", "milk" };
    sortLen( words, 5 );
    
    REQUIRE(strcmp( words[0], "sad" ) == 0);
    REQUIRE(strcmp( words[4], "apple" ) == 0);
}