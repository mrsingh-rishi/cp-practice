#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>
using namespace std;
bool bulb[5][5];
void print()
{
    // cout << "================" << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (bulb[i][j])
            {
                cout << "1";
            }
            else
            {
                cout << "0";
            }
        }

        cout << endl;
    }
    // cout << "================" << endl;
}

int main()
{

    int grid[5][5];

    vector<pair<int, int>> odd;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> grid[i][j];
            if (grid[i][j] % 2 != 0 && grid[i][j] != 0)
            {
                odd.push_back(make_pair(i, j));
            }
        }
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            bulb[i][j] = true;
        }
    }

    for (auto p : odd)
    {
        int i = p.first;
        int j = p.second;
        // cout << i << " " << j << endl;
        // if (i == 2 && j == 2)
        // {
        //     cout << bulb[i][j] << "BEFOR Button pressed" << endl;
        // }
        bulb[i][j] = !bulb[i][j];
        // if (i == 2 && j == 2)
        // {
        //     cout << bulb[i][j] << "AFTER Button pressed" << endl;
        // }
        // print();
        int row[] = {0, 1, 0, -1};
        int col[] = {1, 0, -1, 0};

        for (int k = 0; k <= 3; k++)
        {
            int nr = i + row[k];
            int nc = j + col[k];
            if (nr < 3 && nc < 3 && nr >= 0 && nc >= 0)
            {
                // cout << "New Row: " << nr << " New Col: " << nc << endl;
                bulb[nr][nc] = !bulb[nr][nc];
            }
        }
        // cout << "AFTER ITERATION";
        // print();
    }
    // cout << "ANS";
    print();
    /**
     * Lights
     *
     * 0 1 0
     * 0 1 1
     * 1 0 0
     *
     * 1 0 1
       8 8 8
       2 0 3
     *
     */
    return 0;
}