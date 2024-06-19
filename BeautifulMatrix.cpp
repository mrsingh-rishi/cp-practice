#include <iostream>

using namespace std;

int main()
{
    int n = 5;

    int a[6][6];
    int x = -1, y = -1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cin >> a[i][j];

            if (a[i][j] == 1)
            {
                x = i;
                y = j;
            }
        }
    }

    cout << abs(x - 3) + abs(y - 3);

    return 0;
}