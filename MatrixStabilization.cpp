#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void stabilizeMatrix(vector<vector<int>> &matrix, int n, int m)
{
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < m; ++j)
        {
            int max_value = 0;
            if (i > 0)
                max_value = max(max_value, matrix[i - 1][j]);
            if (i < n - 1)
                max_value = max(max_value, matrix[i + 1][j]);
            if (j > 0)
                max_value = max(max_value, matrix[i][j - 1]);
            if (j < m - 1)
                max_value = max(max_value, matrix[i][j + 1]);
            matrix[i][j] = min(matrix[i][j], max_value);
        }
    }
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, m;
        cin >> n >> m;

        vector<vector<int>> matrix(n, vector<int>(m));

        for (int i = 0; i < n; ++i)
        {
            for (int j = 0; j < m; ++j)
            {
                cin >> matrix[i][j];
            }
        }

        stabilizeMatrix(matrix, n, m);

        for (const auto &row : matrix)
        {
            for (int val : row)
            {
                cout << val << " ";
            }
            cout << endl;
        }
    }

    return 0;
}