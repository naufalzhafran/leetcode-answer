#include <vector>

using namespace std;

class Solution
{
public:
  int findLengthOfLCIS(vector<int> &nums)
  {
    int res = 1;
    int curr = 1;
    int i = 1;

    while (i < nums.size())
    {
      if (nums[i] > nums[i - 1])
      {
        curr++;
        i++;
      }
      else
      {
        curr = 1;
        i++;
      }
      res = max(res, curr);
    }
    return res;
  }
};