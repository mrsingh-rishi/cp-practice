#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
#include <set>

using namespace std;

int main()
{
    int t;
    cin >> t;
    int count = 0;
    while (t--)
    {
        int a, b, c;
        cin >> a >> b >> c;

        int sum = a + b + c;

        if (sum >= 2)
        {
            count++;
        }
    }

    cout << count;
}