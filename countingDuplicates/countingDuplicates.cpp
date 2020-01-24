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
    size_t count{};
    vector<char> seenLetters{};

    if (in != "" && in != " ")
    {
        for (size_t i{}; i != strlen(in); ++i)
        {
            for (size_t j{ i + 1 }; j != strlen(in); ++j)
            {
                if (tolower(in[i]) == tolower(in[j]))
                {
                    for (size_t k{}; k != size(seenLetters); ++k)
                    {
                        if (tolower(in[i]) != tolower(seenLetters[k]))
                        {
                            seenLetters.push_back(tolower(in[i]));
                            count++;
                        }
                        else
                            continue;
                    }
                }
            }
        }
        return count;
    }

    return 0;
};


int main()
{

    cout << duplicateCount("Indivisibility");
}






// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu
