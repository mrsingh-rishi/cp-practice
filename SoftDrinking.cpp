#include <iostream>
#include <vector>
#include <utility>
#include <climits>
#include <set>
using namespace std;

int arr[1000];
int main(){

    int n, k , l, c, d, p, nl, np;
    
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;

    int totalDrink = k * l;
    int totalLimeSlice = c * d;


    int ans = min( totalDrink/(n * nl), min(totalLimeSlice/n, p/(n * np)));

    cout<<ans;

    return 0;
}