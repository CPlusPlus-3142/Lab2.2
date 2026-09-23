#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "../include/doctest.h"
#include "../include/lab2.h"

TEST_CASE("Testing load function") {
    double a[5];
    load(a, 5, "test_data.txt");
    CHECK(a[0] == 10);
    CHECK(a[1] == 2.4);
    CHECK(a[2] == 3.3);
    CHECK(a[3] == 4.1);
    CHECK(a[4] == .25);
}
TEST_CASE("Testing sort function") {
    double a[5] = {10, 2.4, 3.3, 4.1, .25};
    sort(a, 5);
    CHECK(a[0] == .25);
    CHECK(a[1] == 2.4);
    CHECK(a[2] == 3.3);
    CHECK(a[3] == 4.1);
    CHECK(a[4] == 10);
}   