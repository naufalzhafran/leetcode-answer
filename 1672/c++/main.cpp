#include <iostream>
#include <vector>

using namespace std;

int maximumWealth(vector<vector<int>> &accounts)
{
    int res = 0;

    for (int i = 0; i < accounts.size(); i++)
    {
        int sum = 0;
        for (int j = 0; j < accounts[i].size(); j++)
        {
            sum += accounts[i][j];
        }
        res = max(res, sum);
    }

    return res;
}

int main()
{
    vector<vector<int>> input{
        {1, 2, 3},
        {2, 3, 4},
    };

    cout << maximumWealth(input) << endl;
};