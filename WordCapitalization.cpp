#include <string>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    string str;
    cin >> str;


    // for (int i =0; i < str.size(); i++)
    // {
    //     if(str[i])
    // }
    if(str.size() > 0 && str[0] >= 'a' && str[0] <= 'z'){
        str[0] = str[0] - 32;
    }
    
    cout << str;
}