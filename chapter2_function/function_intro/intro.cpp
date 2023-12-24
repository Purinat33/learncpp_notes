#include <iostream>

void sayHi()
{
    std::cout << "Hi\n";
}

void foo()
{
    // Function is a block of statements that is reusable.
    std::cout << "foo() started...\n";

    std::cout << "foo() called sayHi()\n";
    // Which means a function can also call another function (because another function is just a block of statement when "expanded")
    sayHi();

    std::cout << "Return to foo() from sayHi()\n";
    std::cout << "foo() ended\n";
}

int main()
{
    std::cout << "main() started..." << '\n';
    std::cout << "main() called foo()\n";
    foo();
    std::cout << "main() resumed execution\n";

    // Sequence
    /*
        main() started...
        main() called foo()
        foo() started...
        foo() called sayHi()
        Hi
        Return to foo() from sayHi()
        foo() ended
        main() resumed execution
    */
}
