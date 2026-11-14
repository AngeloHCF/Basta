#include <iostream>
#include <string>

using namespace std;

bool palindrome(string str) {
  if (str.size() <= 1)
    return true;

  if (str[0] != str[str.size() - 1])
    return false;

  return palindrome(str.substr(1, str.size() - 2));
}

int main() {
  string str = "";
  cout << boolalpha << palindrome(str);
}