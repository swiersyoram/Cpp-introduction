//
// Created by yoram on 15/08/2023.
//

#ifndef MEMORY_MANAGEMENT_RESOURCE_H
#define MEMORY_MANAGEMENT_RESOURCE_H

#include <string>


class Resource {
private:
    std::string name;

public:
    Resource(std::string n);
    ~Resource();
    std::string GetName()const {return name;};

};


#endif //MEMORY_MANAGEMENT_RESOURCE_H
