// getNextLetter
// 2020-02-10
/*
Have the function LetterChanges(str) take the str parameter being passed
and modify it using the following algorithm. Replace every letter in the
string with the letter following it in the alphabet (ie. c becomes d, z becomes a).
Then capitalize every vowel in this new string (a, e, i, o, u)
and finally return this modified string.
*/

#include <iostream>
#include <string>
using namespace std;

string LetterChanges(string str)
{
    for (size_t i{}; i < str.length(); ++i)
    {
        if (isalpha(str[i]))
        {
            char c = str[i];
            static_cast<int> (c++);
            str[i] = c;
        }
    }

    for (size_t i{}; i < str.length(); ++i)
    {
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u')
        {
            str[i] = toupper(str[i]);
        }
    }

    return str;
}

int main()
{
    cout << LetterChanges("Hello there!");

    return 0;
}