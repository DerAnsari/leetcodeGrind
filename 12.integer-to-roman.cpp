// @leet imports start
#include <bits/stdc++.h>
#include <string>
#include <string_view>
#include <utility>
using namespace std;
// @leet imports end

// @leet start
class Solution {
public:
  string intToRoman(int num) {
    const pair<int, string_view> romanTable[]{
        {1000, "M"}, {900, "CM"}, {500, "D"}, {400, "CD"}, {100, "C"},
        {90, "XC"},  {50, "L"},   {40, "XL"}, {10, "X"},   {9, "IX"},
        {5, "V"},    {4, "IV"},   {1, "I"}};

    string result;
    result.reserve(16);

    for (const auto &[val, symbol] : romatTable) {
      if (num == 0)
        break;

      while (num >= val) {
        result += symbol;
        num -= val;
      }
    }

    return result;
  }
};
// @leet end
