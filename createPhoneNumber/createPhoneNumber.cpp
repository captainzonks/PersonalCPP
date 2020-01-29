// createPhoneNumber.cpp
// 2020-01-29
// given an array of 10 integers
// create a function that outputs a formatted phone number

#include <iostream>
#include <string>

std::string createPhoneNumber(const int arr[10])
{
    char buf[15];
    snprintf(buf, sizeof(buf), "(%d%d%d) %d%d%d-%d%d%d%d", arr[0], arr[1], arr[2], arr[3], arr[4], arr[5], arr[6], arr[7], arr[8], arr[9]);
    return buf;
}

int main()
{
    const int arr[]{ 1, 2, 3, 4, 5, 6, 7, 8, 9, 0 };

    std::cout << createPhoneNumber(arr) << std::endl;
    
    return 0;
}