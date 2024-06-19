#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int x = 0, y = 0, z = 0;
    for (int i = 0; i < n; i++)
    {
        int tempX, tempY, tempZ;
        cin >> tempX >> tempY >> tempZ;
        x += tempX;
        y += tempY;
        z += tempZ;
    }

    if (x == 0 && y == 0 && z == 0)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
    return 0;
}