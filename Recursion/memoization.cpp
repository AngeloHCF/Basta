#include <iostream>
#include <unordered_map>

using namespace std;

unordered_map<int, int> memo;

int fibonnaci(int n) {
  if (n == 0)
    return 0;
  if (n == 1)
    return 1;

  // check if we already calculated fibonacci(n)
  if (memo.find(n) != memo.end())
    return memo[n];

  // calculate and store the result
  memo[n] = fibonnaci(n - 1) + fibonnaci(n - 2);

  return memo[n];
}

int main() { cout << fibonnaci(6); }