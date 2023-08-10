#include <iostream>

bool isPrime(int x) {
    bool isPrime = true;
    for(int i=2; i <= x/i; i++){
        if(x%i == 0 ){
            isPrime = false;
            break;
        }
    }

    return isPrime;
}

int main() {

//    int i = 0;
//    i += 2;
//    i*=3;
//    i -=2;
//    i /= 4;
//
//    int j = i++;
//
//    j = ++i;
//    j = i--;
//    j = --i;
//    i = 2;
//    j = 0;
//
//    while(i<101)
//        j += isPrime(i++) ? 1 : 0;
//    std::std::cout << j << " amount of prime numbers up to 100" << std::std::endl;


    unsigned int num1 = 12; // Binary: 0000 1100
    unsigned int num2 = 9;  // Binary: 0000 1001

    // Bitwise AND
    unsigned int resultAND = num1 & num2; // Binary result: 0000 1000 (Decimal: 8)
    std::cout << "Bitwise AND: " << resultAND << std::endl;

    // Bitwise OR
    unsigned int resultOR = num1 | num2; // Binary result: 0000 1101 (Decimal: 13)
    std::cout << "Bitwise OR: " << resultOR << std::endl;

    // Bitwise XOR
    unsigned int resultXOR = num1 ^ num2; // Binary result: 0000 0101 (Decimal: 5)
    std::cout << "Bitwise XOR: " << resultXOR << std::endl;

    // Bitwise NOT
    unsigned int resultNOT = ~num1; // Binary result: 1111 0011 (Decimal: 243)
    std::cout << "Bitwise NOT: " << resultNOT << std::endl;

    // Left Shift
    unsigned int resultLeftShift = num1 << 2; // Binary result: 0011 0000 (Decimal: 48)
    std::cout << "Left Shift: " << resultLeftShift << std::endl;

    // Right Shift
    unsigned int resultRightShift = num1 >> 2; // Binary result: 0000 0011 (Decimal: 3)
    std::cout << "Right Shift: " << resultRightShift << std::endl;


    return 0;
}


