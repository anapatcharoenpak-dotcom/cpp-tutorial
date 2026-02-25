#include <iostream>
#include <vector>

int main (){
    int students = 20;
    students += 1; // or students++ (for +1)
    //students -= 1; // or students-- (for -1)
    //students *= 2; (multiply by 2)
    //students /=2; (divide by 2)
    int remainder = students % 2;
    std::cout << students << '\n';
    std::cout << remainder;
    return 0;
}