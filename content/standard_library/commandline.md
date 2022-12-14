---
title: Command line arguments
date: December 13, 2022
---

To pass command line arguments to a program, define `main()` with two arguments. The `argc` argument is the number of command line arguments including the program name while `argv` is the list of arguments passed to the program.

```cpp
// commandline.cpp

#include <iostream>

int main(int argc, char const *argv[])
{
    /* code */
    std::cout << "argc is " << argc << std::endl;
    std::cout << "argv 0 is " << argv[0] << std::endl;
    std::cout << "argv 1 is " << argv[1] << std::endl;

    return 0;
}
```

Compile and run the program and pass an argument to it.

```bash
clang++ commandline.cpp -o commandline
./commandline hellothere
```

The printed output for the above example is shown below.

```text
argc is 2
argv 0 is ./commandline
argv 1 is hellothere
```
