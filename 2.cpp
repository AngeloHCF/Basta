#include <iostream>
#include <vector>

using namespace std;

enum Direction {
  UP,
  DOWN,
  LEFT,
  RIGHT,
};

vector<vector<int>> solution(int n) {
  vector<vector<int>> ans(n, vector<int>(n, 0));
  Direction direction = Direction::RIGHT;
  int count = 1, j = 0, i = 0;
  while (true) {
    switch (direction) {
    case RIGHT:
      while (j + 1 != n && ans[i][j + 1] == 0) {
        ans[i][j] = count;
        count++;
        j++;
      }
      direction = Direction::DOWN;
      break;
    case DOWN:
      while (i + 1 != n && ans[i + 1][j] == 0) {
        ans[i][j] = count;
        count++;
        i++;
      }
      direction = Direction::LEFT;
      break;
    case UP:
      while (i - 1 != -1 && ans[i - 1][j] == 0) {
        ans[i][j] = count;
        count++;
        i--;
      }
      direction = Direction::RIGHT;
      break;
    case LEFT:
      // cout << "LEFT: " << count << "\n";
      while (j - 1 != -1 && ans[i][j - 1] == 0) {
        ans[i][j] = count;
        count++;
        j--;
      }
      direction = Direction::UP;
      break;
    }
    if (count >= (n * n)) {
      break;
    }
  }
  ans[i][j] = count;
  return ans;
}