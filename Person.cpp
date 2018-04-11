//
// Created by xxvms on 11/04/18.
//

#include "Person.h"
//Person::Person()  {}

Person::Person(std::string name1, std::string surname1, int number1) : name(name1), surname(surname1), arbitraryNumber(number1) {}

std::string Person::GetName() {
    return name + " " + surname;
}

int Person::GetNumber() const {
    return arbitraryNumber;
}

//bool Person::operator<(const Person& p0, const Person& p1) {
//
//}
