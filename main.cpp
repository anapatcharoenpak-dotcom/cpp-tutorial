#include <iostream>
#include <vector>

// e.g: typedef std::vector<std::pair<std::string, int>> pairlist_t; //VERY LONG DATATYPE -> create a nickname
typedef std::string text_t; // or using text_t = std::string

int main (){
    // typedef =    reserved keyword used to create an additional name
    //              (alias) for another datatype.
    //              New identifier for an existing type
    //              helps with readability and reduces typos (like a nickname)
    //              Use when there is a !!!clear benefit!!!
    //              Replaced with 'using' (work better w/ templates)

    // pairlist_t pairlist;
    text_t firstName = "Anapat";
    int age = 22;
    std::cout << firstName << '\n' << age <<'\n';
    return 0;
}