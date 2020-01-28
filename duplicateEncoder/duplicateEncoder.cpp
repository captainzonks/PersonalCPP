// duplicateEncoder.cpp
// 2020-01-28
// encode a string's characters with "(" if a char occurs once
// or ")" if a char occurs more than once (ignore capitalization)

#include <iostream>
#include <string>
#include <cctype>
#include <unordered_map>

std::string duplicate_encoder(const std::string& word)
{
    std::string encoded_string{};
    std::unordered_map <char, unsigned> counts;

    // build table of counts
    for (auto elem : word)
        counts[tolower(elem)]++;

    // build the string based off the counts
    for (auto elem : word)
        encoded_string += (counts[tolower(elem)] == 1) ? "(" : ")";

    return encoded_string;
}

int main()
{
    std::cout << duplicate_encoder("Supralapsarian") << std::endl;
}

