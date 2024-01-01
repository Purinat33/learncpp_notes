#include <iostream>

/*

Write a short program to simulate a ball being dropped off of a tower. To start, the user should be asked for the height of the tower in meters. Assume normal gravity (9.8 m/s2), and that the ball has no initial velocity (the ball is not moving to start). Have the program output the height of the ball above the ground after 0, 1, 2, 3, 4, and 5 seconds. The ball should not go underneath the ground (height 0).

Use a function to calculate the height of the ball after x seconds. The function can calculate how far the ball has fallen after x seconds using the following formula: 

    distance fallen = gravity_constant * x_seconds2 / 2

*/

#define G_CONSTANT 9.8 // We haven't started const data type yet so

double distance_fallen(double second_passed)
{
    return static_cast<double>( ( G_CONSTANT * (second_passed * second_passed) )  / 2);
}

int main()
{
    int height{};
    std::cout << "Enter height in metres: ";   
    std::cin >> height;
    double fallen{0};

    int second{0};

    while(fallen <= height)
    {
        if (static_cast<double>(height - distance_fallen(second)) <= 0) {
            std::cout << "At T-" << second << ": The ball reach the ground\n";
            break;
        }


        std::cout << "At T-" << second << ". The ball has fallen " << distance_fallen(second) << " metres\n";
        std::cout << "Remaining distance to ground: " << static_cast<double>(height - distance_fallen(second)) << " metres" << '\n';

        fallen = static_cast<double>(height - distance_fallen(second));

        second += 1;
    }
}
