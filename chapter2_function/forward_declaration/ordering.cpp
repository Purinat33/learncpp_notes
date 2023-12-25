#include <iostream>

// The compiler will see main() first and broke because it cannot see add() or sayHi() yet
// To fix:
// 1. Reorder functions so those appear before they are called 
// or 
// 2. Forward declaration (Best method)

int add(int x, int y);
void sayHi();

int main(){
    sayHi();

    std::cout << add(4, 6);

    return 0;
}

int add(int x, int y){
    sayHi();
    return x + y;
}

void sayHi(){
    std::cout << "Hi\n";    
}

/*
Definition	        Implements a function or instantiates a variable.
                    Definitions are also declarations.	void foo() { } // function definition
                    int x; // variable definition

Declaration	        Tells compiler about an identifier and its associated type information.	
                    void foo(); // function declaration
                    int x; // variable declaration

Pure declaration	A declaration that isn’t a definition.	void foo();

Initializer	        Provides an initial value for a defined object.	int x { 2 }; // 2 is the initializer
*/
