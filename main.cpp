#include <iostream>
#include <cmath>

int main(){
    // 10. Exercise 1: Calculating Hypothenus of right triangle.
    double a, b;
    std::cout << "Enter one side of right triangle a: ";
    std::cin >> a;

    std::cout << "Enter one side of right triangle b: ";
    std::cin >> b;

    double c = sqrt(pow(a, 2) + pow (b, 2));
    std::cout << "Hypothenus is " << c;
    return 0;
}