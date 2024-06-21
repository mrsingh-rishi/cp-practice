#include <iostream>
#include <vector>
#include <utility>
#include <climits>
using namespace std;
int main()
{
    int n;
    cin >> n;

    int arr[10000];
    int minV = INT_MAX;
    int maxV = INT_MIN;
    int maxP = -1, minP = -1;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];

        if (arr[i] <= minV)
        {
            minV = arr[i];
            minP = i + 1;
        }
        if (arr[i] > maxV)
        {
            maxV = arr[i];
            maxP = i + 1;
        }
    }

    if (maxP == 0 && minV == n - 1)
    {
        cout << 0;
        return 0;
    }
    if (maxP < minP)
    {
        cout << abs(minP - (n)) + abs(maxP - 1);
        return 0;
    }
    cout << abs(minP - (n)) + abs(maxP - 1) - 1;
}
// 12 312 534 3 12 