#include <iostream>
#include "Resource.h"
#include "Person.h"

int main() {
//    {
//        Resource localResource("local");
//        std::string localString = localResource.GetName();
//    }

    {
        Person Kate("Kate", "Gregory", 345);
        Kate.addResource();
        std::string s1 = Kate.getResourceName();
        Kate.addResource();
    }
    return 0;
}
