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

string FindIntersection(string strArr[])
{

    int a = 0, b = 0;
    string res = "";

    for (size_t i = 0; i < strArr[0].length(); i++) {
        if (strArr[0].find(',', i) != string::npos) {
            a = stoi(strArr[0].substr(i, strArr[0].find(',', i) - i));
            i = strArr[0].find(',', i);
        }
        else {
            a = stoi(strArr[0].substr(i));
            i = strArr[0].length();
        }
        for (size_t j = 0; j < strArr[1].length(); j++) {
            if (strArr[1].find(',', j) != string::npos) {
                b = stoi(strArr[1].substr(j, strArr[1].find(',', j) - j));
                j = strArr[1].find(',', j);
            }
            else {
                b = stoi(strArr[1].substr(j));
                j = strArr[1].length();
            }
            if (a == b) {
                res.append(to_string(a) + ",");
                break;
            }
            if (b > a) break;
        }
    }

    if (res.empty())
        return "false";
    else {
        res.erase(res.begin() + res.length() - 1);
        return res;
    }

}

int main()
{

    string A[]{ "1, 3, 4, 7, 13", "1, 2, 4, 13, 15" };
    cout << FindIntersection(A);
    return 0;

}