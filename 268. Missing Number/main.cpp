#include <vector>

using namespace std;

class Solution
{
public:
    int missingNumber(vector<int> &nums)
    {
        int arrSize = nums.size();
        int actualSum = 0;
        int arrSum = 0;
        for (int i = 0; i <= arrSize; i++)
        {
            if (i < arrSize)
            {
                arrSum += nums[i];
            }

            actualSum += i;
        }

        return actualSum - arrSum;
    }
};