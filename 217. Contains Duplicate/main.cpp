#include <vector>
#include <unordered_set>

using namespace std;

class Solution
{
public:
  bool containsDuplicate(vector<int> &nums)
  {
    unordered_set<int> uniqueSet;

    for (auto num : nums)
    {
      if (uniqueSet.find(num) != uniqueSet.end())
      {
        return true;
      }
      uniqueSet.insert(num);
    }

    return false;
  }
};