#include <iostream>

int main() {
    double number;

    // Prompt user for input
    std::cout << "Enter a number: ";
    std::cin >> number;

    // Check if the number is positive, negative, or zero
    if (number > 0) {
        std::cout << number << " is a positive number." << std::endl;
    } else if (number < 0) {
        std::cout << number << " is a negative number." << std::endl;
    } else {
        std::cout << number << " is zero." << std::endl;
    }
    return 0;
}