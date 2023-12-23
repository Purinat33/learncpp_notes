#include <iostream>

int main(){
    // In the previous tutorials, we were always told to initialized variables (with {}) everytime
    // Even when we aim to accept the input value later
    int x{}; 
    std::cout << x << '\n'; // X will be displayed as 0 everytime because it is the default from {}

    //Uninitialized variable?
    int y;
    std::cout << y << '\n'; // First run: 72610392 Second running: 5501528 (borken)
    // Using uninitialized variables can lead to "undefined behaviours"
    
    // Even if we are going to do assignment later. eg
    int z;
    std::cin >> z;
    std::cout << z << '\n';
    // It would be better to have the initialization habit in place for all variables, assigned later or otherwise, just in case we forgot to do std::cin for all 1000 variables?

    // Implementation-defined behavior
    // means the behavior of some syntax is left up to the implementation (the compiler) to define. Such behaviors must be consistent and documented, but different compilers may produce different results.
    // eg.
    std::cout << sizeof(float) << '\n'; // Some compiler will give 4, some give 2 etc.
    // We generally want to avoid implementation-defined and unspecified behavior, as it means our program may not work as expected if compiled on a different compiler (or even on the same compiler if we change project settings that affect how the implementation behaves!)

    return 0;
}
