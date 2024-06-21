#include <iostream>
#include <vector>
#include <utility>
#include <climits>
using namespace std;

bool arr[100000 + 5][5];

int findOpen(int size, int index)
{
    int o = 0, c = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i][index] == 1)
        {
            o++;
        }
    }

    return o;
}
int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i][0];
        cin >> arr[i][1];
    }

    int leftOpen = findOpen(n, 0);
    int leftClose = n - leftOpen;
    int rightOpen = findOpen(n, 1);
    int rightClose = n - rightOpen;

    int count = min(leftClose, leftOpen) + min(rightClose, rightOpen);

    cout << count;
}
