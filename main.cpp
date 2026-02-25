#include <iostream>

int main() {
    // 2. variables and basic data types

    int x; //declaration of an integer variable named x
    x = 5; //assignment of the value 5 to the variable x

    int y = 6;
    int sum = x + y;


    std::cout << "x = " << x << '\n';
    std::cout << "y = " << y << '\n';
    std::cout << "sum = " << sum << '\n';

    // integer (whole number): age, year (if put decimal -> truncated)
    int age = 22;
    // double (floating-point number): price, weight
    double GPA = 4.00;
    // char (single character): grade, initial | single quote
    char grade = 'A';
    // bool (boolean value): isStudent, isRaining
    bool isStudent = true;
    // string (text): name, city | double quote
    std::string name = "Win.";

    // output
    std::cout << name;
    return 0;
}