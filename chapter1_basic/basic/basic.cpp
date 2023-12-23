// Preprocessor Directive(s)
// Will run before the actual compilation of the code

// Include iostream standard library
// This library includes statements like:
// std::cout etc.

/*
A library file is a collection of precompiled code that has been “packaged up” for reuse in other programs. 
The C++ Standard Library is a library that ships with C++. 
It contains additional functionality to use in your programs.
*/
#include <iostream>

// Every C++ application must have a main() function as entry point
// main() will be executed first
// Statements inside main() will be executed
int main(){
    std::cout << "Hello World";
    return 0;
}

// Extra notes on commenting:
/*
1. At the library, program, or function level, use comments to describe what.
2. Inside the library, program, or function, use comments to describe how.
3. At the statement level, use comments to describe why.

Comment your code liberally, and write your comments as if speaking to someone who has no idea what the code does. Don’t assume you’ll remember why you made specific choices.
*/
