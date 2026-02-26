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
    char grade;
    std::cout << "Enter your grade (A-B): ";
    std::cin >> grade;

    switch(grade){
        case 'A':
            std::cout << "Excellent!";
            break;
        case 'B':
            std::cout << "Great!";
            break;
        default:
            std::cout << "Invalid letter grade!";
            break;
    }

    int number = 9;
    number % 2 == 1 ? std::cout << "odd" : std::cout << "even";

}