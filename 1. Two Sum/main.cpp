#include <unordered_map>

using namespace std;

class Solution
{
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {
        unordered_map<int, int> helper_map;

        for (int i = 0; i < nums.size(); i++)
        {
            int complement = target - nums[i];

            if (helper_map.find(complement) != helper_map.end())
            {
                return {helper_map[complement], i};
            }

            helper_map[nums[i]] = i;
        }
        return {};
    }
};