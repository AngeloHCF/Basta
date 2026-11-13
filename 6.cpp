#include <iostream>
#include <stack>
#include <string>

using namespace std;

bool solution(string inputString) {
  stack<char> st;
  for (int i = 0; i < inputString.size(); i++) {
    if (!st.empty() && (inputString[i] == ')' && st.top() == '(') ||
        (inputString[i] == '}' && st.top() == '{') ||
        (inputString[i] == ']' && st.top() == '[')) {
      st.pop();
    } else {
      st.push(inputString[i]);
    }
  }

  return st.empty();
}

int main() {
  string s = "()))((";
  cout << boolalpha << solution(s);
}