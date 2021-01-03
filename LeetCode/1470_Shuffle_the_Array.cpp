#include <vector>
#include <iostream>
#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
  vector<int> shuffle(vector<int> nums, int n)
  {
    vector<int> arr(2 * n,0);
    for (int i = 0; i < n; i++)
    {
      arr[2 * i] = nums[i];
      arr[2 * i + 1] = nums[n + i];
    }
    for (int i = 0; i < arr.size(); i++)
    {
      cout << arr[i] << " ";
    }
    return arr;
  }
};

int main()
{
  vector<int> p;
  int n, input;
  cin >> n;
  while (cin >> input && input != 9999)
    p.push_back(input);
  Solution s;
  s.shuffle(p, n);
  return 0;
}