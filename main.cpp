#include <iostream>
#include <vector>

int main (){
    // 7. type conversion = conversion of a value of one data type to another
    // 7.1 implicit type conversion = automatic type conversion performed by the compiler
    // 7.2 explicit type conversion = manual type conversion performed by the programmer using casting

    double x = (int) 3.14;
    std::cout << x << "\n"; // explicit cast

    char y = 100;
    std::cout << y << "\n"; // explicit cast -> convert according to ASCII table

    // why do we use this

    int correct = 8;
    int questions = 10;
    double score = correct/(double)questions * 100; // note: questions doesn't permanently change to double type for every other line!
    std::cout << score << " %";

    return 0;
}