#include <iostream>

int add(int a, int b); //Hint the compiler that this function does exist (on different file but it will know)

int main()
{
    std::cout << add(2, 6) << '\n';
    return 0;
}
