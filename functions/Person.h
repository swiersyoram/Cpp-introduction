//
// Created by yoram on 30/07/2023.
//

#include <iostream>

#ifndef FUNCTIONS_PERSON_H
#define FUNCTIONS_PERSON_H


class Person {

private:
    std::string first;
    std::string last;
    int number;

public:
    Person(std::string first, std::string last){};
    ~Person(){};

    int getNumber(){
        return number;
    }

    void setNumber(int n){
        number = n;
    }



};


#endif //FUNCTIONS_PERSON_H
