// Instead of forward declaration every functions from every files in main.cpp
// We use header to do the forward declaration and #include them in main.cpp instead!

// If a header file is paired with a code file (e.g. add.h with add.cpp), they should both have the same base name (add).
#include "add.h" // Use "" instead of <> for self-made headers
#include <iostream>

// include order?

/*
Best practice

To maximize the chance that missing includes will be flagged by compiler, order your #includes as follows:

1. The paired header file (main.h come first (if exists))
2. Other headers from your project (add.h)
3. 3rd party library headers (GLFW.h)
4. Standard library headers (iostream)

The headers for each grouping should be sorted alphabetically (unless the documentation for a 3rd party library instructs you to do otherwise).
*/

int main(){
    std::cout << add(3,5);
}
