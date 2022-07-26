#include <iostream>
#include "adder.h"

int main() {

    std::cout << "Hello there" << std::endl;

    float x = 4.5;
    float y = 8.0;
    float sum = adder(x, y);

    std::cout << "X is " << x << std::endl;
    std::cout << "Y is " << y << std::endl;
    std::cout << "Sum is " << sum << std::endl;

    return 0;
}