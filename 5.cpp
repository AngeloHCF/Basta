#include <iostream>

using namespace std;

template <typename T> struct ListNode {
  ListNode(const T &v) : value(v), next(nullptr) {}
  T value;
  ListNode *next;
};

ListNode<int> *solution(ListNode<int> *l, int k) {
  int reverse = 1;
  ListNode<int> *current = l;
  while (current->next != nullptr) {
    if (reverse < k) {
      ListNode<int> *curr = current;
      ListNode<int> *next_node = current->next;
      ListNode<int> *next_node_node = current;
    }
  }
  return l;
}

void reverse(ListNode<int> *l) {
  ListNode<int> *current = l;
  ListNode<int> *next = nullptr;
  ListNode<int> *last = nullptr;

  while (current->next != nullptr) {
    current->next = last;
    last = current;
    current = current->next;
  }
}

void output(ListNode<int> *l) {
  ListNode<int> *current = l;

  while (current != nullptr) {
    cout << current->value;
    current = current->next;
  }
}

void deleteNodes(ListNode<int> *l) {
  ListNode<int> *temp = l;
  while (temp != nullptr) {
    ListNode<int> *next = temp->next;
    delete temp;
    temp = next;
  }
}

int main() {
  ListNode<int> *one = new ListNode<int>(1);
  ListNode<int> *two = new ListNode<int>(2);
  ListNode<int> *three = new ListNode<int>(3);
  ListNode<int> *four = new ListNode<int>(4);
  ListNode<int> *five = new ListNode<int>(5);
  one->next = two;
  two->next = three;
  three->next = four;
  four->next = five;

  output(one);
  reverse(one);
  cout << "\n";
  output(five);

  int k = 2;
  ListNode<int> *answer = solution(one, k);
  ListNode<int> *temp = answer;
  while (temp->next != nullptr) {
    cout << temp->value;
    temp = temp->next;
  }
  deleteNodes(one);
}