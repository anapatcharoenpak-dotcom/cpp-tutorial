#include <iostream>
#include <string>

int main(){
    // 8. Character and String Input.
    std::string name;
    std::string fullName;

    std::cout << "What's your name?: ";
    std::getline(std::cin, name);

    std::cout << "What's your fullname?: ";
    std::getline(std::cin, fullName);

    std::cout << "Hello " << name << " " << fullName;

    return 0;
}