//
// Created by chizisch on 28‏/1‏/2020.
//
#include "include/includes.h"



TEST_CASE("Dummy Tests", "Second Arg"){
    CHECK(dummydum("rachid") == 13);
    CHECK_FALSE(dummydum("hamid") == 13);
}
