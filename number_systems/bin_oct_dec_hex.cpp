#include <iostream>
#include <bitset> // For binary number operations etc (including printing binary numbers)


int main()
{
    // Normal everyday uses DECIMAL
    // Even C++ normally output decimal
    int dec{12};
    int largeInt{2'000'000'000}; // Digit separator
    std::cout << dec << '\n';
    std::cout << largeInt << '\n';

    // Octal (prefix with 0)
    int oct{036}; // == 30 in decimal
    std::cout << "Printing octal value directly: " << oct << '\n'; // Default will print in decimal form
    std::cout << std::oct << "Printing with std::oct : " << oct << '\n';

    // Hexadecimal (0x prefix)
    int color{0xFCA1};
    std::cout << "Printing hex value directly: " << color << '\n'; // Default will print in decimal form
    std::cout << std::hex << "Printing with std::hex : " << color << '\n';

    // Binary (0b)
    int bin{0b1000'0100};
    std::cout << "Printing binary value directly: " << bin << '\n'; // Default will print in decimal form
    // We don't have std::bin like the 2 above examples
    // But we can use #include <bitset> to use it (bitset used in bits manipulation like AND OR XOR)
    std::cout << std::bitset<4>(0b0010) << '\n'; // Display 4 bits
    std::cout << std::bitset<8>(0b0010) << '\n'; // display 8 bits
    std::cout << std::bitset<8>(bin) << '\n';
    std::cout << std::bitset<8>(012) << '\n';
    std::cout << std::bitset<16>(0x6F) << '\n';

    return 0;
}
