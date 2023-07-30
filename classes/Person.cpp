#include <iostream>
#include <utility>
#include "Person.h"

std::string Person::getName() {
    return first;
}

Person::Person() {
    std::cout << "Constructing" << std::endl;
}

Person::Person(std::string first, std::string last):first(std::move(first)),last(std::move(last)) {

}
