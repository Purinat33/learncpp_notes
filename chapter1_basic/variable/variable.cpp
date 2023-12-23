#include <iostream>

int main(){

    // Initialization vs Assignment

    //Assignment
    [[maybe_unused]] int x;
    x = 5; // copy assignment value of 5 to variable x

    //Initialization
    //Providing initial value at creation
    [[maybe_unused]] int a; // no initializer (default initialization)
    [[maybe_unused]] int b = 5; // initializer after equals sign (copy initialization)
    [[maybe_unused]] int c(6);  // initializer in parenthesis (direct initialization)

    // List initialization methods (C++11) (preferred)
    [[maybe_unused]] int d{7}; // initializer in braces (direct list initialization)
    [[maybe_unused]] int e = {8}; // initializer in braces after equals sign (copy list initialization)
    [[maybe_unused]] int f{};     // initializer is empty braces (value initialization)

    // In summary: Prefer list initialization more than others
    // Since they work in most cases
    // But a selected few doesn't work, then we just use any other is fine.
    
    // And preferrably, initiate variables everytime
    double weight{};
    [[maybe_unused]] int age{20};
    weight = {12};
    std::cout << weight;
    
    // Unused variable `age`

    // maybe_unused (C++17)
    [[maybe_unused]] double pi {3.1415};
    // Prevent compilers from throwing warnings about a variable not being used
    // Added [[maybe_unused]] to the above assignment vs initialization examples (a-f)

    return 0;
}
