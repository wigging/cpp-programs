+++
title = "CMake build"
date = 2022-12-13
+++

Below is an example C++ project. The CMakeLists file contains instructions for building the project using the CMake command line tool.

```
MyProject
├── CMakeLists.txt
└── src
    ├── adder.cpp
    ├── adder.h
    └── main.cpp
```

Use the commands shown here to build the project with CMake. After building the project, the executable named AdderExample is available in the build directory.

```bash
# Configure the project and generate a native build system
# This creates a directory named `build`
$ cd MyProject
$ cmake -S . -B build

# Call the build system to compile/link the project
$ cmake --build build

# Run the executable
$ ./build/AdderExample
```

The structure of the project after running the build command is shown below.

```
MyProject
├── CMakeLists.txt
├── build
│   ├── AdderExample
│   ├── CMakeCache.txt
│   ├── CMakeFiles
│   ├── Makefile
│   └── cmake_install.cmake
└── src
    ├── adder.cpp
    ├── adder.h
    └── main.cpp
```

Remove the build directory to clear the project of built files and other output generated from CMake.

```bash
$ rm -rf build
```
