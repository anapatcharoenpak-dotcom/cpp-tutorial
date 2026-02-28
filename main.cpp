#include <iostream>
#include <cmath>

int main(){
    // 11. If statement - easy (already learnt)
    // 12. Switch statement - easy (already learnt)
    // 13. calculator
    // 14. ternary operator: condition ? expression1 (true) : expression 2 (false); 
    // 15. logical operator:
    // && (and), || (or), ! (negation)
    // 16. (exercise 2): temperature conversion.
    // 17. Useful String Method - at, append, insert, find

    std::string name;

    std::cout << "Enter your name: ";
    std::getline(std::cin, name);
    
    std::cout << name.append("@gmail.com");

    std::cout << "Your username is now: " << name;
    
    return 0;
}