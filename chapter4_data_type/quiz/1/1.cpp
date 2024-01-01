/*
Enter a double value: 6.2
Enter a double value: 5
Enter +, -, *, or /: *
6.2 * 5 is 31
*/

#include <iostream>

double getInput(){
    double x{};
    std::cout << "Enter a double value:";
    std::cin >> x;

    return static_cast<double>(x);
}

double operations(double a, double b, char operand)
{
    if(operand == '+') return a + b;
    else if(operand == '-') return a - b;
    else if (operand == '*')
        return a * b;
    else{
        if(b == 0) return -1.0;
        else return a/b;
    }
}

int main(){

    double a{getInput()};
    double b{getInput()};

    char operand{};
    std::cout << "Enter +, -, *, or /: ";
    std::cin >> operand;
    std::cout << a << ' ' << operand << ' ' << b << " = " << operations(a, b, operand) << '\n';

    return 0;
}
