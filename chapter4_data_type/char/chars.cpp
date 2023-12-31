#include <iostream>

int main(){

    // ASCII code
    // Don't mix up 
    char a1{100}; // Initialize a1 with character with ascii value == 100 -> d
    char a2{'5'}; // Initialize a2 with literal 5 (ascii value == 53 -> prefer this one over above method

    std::cout << a1 << '\n';
    std::cout << a2 << '\n';

    // Inputting char
    // Since char only accept 1 character, then the rest 2, 3, ... will be stuck in buffer
    char a3{};
    char a4{};

    std::cin >> a3; // a b c d e BUT only a is accepted leaving b c d e stuck in buffer 
    std::cin >> a4; // b c d e f g h i BUT despite the new input (if compiler let new input be taken in), b is accepted because head of queue stuck in buffer

    // Try input a b c d e f g h i
    std::cout << a3 << '\n'; // a 
    std::cout << a4 << '\n'; // b

    // Input sequence? (We sometime see this in competitive/leetcode stuff)
    // Instead of: Please input age C1
    // Please input id C2
    // ...

    char c1{};
    char c2{};

    std::cin >> c1 >> c2;

    std::cout << c1 << '\n' << c2 << '\n'; // This usually works with int and float and stuff where you just copy paste test cases into the terminal cin part

    return 0;
}
