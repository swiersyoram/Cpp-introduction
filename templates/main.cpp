#include <iostream>
#include "Accum.h"

int main() {
    Accum<int> integers(0);
    integers += 1;

    std::cout << integers.GetTotal() << std::endl;
    return 0;
}
