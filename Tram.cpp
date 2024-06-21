#include <iostream>
#include <vector>
#include <utility>
#include <climits>
using namespace std;

int arr[100000 + 5][5];

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i][0];
        cin >> arr[i][1];
    }

    int capacity = 0;
    int minCapacity = 0;

    for (int i = 0; i < n; i++)
    {
        int enter = arr[i][1];
        capacity += enter;
        int exit = arr[i][0];
        capacity -= exit;

        minCapacity = max(capacity, minCapacity);
    }

    cout << minCapacity;
}