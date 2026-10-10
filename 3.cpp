#include <iostream>
#include <string>

using namespace std;

bool solution(string inputString) {
  char arr[26] = {-1};
  for (int i = 0; i < inputString.size(); i++) {
    char current_char = inputString[i];
    int char_index = current_char - 'a';
    if (arr[char_index] == -1)
      arr[char_index] = 1;
    else
      arr[char_index] += 1;
  }

  bool watch_out = false;

  for (int i = 0; i < 26; i++) {
    if (arr[i] != -1 && watch_out)
      return false;
    if (arr[i] == -1)
      watch_out = true;
    if (i < 26 - 1 && arr[i] < arr[i + 1] && arr[i + 1] != -1)
      return false;
  }

  return true;
}
