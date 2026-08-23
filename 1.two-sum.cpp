// @leet imports start
#include <bits/stdc++.h>
#include <system_error>
#include <vector>
using namespace std;
// @leet imports end

// @leet start
class Solution {
public:
  vector<int> twoSum(vector<int> &nums, int target) {
    vector<int> results;
    for (int i{0}; i < nums.size(); i++) {
      for (int j{1}; j < nums.size() - 1; j++) {
        if (nums[i] + nums[j] == target) {
          results.push_back(i);
          results.push_back(j);
          return results;
        }
      }
    }
    return results;
  }
};
// @leet end
