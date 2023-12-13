#include <iostream>

double arithmetic(double x, double y, char operation)
{
    if (operation == '+')
        return x + y;
    else if (operation == '-')
        return x - y;
    else if (operation == '*')
        return x * y;
    else if (operation == '/')
        return x / y;
    else
        std::cout << "That is an invalid operator.";
}