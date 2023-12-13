#include <iostream>

char getOperation()
{
    std::cout << "Enter +, -, *, or /: ";
    char operation{};
    std::cin >> operation;

    return operation;
}