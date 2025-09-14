#include <iostream>
#include "hw1.h"

int main()
{
    std::cout <<sumOfSquares(123) <<std::endl;

    std::cout << IsPalindrone(1234) << std::endl;

    std::cout << IsPalindrone(-12321) << std::endl;

    auto a = 123;
    reverseNumber(a);
    std::cout << a << std::endl;

    auto b = -321;

    reverseNumber(b);

    std::cout << b << std::endl;

    printPowerTable(5);

    printNumberDiamond(4);
}
