---
title: CMake install
permalink: cmakeinstall
---

Below is an example C++ project. The CMakeLists file contains instructions for building and installing the project using the CMake command line tool.

```
MyProject
├── CMakeLists.txt
└── src
    ├── adder.cpp
    ├── adder.h
    └── main.cpp
```

Use the commands shown here to build and install the project with CMake. After installing the project, the executable named AdderExample is available from the command line.

```bash
# Configure the project and generate a native build system
$ cmake -S . -B build

# Call the build system to compile/link the project
$ cmake --build build

# Install the executable to usr/local/bin
$ cmake --install build

# Run the executable, assumes usr/local/bin is in your path
$ AdderExample
```

The structure of the project after running the Cmake commands is shown below. The install_manifest in the build directory lists all the files installed on the machine.

```
MyProject
├── CMakeLists.txt
├── build
│   ├── AdderExample
│   ├── CMakeCache.txt
│   ├── CMakeFiles
│   ├── Makefile
│   ├── cmake_install.cmake
│   └── install_manifest.txt
└── src
    ├── adder.cpp
    ├── adder.h
    └── main.cpp
```

Remove the build directory to clear the project of built files and other output generated from the build process. Also, remove the files listed in the install_manifest text file to cleanup files generated from the install process.

```bash
# Remove the build directory
$ rm -rf build

# Remove installed files
$ cat build/install_manifest.txt| xargs rm
```
