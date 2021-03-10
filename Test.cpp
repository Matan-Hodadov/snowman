/**
 * An example of how to write unit tests.
 * Use this as a basis to build a more complete Test.cpp file.
 * 
 * IMPORTANT: Please write more tests - the tests here are only for example and are not complete.
 *
 * AUTHORS: <Please write your names here>
 * 
 * Date: 2021-02
 */

#include "doctest.h"
#include "snowman.hpp"
using namespace ariel;

#include <string>
#include <algorithm>
using namespace std;

/**
 * Returns the input string without the whitespace characters: space, newline and tab.
 * Requires std=c++2a.
 */
string nospaces(string input) {
	std::erase(input, ' ');
	std::erase(input, '\t');
	std::erase(input, '\n');
	std::erase(input, '\r');
	return input;
}

TEST_CASE("Good snowman hats") {
    CHECK(snowman(11114411) == (" _===_ \n (.,.) \n ( : ) \n ( : ) "));
    CHECK(snowman(21114411) == ("  ___  \n ..... \n (.,.) \n ( : ) \n ( : ) "));
    CHECK(snowman(31114411) == ("   _   \n  /_\\  \n (.,.) \n ( : ) \n ( : ) "));
    CHECK(snowman(41114411) == ("  ___  \n (_*_) \n (.,.) \n ( : ) \n ( : ) "));
}

TEST_CASE("Good snowman noses") {
    CHECK(snowman(11114411) == (" _===_ \n (.,.) \n ( : ) \n ( : ) "));
    CHECK(snowman(12114411) == (" _===_ \n (...) \n ( : ) \n ( : ) "));
    CHECK(snowman(13114411) == (" _===_ \n (._.) \n ( : ) \n ( : ) "));
    CHECK(snowman(14114411) == (" _===_ \n (. .) \n ( : ) \n ( : ) "));
}

TEST_CASE("Good snowman left eyes") {
    CHECK(snowman(11114411) == (" _===_ \n (.,.) \n ( : ) \n ( : ) "));
    CHECK(snowman(11214411) == (" _===_ \n (o,.) \n ( : ) \n ( : ) "));
    CHECK(snowman(11314411) == (" _===_ \n (O,.) \n ( : ) \n ( : ) "));
    CHECK(snowman(11414411) == (" _===_ \n (-,.) \n ( : ) \n ( : ) "));
}

TEST_CASE("Good snowman right eyes") {
    CHECK(snowman(11114411) == (" _===_ \n (.,.) \n ( : ) \n ( : ) "));
    CHECK(snowman(11124411) == (" _===_ \n (.,o) \n ( : ) \n ( : ) "));
    CHECK(snowman(11134411) == (" _===_ \n (.,O) \n ( : ) \n ( : ) "));
    CHECK(snowman(11144411) == (" _===_ \n (.,-) \n ( : ) \n ( : ) "));
}

TEST_CASE("Good snowman left arm") {
    CHECK(snowman(11111411) == (" _===_ \n (.,.) \n ( : ) \n<( : ) "));
    CHECK(snowman(11112411) == (" _===_ \n (.,.) \n\\( : ) \n ( : ) "));
    CHECK(snowman(11113411) == (" _===_ \n (.,.) \n ( : ) \n/( : ) "));
    CHECK(snowman(11114411) == (" _===_ \n (.,.) \n ( : ) \n ( : ) "));
}

TEST_CASE("Good snowman right arm") {
    CHECK(snowman(11114111) == (" _===_ \n (.,.) \n ( : ) \n ( : )>"));
    CHECK(snowman(11114211) == (" _===_ \n (.,.) \n ( : )/\n ( : ) "));
    CHECK(snowman(11114311) == (" _===_ \n (.,.) \n ( : ) \n ( : )\\"));
    CHECK(snowman(11114411) == (" _===_ \n (.,.) \n ( : ) \n ( : ) "));
}

TEST_CASE("Good snowman torso") {
    CHECK(snowman(11114411) == (" _===_ \n (.,.) \n ( : ) \n ( : ) "));
    CHECK(snowman(11114421) == (" _===_ \n (.,.) \n ( : ) \n (] [) "));
    CHECK(snowman(11114431) == (" _===_ \n (.,.) \n ( : ) \n (> <) "));
    CHECK(snowman(11114441) == (" _===_ \n (.,.) \n ( : ) \n (   ) "));
}

TEST_CASE("Good snowman base") {
    CHECK(snowman(11114411) == (" _===_ \n (.,.) \n ( : ) \n ( : ) "));
    CHECK(snowman(11114412) == (" _===_ \n (.,.) \n ( : ) \n (\" \") "));
    CHECK(snowman(11114413) == (" _===_ \n (.,.) \n ( : ) \n (___) "));
    CHECK(snowman(11114414) == (" _===_ \n (.,.) \n ( : ) \n (   ) "));
}

TEST_CASE("Bad snowman number not in num range") {
    CHECK_THROWS(snowman(81243241));
    CHECK_THROWS(snowman(17243241));
    CHECK_THROWS(snowman(31743241));
    CHECK_THROWS(snowman(11293241));
    CHECK_THROWS(snowman(11247241));
    CHECK_THROWS(snowman(11243641));
    CHECK_THROWS(snowman(11243201));
    CHECK_THROWS(snowman(11243245));
}

TEST_CASE("Bad snowman invalid number length") {
    CHECK_THROWS(snowman(0));
    CHECK_THROWS(snowman(3));
    CHECK_THROWS(snowman(42));
    CHECK_THROWS(snowman(143));
    CHECK_THROWS(snowman(1423));
    CHECK_THROWS(snowman(13243));
    CHECK_THROWS(snowman(132441));
    CHECK_THROWS(snowman(1241132));
    CHECK_THROWS(snowman(141231412));
}


/* Add more test cases here */
