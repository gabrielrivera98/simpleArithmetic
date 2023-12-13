// This program takes two double inputs from a user and a char operator to then calculate an equation
#include "getDouble.h"
#include "getOperation.h"
#include "arithmetic.h"
#include <iostream>



int main()
{

    double x {getDouble()};
    double y {getDouble()};
    char operation {getOperation()};
    double answer {arithmetic(x, y, operation)};

    std::cout << x << " " << operation << " " << y << " is: " << answer << std::endl;

    return 0;

}