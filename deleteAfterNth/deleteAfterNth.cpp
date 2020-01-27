// deleteAfterNth.cpp
// 2020-01-27
// takes an array of integers and an "n" int value
// and reproduces the array with each integer only
// appearing "n" number of times

#include <iostream>
#include <vector>
#include <unordered_map>

using std::cout;
using std::endl;

std::vector<int> deleteNth(std::vector<int> arr, int n)
{
    std::unordered_map<int, int> counts;
    std::vector<int> newArr;

    for (size_t i{}; i < arr.size(); ++i)
    {
        ++counts[arr[i]];
    }

    for (auto elem : counts)
    {
        if (elem.second > n)
        {
            for (int i{ n }; i != 0; --i)
            {
                newArr.push_back(elem.first);
            }
        }
        else
        {
            for (int i{ elem.second }; i != 0; --i)
            {
                newArr.push_back(elem.first);
            }
        }
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
    display(deleteNth({ 20, 37, 20, 21 }, 1));
}