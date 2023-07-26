---
title: Include function
date: July 25, 2023
---

The `main.cpp` example uses the `Log()` function to print a string to the screen. This function is implemented in `logger.cpp` and `logger.h`.

```cpp
// main.cpp

#include <iostream>
#include <string>

#include "logger.h"

int main() {
    std::cout << "Logger program" << std::endl;

    std::string message = "Hello from the logger";
    Log(message);
}
```

```cpp
// logger.cpp

#include <iostream>
#include <string>

#include "logger.h"

void Log(const std::string& input) {
    std::cout << input << std::endl;
}
```

```cpp
// logger.h

#pragma once

#include <string>

void Log(const std::string& input);
```

The output from running this example is shown below.

```text
$ clang++ main.cpp logger.cpp -o main
$ ./main

Logger program
Hello from the logger
```
