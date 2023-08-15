//
// Created by yoram on 15/08/2023.
//

#include "Person.h"

void Person::addResource() {

    pResource.reset();
    pResource = std::make_shared<Resource>("Resource for " + getName());
}

Person::Person(std::string firstName, std::string lastName, int arbitrary) : firstName(firstName), lastName(lastName),
                                                                             arbitraryNumber(arbitrary), pResource(
                nullptr) {

}

