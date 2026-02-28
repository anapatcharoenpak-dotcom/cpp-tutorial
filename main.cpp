#include <iostream>
#include <cmath>

int main(){
    // 19: do while loop - do once if true then do again 
    int num;

    do{
        std::cout << "Enter a position number: ";
        std::cin >> num;
    }while(num < 0);

    std::cout << "The number is " << num;
}