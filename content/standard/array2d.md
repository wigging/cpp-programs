---
title: Array with two-dimensions
date: August 13, 2023
---

A two-dimensional array can be created using the traditional C-style array or with the C++ standard array container. Both approaches are demonstrated below.

## Using a C-style array

A traditional C-style array can be used to create a 2D array. The array in this example has 3 rows and 4 columns with integer values.

```cpp
int arr[3][4] = {{10, 11, 12, 13},
                 {14, 15, 16, 17},
                 {18, 19, 20, 21}};

for (int i = 0; i < 3; ++i) {
    for (int j = 0; j < 4; ++j) {
        std::cout << arr[i][j] << " ";
    }
    std::cout << std::endl;
}
```

The output from this example is shown below:

```
10 11 12 13
14 15 16 17
18 19 20 21
```

## Using the standard array container

The `std::array` container can also be used to create a 2D array.

```cpp
#include <iostream>
#include <array>

std::array<std::array<int, 4>, 3> arr = {{{10, 11, 12, 13},
                                          {14, 15, 16, 17},
                                          {18, 19, 20, 21}}};

for (int i = 0; i < 3; ++i) {
    for (int j = 0; j < 4; ++j) {
        std::cout << arr.at(i).at(j) << " ";
    }
    std::cout << std::endl;
}
```

This outputs the following:

```text
10 11 12 13
14 15 16 17
18 19 20 21
```
