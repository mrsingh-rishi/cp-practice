#include <iostream>
#include <vector>
#include <utility>
#include <climits>
using namespace std;

int c = 0;
bool damaged[100000 + 5];

void countDragon(int d, int n)
{
    for (int i = n; i <= d; i+=n)
    {
        if (!damaged[i])
        {
            // cout << i << endl;
            c++;
            damaged[i] = true;
        }
    }
}
int main()
{
    int k, l, m, n, d;
    cin >> k >> l >> m >> n >> d;
    for (int i = 1; i <= d; i++)
    {
        damaged[i] = false;
    }

    countDragon(d, k);
    countDragon(d, l);
    countDragon(d, m);
    countDragon(d, n);

    cout << c;
}

