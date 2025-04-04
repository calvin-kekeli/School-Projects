#include <iostream>
#include <string>
using namespace std;

int main() {
    // Declaring variables
    int count = 10;
    double total = 150.75;
    char grade = 'A';
    bool isActive = false;
    string userName = "Bob123";

    // Printing values
    cout << "Count: " << count << endl;
    cout << "Total: " << total << endl;
    cout << "Grade: " << grade << endl;
    cout << "Active: " << isActive << endl;
    cout << "User Name: " << userName << endl;

    double n1 = 789.0;
    string text1 = to_string(n1);
    // becomes "789.000000"

    double n2 = 789.5;
    string text2 = to_string(n2);
    // becomes "789.500000"

    double n3 = 789.123;
    string text3 = to_string(n3);
    // becomes "789.123000"

    return 0;
}
