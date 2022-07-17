#define CATCH_CONFIG_MAIN
#include "hwexpressions.h"
#include "hwexpressions.cpp"
#include "catch.hpp"

TEST_CASE ("Verify Text Configuration","verification"){
    REQUIRE(true == true);
}

TEST_CASE("Test get_sales_tax_amount"){
    REQUIRE(get_sales_tax_amount(10) == 0.675);
    REQUIRE(get_sales_tax_amount(20) == 1.35);
} 

TEST_CASE ("Test get_tip_amount"){
    REQUIRE(get_tip_amount(20,0.15) == 3);
    REQUIRE(get_tip_amount(20, 0.20) == 4);
}