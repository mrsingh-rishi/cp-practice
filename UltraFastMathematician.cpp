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
    string n, m;
    cin >> n >> m;

    string ans = "";
    int i = n.size() - 1, j = m.size() - 1;
    for (; i >= 0 && j >= 0; i--, j--)
    {
        int a = n[i] - '0';
        int b = m[j] - '0';
        int sum = a + b;
        // cout << sum << endl;
        if (sum == 2 || sum == 0)
        {
            ans += "0";
        }
        else
        {
            ans += "1";
        }
    }
    for (; i >= 0; i--)
    {
        char a = n[i];
        ans += a;
    }

    for (; j >= 0; j--)
    {
        char a = m[i];
        ans += a;
    }

    reverse(ans.begin(), ans.end());
    cout << ans;
}