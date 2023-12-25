#include <iostream>

// Difference between PARAMETER and ARGUMENT
/*
A function parameter is a variable used in the header of a function. Function parameters work almost identically to variables defined inside the function, 
but with one difference: they are initialized with a value provided by the caller of the function. (argument)
*/

int doubleX(int x)
{
    // This function has x as a parameter
    return x*2;
}

int main()
{
    //An argument is a value that is passed from the caller to the function when a function call is made:
    int y{6};
    std::cout << doubleX(y) << '\n'; // y is the argument

    /*
    When a function is called, all of the parameters of the function are created as variables, and the value of each of the arguments is copied into the matching parameter (using copy initialization). This process is called pass by value. Function parameters that utilize pass by value are called value parameters.
    */
   // Value of y argument is copied into x parameter, that was created locally and died locally in the doubleX function
}
