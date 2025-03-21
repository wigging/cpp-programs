---
title: Hello world
date: December 13, 2022
---

Here is a simple example of a C++ program in a file named `helloworld.cpp`.

```cpp
// helloworld.cpp

#include <iostream>

int main()
{
    std::cout << "Hello world!" << std::endl;
    return 0;
}
```

Use the terminal command shown below to build and run the program. You should see the words `Hello world!` printed in the terminal.

```bash
clang++ helloworld.cpp -o helloworld; ./helloworld
```
