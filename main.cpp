#include <iostream>

int main() {
    // 3. Constant 
    // The const keyword is used to declare a variable as constant, meaning its value cannot be changed after initialization.
    // convention: upper-case declaration.
    const int age = 22;
    // age = 23; // This would cause a compilation error because age is a constant
    std::cout << age;
    return 0;
}