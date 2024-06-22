#include <iostream>
#include <vector>
#include <utility>
#include <climits>
#include <set>
using namespace std;

int arr[1000];

void helper(int state, string s)
{
    for (int i = 0; i < s.size(); i++)
    {
        int index = s[i] - 65;
        if (state == 0)
        {
            // cout<<"INSIDE IF";
            arr[index]++;
        }
        else
        {
            // cout<<"INSIDE else";
            arr[index]--;
        }
    }
}

void print()
{
    cout << "================================================";
    for (int i = 65; i <= 90; i++)
    {
        cout << arr[i] << " ";
    }

    cout << "================================================" << endl;
}

int main()
{

    string s1, s2, s3;

    cin >> s1 >> s2 >> s3;

    for (int i = 65; i <= 90; i++)
    {
        arr[i] = 0;
    }

    // print();
    helper(0, s1);
    // print();

    helper(0, s2);
    // print();
    helper(1, s3);
    // print();

    bool flag = true;
    for (int i = 0; i < 26; i++)
    {
        if (arr[i] != 0)
        {
            flag = false;
            break;
        }
    }

    if (flag)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}

/**
 *
 *
 *  SANTACLAUS
    DEDMOROZ
    SANTAMOROZDEDCLAUS

    S - 0
    A - 0
    N - 0
    T - 0
    C - 0
    L - 0
    U - 0
    D - 0
    E - 0
    M - 0
    O - 0
    R - 0
    Z - 0

 */