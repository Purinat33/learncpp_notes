#include <iostream>

int getValue()
{
    int x{};
    std::cin >> x;
    return x;
}

int main()
{
    // const vs constexpr
    // #define is also for constant, but harder to define scope so, try not to use it
    
    // const and constexpr both constant but
    // constexpr value must be KNOWN/EVALUATE at COMPILE TIME
    // const value can be known/evaluate either at RUNTIME or COMPILE TIME

    constexpr int size{3+6}; // OK, knows at compile time
    // constexpr int num{getValue()}; //Error, Not known at compile time

    const int age{getValue()}; // OK, can know at runtime is fine.

    /*
    Any constant variable whose initializer is a constant expression should be declared as constexpr.

    Any constant variable whose initializer is not a constant expression should be declared as const.

    Caveat: In the future we will discuss some types that are not fully compatible with constexpr (including std::string, std::vector, and other types that use dynamic memory allocation). For constant objects of these types, either use const instead of constexpr, or pick a different type that is constexpr compatible (e.g. std::string_view or std::array).
    */
}
