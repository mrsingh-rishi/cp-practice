#include <iostream>
#include <vector>
#include <utility>
#include <climits>
using namespace std;
int main()
{
    int n;
    cin >> n;

    int arr[10000];
    long double sum = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        sum += arr[i];
    }

    cout << (long double)sum / n;
}
