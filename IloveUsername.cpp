#include <iostream>
#include <vector>
#include <utility>
#include <climits>
using namespace std;

int arr[100000 + 5];

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int max = arr[0];
    int min = arr[0];

    int count = 0;
    for (int i = 0; i < n; i++)
    {
        int a = arr[i];
        // cout << "Befor ";
        // cout << "MAX: " << max;
        // cout << " MIN: " << min;
        // cout << endl;
        if (max < a)
        {
            max = a;
            count++;
        }
        if (min > a)
        {
            min = a;
            count++;
        }
        // cout << "After ";
        // cout << "MAX: " << max;
        // cout << " MIN: " << min;
        // cout << endl;
    }
    cout << count;
}

/**
 *
 *
 * 5 - n
 *
 * 100 50 200 150 200
 *
 * count = 2
 *
 * >
 * <
 *
 * max = 200
 * min = 50
 *
 *
 */