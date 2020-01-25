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
    int subCount{};
    int seenLetterCount{};
    vector<char> seenLetters{};

    if (input != "" && input != " " && input.size() != 0)
    {
        for (size_t i{}; i != input.size() && input.size() > 1; ++i)
        {
            if (subCount != 0 && i != 0)
            {
                i -= subCount;
                subCount = 0;
            }
            if (input.size() == 0)
                break;
            for (size_t j{ i + 1 }; j != input.size() && input.size() > 1; ++j)
            {
                if (subCount != 0 && j != 0)
                {
                    j = i + 1;
                    subCount = 0;
                }
                if (input.size() == 0)
                    break;
                if (tolower(input[i]) == tolower(input[j]))
                {
                    seenLetters.push_back(tolower(input[i]));
                    input.erase(i, 1);
                    if (j != 0)
                        --j;
                    ++subCount;
                    for (size_t k{}; k != input.size() && input.size() > 1; ++k)
                    {
                        if (input.size() != 0 && tolower(input[k]) == seenLetters[seenLetterCount])
                        {
                            input.erase(k, 1);
                            if (k != 0)
                                --k;
                            if (j != 0)
                                --j;
                        }
                    }
                    count++;
                    seenLetterCount++;
                }
            }
        }
        return count;
    }
    return 0;
};


int main()
{

    //cout << duplicateCount("Mississippi"); // works
    //cout << duplicateCount("aabbccddeeff"); // works
    cout << duplicateCount("abbccddeef"); // fails
}






// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu
