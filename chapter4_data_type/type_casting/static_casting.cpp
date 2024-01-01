#include <iostream>
#include <cstdio>

int main()
{
    // Implicit casting by compiler (not recommended)
    double x{5}; // int to double : allowed (narrow -> wider)
    //int y{5.0}; // Error, wider to narrower conversion not allowed
    std::cout << x << '\n';

    
    // Explicit casting
    // static_cast<new_type>(expression)
    // Note: most of the time in C++, seeing <> mostly means that we put data type in there
    // Converting chars to int (ascii code)
    char y{'m'};
    std::cout << "value of y: " << y << '\n';
    std::cout << "ASCII of y: " << static_cast<int>(y) << '\n';

    // std::int8_t and std::uint8_t behaves more like char than int
    std::int8_t val{45};
    std::cout << "int8_t value: " << val << '\n';
    std::cout << "int8_t value: " << static_cast<int>(val) << '\n';
}
