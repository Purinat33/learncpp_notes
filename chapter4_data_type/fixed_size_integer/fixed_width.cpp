// Sizes of data (especially int) usually differs from hardware to hardware 
#include <iostream>
#include <cstdint>

int main(){

    std::cout << "Size of int: " << sizeof(int) << " bytes\n"; // 4 bytes on this machine
    // But compiler will usually deal with the memory allocation implicitly when it sees the source code
    // But if we're still sensitive about memory usages, we can use "Fixed-Width-Integer" from C99
    // From the <cstdint> library
    // u is for unsigned
    std::int8_t sOneByte{-22}; // 1 byte always
    std::uint8_t uSOneByte{12}; // 1
    std::int16_t twoByte{15000}; // 2
    std::uint16_t uTwoByte{60000}; // 2
    std::int32_t fourByte{1000000}; // 4
    std::uint64_t uEightByte{999999999}; // 8 bytes

    std::cout << "Size of int8_t and uint8_t: " << sizeof(sOneByte) << " bytes\n";
    std::cout << "Size of int16_t and unsigned: " << sizeof(twoByte) << " bytes\n";
    std::cout << "Size of int32_t and unsigned: " << sizeof(fourByte) << " bytes\n";
    std::cout << "Size of int64_t and unsigned: " << sizeof(uEightByte) << " bytes\n";

    // Potential Problems
    /*
        1. not guaranteed to be defined on all architectures (but most hardwares adapt this standard this shouldn't be a problem, unless you use these on 1920 IBM PC something)
    */

    /*
         2. if you use a fixed-width integer, it may be slower than a wider type on some architectures. For example, if you need an integer that is guaranteed to be 32-bits, you might decide to use std::int32_t, but your CPU might actually be faster at processing 64-bit integers
    */

    // FAST and LEAST int
    /*

    The fast types (std::int_fast#_t and std::uint_fast#_t) provide the fastest signed/unsigned integer type with a width of at least # bits (where # = 8, 16, 32, or 64). For example, std::int_fast32_t will give you the fastest signed integer type that’s at least 32 bits. By fastest, we mean the integral type that can be processed most quickly by the CPU.

    The least types (std::int_least#_t and std::uint_least#_t) provide the smallest signed/unsigned integer type with a width of at least # bits (where # = 8, 16, 32, or 64). For example, std::uint_least32_t will give you the smallest unsigned integer type that’s at least 32 bits.

    */

   std::cout << "\nLeast\n";
   std::cout << "Size of int_least8_t and unsigned: " << sizeof(std::int_least8_t) << " bytes\n";

   std::cout << "\nFast\n";
   std::cout << "Size of int_fast16_t and unsigned: " << sizeof(std::uint_fast16_t) << " bytes\n";

   /*
    Best practice

    Prefer int when the size of the integer doesn’t matter (e.g. the number will always fit within the range of a 2-byte signed integer). For example, if you’re asking the user to enter their age, or counting from 1 to 10, it doesn’t matter whether int is 16 or 32 bits (the numbers will fit either way). This will cover the vast majority of the cases you’re likely to run across.
    Prefer std::int#_t when storing a quantity that needs a guaranteed range.
    Prefer std::uint#_t when doing bit manipulation or where well-defined wrap-around behavior is required.
    
    
    Avoid the following when possible:

    short and long integers -- use a fixed-width type instead.
    Unsigned types for holding quantities.
    The 8-bit fixed-width integer types.
    The fast and least fixed-width types.
    Any compiler-specific fixed-width integers -- for example, Visual Studio defines __int8, __int16, etc…
   */

    //std::size_t
    //std::size_t is an unsigned integral type in C++ that is used to represent the "size" of objects

    // It is the type of the result returned by the sizeof
    std::size_t intSize = sizeof(int);
    std::cout << "\nValue of intSize = " << intSize << " bytes" << '\n';

   return 0;
}
