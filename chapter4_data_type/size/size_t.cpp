// size_t is an unsigned integral type that is used to represent the size or length of objects.

#include <iostream>

int main()
{
    size_t val{sizeof(int) * 3};

    std::cout << val << '\n';
    return 0;
}
