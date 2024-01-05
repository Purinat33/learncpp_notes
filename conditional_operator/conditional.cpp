#include <iostream>

int main()
{
    int x{};
    std::cin >> x;
    double age{(x > 3) ? 2.4 : 1}; 
    // If true then age = 2.4, else = 1

    // Conditional is an expression, thus we can use constexpr
    constexpr bool isInside{false};
    constexpr int moveLength{(isInside) ? 10 : -1};
}
