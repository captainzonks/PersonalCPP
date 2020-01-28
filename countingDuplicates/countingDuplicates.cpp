// countingDuplicates.cpp
// 2020-01-25
// counts total duplicate characters in a string

#include <iostream>
#include <string>
#include <vector>

#include <unordered_map>
#include <cctype>
#include <algorithm>

using std::cout;
using std::endl;
using std::tolower;

size_t duplicateCount(const char* in)
{
    std::unordered_map<char, unsigned> counts;

    // for each character from in, check for null
    for (const char* c{ in }; *c != '\0'; ++c)
    {
        // increase count for each seen letter
        ++counts[tolower(*c)];
    }
    
    // return the count ONLY if the count is greater than 1 (find duplicates)
    return std::count_if(cbegin(counts), cend(counts), [](const auto& count) {
        return count.second > 1;
        });
};

int main()
{
    cout << duplicateCount("Indivisibility") << endl;// works
    cout << duplicateCount("Mississippi") << endl; // works
    cout << duplicateCount("aabbccddeeff") << endl; // works
    cout << duplicateCount("abbccddeef") << endl; // works
    cout << duplicateCount("testing this string") << endl; // works
}