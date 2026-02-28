#include <iostream>
#include <cmath>

int main(){
    // 23. RNG: by default, random in C++ is pseudo-random (not truly random) - if we want better random, we require #include <random>

    srand(time(NULL));
    int num = (rand() + 1) % 20;

    if(num >= 13){
        std::cout << "You defeated demogorgon with roll " << num;
    } else {
        std::cout << "You rolled " << num << " - demogorgon takes you to upside down! ";
    }
    return 0;
    
    
}