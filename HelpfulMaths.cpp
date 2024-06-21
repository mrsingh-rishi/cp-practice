#include <iostream>
#include <vector>
#include <utility>
#include <climits>
#include <sstream>
#include <string>
#include <algorithm>
using namespace std;

vector<int> split(const string &str, char delimiter)
{
    vector<int> tokens;
    stringstream ss(str);
    string token;

    while (getline(ss, token, delimiter))
    {
        tokens.push_back(stoi(token));
    }

    return tokens;
}

int main()
{
    string str;
    cin >> str;

    vector<int> arr = split(str, '+');

    sort(arr.begin(), arr.end());

    string ans = "";

    for (int i = 0; i < arr.size(); i++)
    {
        ans += to_string(arr[i]);

        if(i != arr.size() - 1){
            ans += "+";
        }
    }

    cout << ans;
}