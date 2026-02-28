#include <iostream>
#include <cmath>

int main(){
    // 23. RNG: by default, random in C++ is pseudo-random (not truly random) - if we want better random, we require #include <random>

    srand(time(NULL));
    
    int num1 = (rand() % 20) + 1;

    std::cout << num1 << '\n';
    
    if (num1 >= 13){
        std::cout << "You defeated demogorgon";
    } else {
        std::cout << "You were taken by demogorgon";
    }
    return 0;
    
    
}