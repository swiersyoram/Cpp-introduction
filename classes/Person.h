//
// Created by yoram on 30/07/2023.
//
#include <iostream>

#ifndef CLASSES_PERSON_H
#define CLASSES_PERSON_H


class Person {
private:
    std::string first;
    std::string last;


public:
    Person();
    Person( std::string first, std::string last);
    std::string getName();

};


#endif //CLASSES_PERSON_H
