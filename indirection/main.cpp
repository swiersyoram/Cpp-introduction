#include <iostream>

// references
//int main() {
//  int a = 3;
//  std::cout << "a is " << a << std::endl;
//
//  int& rA  = a;
//  rA = 5;
//
//  std::cout << "a is " << a << std::endl;
//  std::cout << "rA is " << rA << std::endl;
//
//}

// pointers
int main() {
    int a = 3;
    std::cout << "a is " << a << std::endl;

    int* rA  = &a;
    *rA = 5;

    int b  = 100;

    rA = &b;

    std::cout << "a is " << a << std::endl;
    std::cout << "rA is " << *rA << std::endl;

}
