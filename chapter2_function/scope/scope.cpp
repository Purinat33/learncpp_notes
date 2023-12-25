#include <iostream>

void sayHi()
{
    int x{12};
    std::cout << "x = " << x;
}

int main()
{
    // main() x and sayHi() x are different variables entirely
    // main() cannot modify the value that will appear in std::cout<<"x = " << x; (12)
    // and sayHi() will not output 8 at all
    int x{8};
    std::cout << x << '\n';
    sayHi();   
}
