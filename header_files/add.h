// Header guards
// Header guards are designed to ensure that the contents of a given header file are not copied more than once into any single file, in order to prevent duplicate definitions.
// Duplicate declarations are fine -- but even if your header file is composed of all declarations (no definitions) it’s still a best practice to include header guards.
#ifndef ADD_H // All of your header files should have header guards on them. SOME_UNIQUE_NAME_HERE can be any name you want, but by convention is set to the full filename of the header file, typed in all caps, using underscores for spaces or punctuation. For example, square.h would have the header guard:
#define ADD_H


// Header file doesn't do the function body!
// It is the job of the .cpp file with the same name as this one

// Header file only do the forward declaration 
// This forward declaration will be called via #include in main.cpp
int add(int x, int y);


//End of header guard
#endif
