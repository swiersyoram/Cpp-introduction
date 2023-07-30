#include <iostream>
#include "Person.h"

int doubleIt(int x) {
    return x * 2;
}

int main() {
    Person person("yoram", "Swiers");

    std::cout << person.getNumber() << " number" << std::endl;
    person.setNumber(5);
    std::cout << person.getNumber() << " number" << std::endl;

    int i1 = doubleIt(5);
//    std::cout << i1 << std::endl;
    return 0;
}

