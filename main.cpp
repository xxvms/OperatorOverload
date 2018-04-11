#include <iostream>
#include "Person.h"



int main() {

    Person person1 ("Spider", "Man", 143);
    Person person2 ("Peppa", "Pig", 345);
    std::cout << "person1 is ";

    if (!(person1 < person2)){
        std::cout << "not";
    }
    std::cout << " less than person2\n";

    std::cout << "300 is \n";
    if(!(300 < person1)){
        std::cout << "not ";
    }
    std::cout << "less then person1\n";

    return 0;
}