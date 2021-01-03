#include <bits/stdc++.h>
// using namespace std;//collection of operators and definitions and functions 
class Solution
{
public:
  int findUnsortedSubarray(std::vector<int> &nums)
  {
    std::vector<int> temp = nums;
    int n = nums.size();
    sort(nums.begin(), nums.end());
    int length = 0;
    for (int i = n - 1; i > 0; --i)
    {
      if (nums[i] != temp[i])
      {
        for (int j = 0; j < i; j++)
        {
          if (nums[j] != temp[j])
          {
            length = i - j + 1;
            break;
          }
        }
        break;
      }
    }
    return length;
  }
};