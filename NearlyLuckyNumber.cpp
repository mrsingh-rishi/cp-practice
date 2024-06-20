#include <string>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    long long int n, luckCount = 0;
    cin >> n;
    while (n != 0)
    {
        int rem = n % 10;
        if (rem == 4 || rem == 7)
        {
            luckCount++;
        }
        n /= 10;
    }
    if (luckCount == 0)
    {
        cout << "NO";
        return 0;
    }
    bool flag = true;
    while (luckCount != 0)
    {
        int rem = luckCount % 10;

        if (rem != 4 && rem != 7)
        {
            flag = false;
            break;
        }
        luckCount /= 10;
    }

    if (flag)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
}