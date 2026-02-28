#include <iostream>
#include <cmath>

int main(){
    // 18: while loop
    std::string name;
  
    while(name.empty()){
        std::cout << "Enter your name: ";
        std::getline(std::cin, name);
    }
    
    std::cout << "Hello " << name;
    return 0;
}