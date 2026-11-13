#include <iostream>
<<<<<<< HEAD
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
=======
#include <set>
#include <string>
#include <unordered_map>
#include <vector>


using namespace std;

/*
words = ["i", "love", "leetcode", "i", "love", "coding"], k = 2

map<string, count> storage;
for i := 1 to n:
    storage[words[i]]++;

for i := 1 to n:
    result.insert(words[i])

*/

vector<string> solution(vector<string> arg1, int arg2) {
  unordered_map<string, int> myMap;
  int n = arg1.size();
  for (int i = 0; i < n; i++) {
    myMap[arg1[i]]++;
  }

  set<pair<int, string>, greater<pair<int, string>>> mySet;
  vector<string> answer;

  for (const auto &[strs, num] : myMap) {
    mySet.insert({num, strs});
  }

  int i = 0;
  for (auto it = mySet.begin(); i < arg2 && it != mySet.end(); ++it, i++) {
    answer.push_back(it->second);
  }

  for (int i = 0; i < answer.size() - 1; i++) {
    if (answer[i] > answer[i + 1] && myMap[answer[i]] == myMap[answer[i + 1]]) {
      swap(answer[i], answer[i + 1]);
    }
  }
  return answer;
}
>>>>>>> 23c25606bee1367d443ddea352acba375ecf9877
