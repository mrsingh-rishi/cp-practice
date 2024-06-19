#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int t;
    cin >> t;
    char que[1000];
    int boysPos[1000];
    int boysCount = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> que[i];
        if (que[i] == 'B')
        {
            boysPos[boysCount] = i;
            boysCount++;
        }
    }

    for (int i = 0; i < t; i++)
    {
        for (int j = 0; j < boysCount; j++)
        {
            int boyLoc = boysPos[j];
            if (boyLoc + 1 < n && que[boyLoc + 1] == 'G')
            {
                swap(que[boyLoc + 1], que[boyLoc]);
                boysPos[j]++;
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << que[i];
    }

    return 0;
}