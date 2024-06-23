#include <string>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--){
        int a, b, c;
        cin >> a >> b >> c;

        int sum1 = abs(a - a) + abs(c - a) + abs(b - a);
        int sum2 = abs(a - b) + abs(c - b) + abs(b - b);
        int sum3 = abs(a - c) + abs(c - c) + abs(b - c);
        int minAns = min(min(sum1, sum2), sum3);
        cout<< minAns << endl;
    }
}