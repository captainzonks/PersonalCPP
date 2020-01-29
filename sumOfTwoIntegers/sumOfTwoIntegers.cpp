// sumOfTwoIntegers.cpp
// 2020-01-29
// Given Two integers a & b, find The sum of them
// BUT You are not allowed to use the operators + and -

#include <iostream>

// recursive implementation
// of sum of bits x and y using
// bitwise XOR (^)
// and carry bit via AND (&)
// until no carry bits remain
int Add(int x, int y)
{
    if (y == 0)
        return x;
    else
        return Add(x ^ y, (x & y) << 1);
}

int main()
{
    std::cout << Add(10, 20) << std::endl;

    return 0;
}

