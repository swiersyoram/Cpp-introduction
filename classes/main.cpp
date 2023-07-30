#include <iostream>
#include "Person.h"
#include "Tweeter.h"
#include "status.h"

int main() {

   Person person("yoram", "swiers");
    Tweeter tweeter("lukas", "swiers", "yoramswiers");
    Status status = Status::Ok;
    Status status1 = Status::Error;


    std::cout << tweeter.getName() << std::endl;
    std::cout << status << std::endl;
    return 0;
}
