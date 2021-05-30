//
// Created by 25350 on 2021/5/11.
//

#ifndef TEST_TOP100_LIST_H_
#define TEST_TOP100_LIST_H_

#include <vector>
#include <iostream>
#include <string>
#include <assert.h>

using namespace std;

struct ListNode {
  int val;
  ListNode *next;
  ListNode() : val(0), next(nullptr) {}
  ListNode(int x) : val(x), next(nullptr) {}
  ListNode(int x, ListNode *next) : val(x), next(next) {}
};

ListNode* createList(vector<int> vec) {
  if (vec.size() == 0) return nullptr;
  auto head = new ListNode(vec[0]);
  ListNode *pre = head;
  for (int i = 1; i < vec.size(); ++i) {
    auto node = new ListNode(vec[i]);
    pre->next = node;
    pre = node;
  }
  return head;
}

void printList(ListNode *head) {
  ListNode *cur = head;
  while (cur) {
    cout << cur->val << "\t";
    cur = cur->next;
  }
  cout << endl;
}
#endif //TEST_TOP100_LIST_H_
