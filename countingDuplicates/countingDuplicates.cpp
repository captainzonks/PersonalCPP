// countingDuplicates.cpp
// 2020-01-25
// counts total duplicate characters in a string

#include <iostream>
#include <string>
#include <vector>

using std::cout;
using std::endl;
using std::vector;
using std::tolower;

size_t duplicateCount(const char* in)
{
    std::string input{ in };
    size_t count{};
    int seenCounter{};
    vector<char> seenLetters{};

    if (input != "" && input != " " && input.size() > 1)
    {
        for (size_t i{}; i != input.size() && input.size() > 1; ++i)
        {
            for (size_t j{ i + 1 }; j != input.size() && input.size() > 1; ++j)
            {
                if (tolower(input[i]) == tolower(input[j]) && tolower(input[i]) != ' ')
                {
                    char letter = tolower(input[i]);
                    for (size_t k{}; k != input.size() || input.size() == 0; ++k)
                    {
                        if (letter == tolower(input[k]))
                        {
                            input[k] = ' ';
                        }
                    }
                    ++count;
                }
            }
        }
        return count;
    }
    return 0;
};

int main()
{
    cout << duplicateCount("Indivisibility") << endl;// works
    cout << duplicateCount("Mississippi") << endl; // works
    cout << duplicateCount("aabbccddeeff") << endl; // works
    cout << duplicateCount("abbccddeef") << endl; // works
    cout << duplicateCount("testing this string") << endl; // works
}