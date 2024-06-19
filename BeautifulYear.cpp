#include <iostream>

using namespace std;

bool helper(int n)
{
    int arr[10] = {0};

    while (n != 0)
    {
        int rem = n % 10;
        arr[rem]++;
        n /= 10;
    }

    for (int i = 0; i < 10; i++)
    {
        if (arr[i] > 1)
        {
            return false;
        }
    }

    return true;
}

int main()
{
    int n;
    cin >> n;

    for (int i = n + 1; true; i++)
    {
        if (helper(i))
        {
            cout << i;
            break;
        }
    }

    return 0;
}