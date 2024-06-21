#include <string>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

bool checkPrime(int n)
{
    if (n == 1)
        return false;
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}

int main()
{
    long long int n, m;
    cin >> n >> m;

    if (!checkPrime(m))
    {
        cout << "NO";
        return 0;
    }
    bool flag = true;
    for (int i = n + 1; i < m; i++)
    {
        if (checkPrime(i))
        {
            flag = false;
        }
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