//
// Created by yoram on 15/08/2023.
//

#include "Resource.h"
#include <iostream>

Resource::Resource(std::string n):name(n) {
    std::cout << "constructing " << name << std::endl;
}

Resource::~Resource() {
    std::cout << "destructing " << name << std::endl;

}
