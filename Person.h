//
// Created by xxvms on 11/04/18.
//

#ifndef OPERATOROVERLOAD_PERSON_H
#define OPERATOROVERLOAD_PERSON_H


#include <string>

class Person {
private:
    std::string name;
    std::string surname;
    int arbitraryNumber;
public:
 //   Person();
    Person(std::string name1, std::string surname1, int number1);
    std::string GetName();
    int GetNumber()const;
    ~Person() = default;


    /*inline bool operator< (const Person& p1) {

        return arbitraryNumber < p1.arbitraryNumber;
    };*/


};


#endif //OPERATOROVERLOAD_PERSON_H

inline bool operator<( const Person& p0, const Person& p1)  {
    return p0.GetNumber() < p1.GetNumber();
}

inline bool operator <(const int i, const Person& person){
    return i < person.GetNumber();
}