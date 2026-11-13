#include <iostream>
#include <string>

using namespace std;

string reverseString(string input) {
  if (input == "")
    return "";

  return input.at(input.size() - 1) +
         reverseString(input.substr(0, input.size() - 1));
}

int main() {
  string str = "olegna si eman ym";
  cout << reverseString(str);
}