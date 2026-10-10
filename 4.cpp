#include <iostream>
#include <string>
#include <unordered_set>

using namespace std;

int solution(string s) {
  int n = s.size();
  unordered_set<int> st;
  int max = 0, left = 0, right = 0;

  for (int i = 0; i < n; i++) {
    if (!(st.count(s[right]))) {
      st.insert(s[right]);
    } else {
      while (st.count(s[left])) {
        st.erase(s[left]);
        left++;
      }
    }

    if (st.size() > max)
      max = st.size();

    st.insert(s[right]);

    right++;
  }

  return max;
}

int main() {
  string s = "pwwkew";
  cout << solution(s);
}