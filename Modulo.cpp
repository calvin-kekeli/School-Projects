#include <iostream>
#include <cmath>

int main () {
    //initialization
    int a = 9;
    double b = 2.6;
    int c = 11;

    //calculations
    int d = fmod (9, 2);
    int e = fmod (9, 3);
    double f = fmod (2.6, 1.5);
    double g = fmod (2.6, 3.9);
    int h = fmod (11, 10);

    //declaration
    std::cout << "a = " << a << std::endl;
    std::cout << "b = " << b << std::endl;
    std::cout << "c = " << c << std::endl;
    std::cout << "d = " << d << std::endl;
    std::cout << "e = " << e << std::endl;
    std::cout << "f = " << f << std::endl;
    std::cout << "g = " << g << std::endl;
    std::cout << "h = " << h << std::endl;

    //inputs
    int x, y;
    float sum;
    std::cout << "Typa a number:  " << std::endl;
    std::cin >> x ;
    std::cout << "Type another number:  " << std::endl;
    std::cin >> y ;
    sum = x + y;
    getline (cin, sum);
    std::cout << "The sum is:  " << sum ;

    return 0;
}
