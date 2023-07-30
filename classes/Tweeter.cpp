//
// Created by yoram on 30/07/2023.
//

#include "Tweeter.h"

Tweeter::Tweeter(std::string first, std::string last, std::string handle):Person(first, last), twitterHandle(handle) {
    std::cout << "Constructing tweeter " << twitterHandle << std::endl;
}

Tweeter::~Tweeter() = default;
