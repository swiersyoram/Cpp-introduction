//
// Created by yoram on 15/08/2023.
//

#ifndef MEMORY_MANAGEMENT_PERSON_H
#define MEMORY_MANAGEMENT_PERSON_H

#include "iostream"
#include "Resource.h"
#include "memory"

class Person {
private:
    std::string firstName;
    std::string lastName;
    int arbitraryNumber;
    std::shared_ptr<Resource> pResource;

public:
    Person(std::string firstName, std::string lastName, int arbitrary);

    std::string getName() const {return firstName + " " + lastName;};
    int getNumber() const {return arbitraryNumber;};

    void setNumber(int number) { arbitraryNumber = number;};
    void setFirstName(std::string name) {firstName = name;};
    void addResource();
    std::string getResourceName() const {return pResource ? pResource->GetName():"";};
};


#endif //MEMORY_MANAGEMENT_PERSON_H
