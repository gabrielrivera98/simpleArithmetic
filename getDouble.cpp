#include <iostream>

double getDouble() {

    std::cout << "Enter a double value: ";
    double x{};
    std::cin >> x;

    return x;
}