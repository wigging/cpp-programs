#include <iostream>
#include <array>

void run_example1() {

    std::array<std::array<int, 4>, 3> arr = {{{10, 11, 12, 13},
                                              {14, 15, 16, 17},
                                              {18, 19, 20, 21}}};

    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 4; ++j) {
            std::cout << arr.at(i).at(j) << " ";
        }
        std::cout << std::endl;
    }
}

void run_example2() {

    int arr[3][4] = {{10, 11, 12, 13},
                     {14, 15, 16, 17},
                     {18, 19, 20, 21}};

    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 4; ++j) {
            std::cout << arr[i][j] << " ";
        }
        std::cout << std::endl;
    }
}

int main() {

    std::cout << "Example 1 using std::array" << std::endl;
    run_example1();

    std::cout << "Example 2 using C-style array" << std::endl;
    run_example2();
}