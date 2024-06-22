#include <iostream>
#include <vector>
#include <utility>
#include <climits>
#include<set>
using namespace std;

int arr[100000 + 5][5];

int main()
{
    set<long long int> set;
    int t = 4;
    while(t--){
        long long int n;
        cin>>n;
        set.insert(n);
    }

    cout<<4 - set.size();

}