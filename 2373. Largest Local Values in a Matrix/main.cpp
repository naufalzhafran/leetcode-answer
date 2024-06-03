#include <vector>

using namespace std;

class Solution
{
public:
    vector<vector<int>> largestLocal(vector<vector<int>> &grid)
    {
        int n = grid.size();

        vector<vector<int>> rowMax(n);

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < (n - 2); j++)
            {
                int currMax = max(grid[i][j], max(grid[i][j + 1], grid[i][j + 2]));
                rowMax[i].push_back(currMax);
            }
        }

        vector<vector<int>> res(n - 2, vector<int>(n - 2));

        for (int j = 0; j < (n - 2); j++)
        {
            for (int i = 0; i < (n - 2); i++)
            {
                int currMax = max(rowMax[i][j], max(rowMax[i + 1][j], rowMax[i + 2][j]));
                res[i][j] = currMax;
            }
        }

        return res;
    }
};