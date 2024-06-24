#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
#include <set>

using namespace std;

int main()
{
    string str1, str2;
    cin >> str1 >> str2;

    int i = 0, j = 0;
    transform(str1.begin(), str1.end(), str1.begin(), ::tolower);
    transform(str2.begin(), str2.end(), str2.begin(), ::tolower);

    if (str1 < str2)
    {
        cout << -1;
        return 0;
    }
    else if (str1 == str2)
    {
        cout << 0;
        return 0;
    }
    cout << 1;
    return 0;
}