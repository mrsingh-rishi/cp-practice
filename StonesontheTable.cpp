#include <string>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    long long int n;
    cin >> n;

    char arr[1000];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int min1 = 0;

    for (int i = 0; i + 1 < n; i++)
    {
        if (arr[i] == arr[i + 1])
        {
            min1++;
        }
    }

    cout << min1;
}