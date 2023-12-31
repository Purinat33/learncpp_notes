#include <iostream>

bool isEven(int x){
    // Returning boolean
    /*
    if(x%2 == 0) 
    {
        return true;
    }
    else
    {
        return false;
    }
    */
    // Or simply just:
    return (x%2==0);
}

int main(){

    std::cout << true << '\n'; // Will output 1
    std::cout << false << '\n'; // Give 0

    //If we want direct true or false?
    std::cout << std::boolalpha;

    std::cout << true << '\n';  // Will output true
    std::cout << false << '\n'; // Give false


    // int to boolean
    bool even{0}; // Initialize to false : OK
    bool odd{1}; // Initialize to true: OK
    // bool number{2}; // Error

    // Copy assignment
    even = 0; // 0 = False
    even = 54; // Not 0 = True
    std::cout << even << '\n';

    return 0;
}
