// countingDuplicates.cpp
//

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
    vector<char> seenLetters{};

    if (in != "" && in != " ")
    {
        for (size_t i{}; i != input.length(); ++i)
        {
            for (size_t j{ i + 1 }; j != input.length(); ++j)
            {
                if (tolower(input[i]) == tolower(input[j]))
                {
                    int seenLetterCount{};
                    seenLetters.push_back(tolower(input[i]));
                    for (size_t k{}; k != input.length(); ++k)
                    {
                        if (tolower(input[k]) == seenLetters[seenLetterCount])
                        {
                            input.erase(k, 1);
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

    cout << duplicateCount("ABBA");
}






// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu
