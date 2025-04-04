#include <iostream>

int main() {
    int month;
    std::cin >> month;
    std::string season = "Winter";
    
    // Write your code below
    std::string January = "1" ;
    std::string February = "2" ;
    std::string March = "3" ;
    std::string April = "4" ;
    std::string May = "5" ;
    std::string June = "6" ;
    std::string July = "7" ;
    std::string August = "8" ;
    std::string September = "9" ;
    std::string October = "10" ;
    std::string November = "11" ;
    std::string December = "12" ;

    switch (month) {
        case 12:
        case 1:
        case 2:
            season = "Winter" ;
            break ;
        case 3:
        case 4:
        case 5:
            season = "Spring" ;
            break ;
        case 6:
        case 7:
        case 8:
            season = "Summer" ;
            break ;
        case 9:
        case 10:
        case 11:
            season = "Autumn" ;
            break ;
        default:
            season = "Invalid month" ;
    }
    
    std::cout << season << std::endl;
    return 0;
}