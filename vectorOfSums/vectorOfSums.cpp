// 2020-01-23
// vectorOfSums.cpp 
// creates a vector of sums
// where each value is the sum of itself and all previous values

#include <iostream>
#include <vector>

using namespace std;

std::vector<int> cumulativeSum(std::vector<int> array) {
    std::vector<int> sumArray{};
    int sum{};
    for (size_t i{}; i != array.size(); ++i) {
        sum += array[i];
        sumArray.push_back(sum);
    }
    return sumArray;
};

void display(std::vector<int> array) {
    cout << "[ ";
    for (auto i : array)
        cout << i << " ";
    cout << "]" << endl;
};

int main()
{
    std::vector<int> array{ 0, 4, 8 }; // initialize your values here

    display(cumulativeSum(array));

}