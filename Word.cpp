#include <string>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    string str;
    cin >> str;

    int lowCount = 0;
    int upCount = 0;

    for (auto ch : str)
    {
        if (ch >= 'a' && ch <= 'z')
        {
            lowCount++;
        }
        else if (ch >= 'A' && ch <= 'Z')
        {
            upCount++;
        }
    }

    if (lowCount < upCount)
    {
        transform(str.begin(), str.end(), str.begin(), ::toupper);
    }
    else
    {
        transform(str.begin(), str.end(), str.begin(), ::tolower);
    }
    cout << str;
}