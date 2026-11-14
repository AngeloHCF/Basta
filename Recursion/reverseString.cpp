#include <iostream>
#include <string>

using namespace std;

string reverseString(string input) {
  if (input == "")
    return "";

  return reverseString(input.substr(1)) + input.at(0);
  // return input.at(input.size() - 1) + reverseString(input.substr(0,
  // input.size() - 1));
}

int main() {
  string str = "hello";
  cout << reverseString(str);
}

/*
"hello"
""
h + ""
e + h
l + he
l + hel
o + hell

h
eh
leh
lleh
olleh
*/