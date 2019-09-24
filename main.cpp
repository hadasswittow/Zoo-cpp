#include <iostream>
#include "tests.h"
int main() {
    Tests tests;
    tests.initialize_zoo();
    tests.generic_print();
    tests.test_clear_zoo();
    return 0;
}