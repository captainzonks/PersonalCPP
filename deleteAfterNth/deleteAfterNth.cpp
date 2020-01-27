// deleteAfterNth.cpp
// 2020-01-27
// takes an array of integers and an "n" int value
// and reproduces the array with each integer only
// reproduced "n" number of times

#include <iostream>
#include <vector>
#include <map>

using std::cout;
using std::endl;

std::vector<int> deleteNth(std::vector<int> arr, int n)
{
    std::map<int, int> counts;
    std::vector<int> newArr;

    for (size_t i{}; i < arr.size(); ++i)
    {
        if (counts[arr[i]] < n)
        {
            newArr.push_back(arr[i]);
        }
        ++counts[arr[i]];
    }

    return newArr;
};

void display(std::vector<int> arr)
{
    std::cout << "[ ";
    for (size_t i{}; i != arr.size(); ++i)
    {
        std::cout << arr[i] << " ";
    }
    std::cout << "]" << std::endl;
}

int main()
{
    display(deleteNth({ 11, 12, 11, 27, 11, 33, 11, 95, 33, 27, 12, 12 }, 2));
}