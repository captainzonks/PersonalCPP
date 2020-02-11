// intersection
// 2020-02-10
// status: BROKEN

/*
Have the function FindIntersection(strArr) read the array of strings
stored in strArr which will contain 2 elements: the first element will
represent a list of comma-separated numbers sorted in ascending order,
the second element will represent a second list of comma-separated numbers
(also sorted). Your goal is to return a comma-separated string containing
the numbers that occur in elements of strArr in sorted order. If there is
no intersection, return the string false.
*/

#include <iostream>
#include <string>
using namespace std;

string FindIntersection(string strArr[]) {

    int count{};
    for (size_t i{}; i < strArr[0].size(); ++i)
    {
        if (isdigit(strArr[0][i]))
        {
            for (size_t j{}; j < strArr[1].size(); ++j)
            {
                if (strArr[0][i] == strArr[1][j])
                {
                    count++;
                }
            }
            if (count != 0)
            {
                strArr[0].erase(i, 1);
                count = 0;
            }
        }
    }

    return strArr[0];

}

int main() {

    string A[]{ "1, 3, 4, 7, 13", "1, 2, 4, 13, 15" };
    cout << FindIntersection(A);
    return 0;

}