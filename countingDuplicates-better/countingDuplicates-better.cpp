// countingDuplicates-better.cpp
// solution provided by CodeWars

#include <iostream>
#include <string>
#include <unordered_map>
#include <algorithm>

#include <cctype>

std::size_t duplicateCount(const char* in)
{
    std::unordered_map<char, unsigned> counts;

    for (const char* c = in; *c != '\0'; ++c)
    {
        ++counts[tolower(*c)];
    }

    return std::count_if(cbegin(counts), cend(counts), [](const auto& count) {
        return count.second > 1;
        });
}

int main()
{
    std::cout << duplicateCount("Indivisibility") << std::endl;
}