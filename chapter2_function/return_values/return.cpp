#include <iostream>


int getInput(){

    // 2.2 — Function return values (value-returning functions)
    // https://www.learncpp.com/cpp-tutorial/function-return-values-value-returning-functions/
    // return type must match function type
    int input{};
    std::cout << "Input a number: ";
    std::cin >> input;
    return input;
}


// 2.3
void printName(){
    // Void doesn't return anything
    // BUT
    // return; in void function == terminate function early
    int y{};
    if (y != 0)
    {
        return; // Stop the function early
    }
    else
    {
        std::cout << "Name\n";
    }
}

int main()
{

    int a{getInput()}; // Instead of doing the above 4 lines 2 times, we only put short words and stuff
    int b{getInput()};
    // Above: Example of DRY: Dont Repeat Yourself -> If possible, make a function
    // Opposite = WET: Write Everything Twice

    std::cout << a + b << '\n';
    printName();

    // Should do this everytime (Even when modern compiler implicitly ignore it)
    return EXIT_SUCCESS; // == return 0;
}
