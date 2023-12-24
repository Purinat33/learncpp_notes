#include <iostream>

int main(){
    int input{};
    std::cout << "Input number: ";
    std::cin >> input;

    // Not good solution (Modifying the accepted integer)
    // input = input * 2;

    // Almost good solution (Creating a new variable can cost memory usage)
    // int inputDoubled{input * 2};

    // Best solution (Use the accepted integer without modifying it)
    std::cout << "Double of " << input << ": " << (input * 2) <<'\n';
    return 0;
}
