#include <iostream>
#include <vector>
#include <utility>
#include <climits>
#include <set>
using namespace std;

int main()
{
    set<char> set;

    string str;
    cin >> str;

    for (int i = 0; i < str.length(); i++)
    {
        set.insert(str[i]);
    }

    if (set.size() % 2 == 0)
    {
        cout << "CHAT WITH HER!";
    }
    else
    {
        cout << "IGNORE HIM!";
    }
}