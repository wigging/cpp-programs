/*
Examples of strings. Build and run using the following terminal command:
clang++ -o build/strings strings.cpp; ./build/strings
*/

#include <iostream>
#include <string>

// Print a string where string input is defined as a constant reference
void PrintString(const std::string& string) {
    std::cout << string << std::endl;
}

int main()
{
    // Example 1 - define a string and print it
    std::string name = "This is a string";
    std::cout << name << std::endl;

    // Example 2 - size of the string
    std::string fruit = "apple";
    std::cout << fruit.size() << std::endl;

    // Example 3 - append to a string
    std::string vehicle = "ford";
    vehicle += " truck";
    std::cout << vehicle << std::endl;

    // Example 4 - append to a string
    std::string vehicle2 = std::string("ford") + " truck";
    std::cout << vehicle2 << std::endl;

    // Example 5 - use function to print a strg2`q1dwsdeqw21  bving
    std::string color = "cyan";
    PrintString(color);

    return 0;
}