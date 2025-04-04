#include <iostream>
#include <iomanip>

int main() { //declaration of values
    std::string intro = "Calculator App" ;
    double num1;
    double num2;
    double sum;
    double difference;
    double product;
    double division;

    //accepting inputs
    std::cin >> num1 ;
    std::cin >> num2 ;

    //calculations
    sum = num1 + num2 ;
    difference = num1 - num2 ;
    product = num1 * num2 ;
    division = num1 / num2 ;

    //printing of outputs (to 2 dp)
    std::cout << intro << std::endl;
    std::cout << std::fixed << std::setprecision(2) << "Sum: " << sum <<  std::endl;
    std::cout << std::fixed << std::setprecision(2) << "Difference: " << difference <<  std::endl;
    std::cout << std::fixed << std::setprecision(2) << "Product: " << product <<  std::endl;
    std::cout << std::fixed << std::setprecision(2) << "Division: " << division <<  std::endl;

    return 0;
}