#include <iostream>
#include <string>

#include "logger.h"

int main() {
    std::cout << "Logger program" << std::endl;

    std::string message = "Hello from the logger";
    Log(message);
}