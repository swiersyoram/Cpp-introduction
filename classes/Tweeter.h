//
// Created by yoram on 30/07/2023.
//
#include "Person.h"

#ifndef CLASSES_TWEETER_H
#define CLASSES_TWEETER_H


class Tweeter : public Person {
private:
    std::string twitterHandle;

public:
    Tweeter(std::string first, std::string last, std::string handle);

    ~Tweeter();
};


#endif //CLASSES_TWEETER_H
