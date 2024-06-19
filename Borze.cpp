#include <iostream>

using namespace std;

int helper(string st)
{
    if (st == "--")
    {
        return 2;
    }
    else if (st == "-.")
    {
        return 1;
    }

    return 0;
}

int main()
{
    string str;
    cin >> str;

    if (str.size() < 2)
    {
        cout << helper(str);
        return 0;
    }
    string temp = "";
    for (int i = 0; i < str.size(); i++)
    {
        temp += str[i];
        if (temp == ".")
        {
            cout << helper(temp);
            temp = "";
        }
        else if (temp == "-.")
        {
            cout << helper(temp);
            temp = "";
        }
        else if(temp == "--")
        {
            cout << helper(temp);
            temp = "";
        }
    }
}