#include <algorithm>
#include <iostream>

using namespace std;

template <typename T> struct Tree {
  Tree(const T &v) : value(v), left(nullptr), right(nullptr) {}
  T value;
  Tree *left;
  Tree *right;
};

// without depth in the parameter //
int findDepth(Tree<int> *root) {
  if (root == nullptr)
    return 0;

  return 1 + max(findDepth(root->left), findDepth(root->right));
}

// with depth in the parameter //
int findDepthP(Tree<int> *root, int depth = 0) {
  if (root == nullptr)
    return 0;

  return depth + findDepthP(root->left, depth + 1) +
         findDepthP(root->right, depth + 1);
}

int main() {
  Tree<int> *one = new Tree<int>(0);
  Tree<int> *two = new Tree<int>(5);
  Tree<int> *three = new Tree<int>(10);
  one->left = two;
  one->right = three;

  cout << findDepth(one);
}

/*
Questions

What's the difference between?
findDepth(root->left, depth++) -> 4
findDepth(root->left, depth + 1) -> 2
Why?
*/