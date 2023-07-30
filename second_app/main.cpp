#include <iostream>

int main() {
    std::string test = "0xF00";
//    int intValue = stoi(test, nullptr, 16);
    std::cout << test << std::endl;
    std::cout << static_cast<int>(test) << std::endl;
    return 0;
}
