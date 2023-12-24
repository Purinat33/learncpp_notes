#include <iostream>

/*
    Write a program that asks the user to enter a number, and then enter a second number. 
    The program should tell the user what the result of adding and subtracting the two numbers is.
*/

int main(){

    int x{};
    int y{};


    // Accepting input
    std::cout << "Enter value 1: ";
    std::cin >> x;

    std::cout << "Enter value 2: ";
    std::cin >> y;

    // Evaluation
    std::cout << x << '+' << y << '=' << (x + y) << '\n';
    std::cout << x << '-' << y << '=' << (x - y) << '\n';

    return 0;
}
