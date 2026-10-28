/*
[-1, 1, 2, 3, 4, 5]
[1, 0, 0, 0, 0, 0]
  1. sort
  2. skip all nonnegative integers
*/

#include <iostream>
#include <vector>

using namespace std;

int solution(vector<int> nums) {
  int n = nums.size();
  vector<int> list(n, 0);

  for (int i = 0; i < n; i++) {
    if (nums[i] > 0) {
      list[nums[i] - 1] = nums[i];
    }
  }

  for (int i = 0; i < n; i++) {
    if (list[i] == i + 1)
      continue;
    else
      return i + 1;
  }

  return n + 1;
}

int main() {
  int ahmed = 5;
  vector<int> nums = {-5, -10, 0, -3};
  cout << solution(nums);
}