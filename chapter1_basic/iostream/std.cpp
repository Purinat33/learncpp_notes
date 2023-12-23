#include <iostream>
// Contains input/output functionality

int main(){

    int x{}; // Initialized with empty (in this case its 0 instead of some random int if we don't do {})
    std::cout << "Hello World " << x;
    /*
    std::cout is buffered:

    Consider a rollercoaster ride at your favorite amusement park. Passengers show up (at some variable rate) and get in line. Periodically, a train arrives and boards passengers (up to the maximum capacity of the train). When the train is full, or when enough time has passed, the train departs with a batch of passengers, and the ride commences. Any passengers unable to board the current train wait for the next one.
    This analogy is similar to how output sent to std::cout is typically processed in C++. Statements in our program request that output be sent to the console. However, that output is typically not sent to the console immediately. Instead, the requested output “gets in line”, and is stored in a region of memory set aside to collect such requests (called a buffer). Periodically, the buffer is flushed, meaning all of the data collected in the buffer is transferred to its destination (in this case, the console).
    This also means that if your program crashes, aborts, or is paused (e.g. for debugging purposes) before the buffer is flushed, any output still waiting in the buffer will not be displayed.
    */

    /*
    The opposite of buffered output is unbuffered output. With unbuffered output, each individual output request is sent directly to the output device.
    Writing data to a buffer is typically fast, whereas transferring a batch of data to an output device is comparatively slow. Buffering can significantly increase performance by minimizing the number of slow transfers that need to be performed when there are multiple output requests.
    */

    //Newline
    // std::endl;
    // '\n'
    std::cout << '\n' << "This is a new line\n"; //Better performance
    std::cout << "This is another line" << std::endl;
    /*
    Using std::endl can be a bit inefficient, as it actually does two jobs: it moves the cursor to the next line of the console, and it flushes the buffer. When writing text to the console, we typically don’t need to flush the buffer at the end of each line. It’s more efficient to let the system flush itself periodically (which it has been designed to do efficiently).
    Because of this, use of the ‘\n’ character is typically preferred instead. The ‘\n’ character moves the cursor to the next line of the console, but doesn’t request a flush
    */

    std::cout << "Enter a number: "; // ask user for a number
    int y{};                         // define variable x to hold user input
    std::cin >> y;                   // get number from keyboard and store it in variable x
    std::cout << "You entered " << y << '\n';
    // Note the direction of the "stream"
    // cout is the console: We move the data to the console (<<)
    // cin is from the user into variable (>> y)

    // Try with
    //  1 letter: h -> 0 (because during initialization {} that will default = 0)
    //  fractional number: 0.3 (fractional part is dropped)
    //  negative number: -4 (displayed fine)
    //  String: John (get 0)
    //  very big number: 5e6 (get 2147483647) [max of int]
    //  small number + letters: 123abc (get only 123) numerical part

    return 0;
}
