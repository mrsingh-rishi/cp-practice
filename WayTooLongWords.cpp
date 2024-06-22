#include <iostream>
#include <vector>
#include <utility>
#include <climits>
#include <sstream>
#include <string>
#include <algorithm>
#include <set>
using namespace std;

int arr[100000 + 5][5];

int main()
{
    int n;
    cin >> n;
    string arr[1000];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (arr[i].size() > 10)
        {
            arr[i] = arr[i][0] + to_string(arr[i].size() - 2) + arr[i][arr[i].size() - 1];
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << endl;
    }
}