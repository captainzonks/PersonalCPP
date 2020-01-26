// deleteAfterNth.cpp
//

#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>

using std::cout;
using std::endl;

std::vector<int> deleteNth(std::vector<int> arr, int n)
{
    std::vector<int> newArr (arr.size());

    auto it = std::copy_if(arr.begin(), arr.end(), newArr.begin(), [n](int i) {
        for (size_t count{}; count < n; count++) 
            return i;
        });
    newArr.resize(std::distance(newArr.begin(), it));

    return newArr;
};

void display(std::vector<int> arr)
{
    std::cout << "[ ";
    for (size_t i{}; i != arr.size(); ++i)
    {
        std::cout << arr[i];
    }
    std::cout << "]" << std::endl;
}

int main()
{
    display(deleteNth({ 1, 1, 1, 1 }, 2));
}