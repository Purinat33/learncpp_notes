// Preprocessor Predirectives
// Instruction starting with # and ending with \n
// Scope = Entire 'file' it is declared/used in

// Tells compiler to replace this line with contents of IOStream 
#include <iostream>

// Macro
// 1. Function-Like : Unsafe and can be accomplished better with normal functions

// 2. Object-Like: 
// 2.1 : Substitution (When compiler sees PI it replace with 3.141519) : Constants
// Not recommended since there are more modern way of defining const in C++
#define PI 3.141519
#define NAME "JOHN"

// 2.2 Conditional Compilation (ifdef, ifndef, endif)
// Acceptable to use
// Think of it as "flags" for our code to do some extra specific behaviour
#define DEBUG

int main(){

    // If DEBUG is #define (which it is), then we will run until endif
    #ifdef DEBUG
        std::cout << "This is a DEBUG build\n";
    #endif

    // This will not be printed (Because RELEASE is not #define -ed)
    #ifdef RELEASE
        std::cout << "App version 2.1\n";
    #endif

    // if PATCH is NOT defined, then run this
    #ifndef PATCH
        std::cout << "This is not a patch of the application\n";
    #endif

    // #if 0 is the same as commenting out a code
    // #if 1 is undoing if 0 (uncommenting)

    #if 0
        std::cout << "This will not be printed\n";
    #endif

    #if 1
        std::cout << "This will always be printed\n";
    #endif

    return 0;
}
