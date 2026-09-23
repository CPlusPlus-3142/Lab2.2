#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include <cstdio>
#include <fstream>

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

TEST_CASE("Testing swap function") {
    double first = 1.5;
    double second = -2.75;

    swap(first, second);

    CHECK(first == -2.75);
    CHECK(second == 1.5);
}

TEST_CASE("Testing print function") {
    const char* filename = "test_output.txt";
    double values[3] = {1.5, -2.75, 10};

    print(values, 3, filename);

    std::ifstream output(filename);
    REQUIRE(output.is_open());

    double value = 0;
    bool read = static_cast<bool>(output >> value);
    REQUIRE(read);
    CHECK(value == 1.5);
    read = static_cast<bool>(output >> value);
    REQUIRE(read);
    CHECK(value == -2.75);
    read = static_cast<bool>(output >> value);
    REQUIRE(read);
    CHECK(value == 10);

    output.close();
    std::remove(filename);
}