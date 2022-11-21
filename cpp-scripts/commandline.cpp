/*
Example of commandline arguments. The `argc` is the number of commandline
arguments passed to the program including the program name. The `argv` is the
arguments passed to the program where the first item is the name of the
program.
*/

#include <iostream>

int main(int argc, char const *argv[])
{
    /* code */
    std::cout << "argc is " << argc << std::endl;
    std::cout << "argv 0 is " << argv[0] << std::endl;
    std::cout << "argv 1 is " << argv[1] << std::endl;

    return 0;
}