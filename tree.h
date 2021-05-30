//
// Created by 25350 on 2021/5/9.
//

#ifndef TEST_TOP100_TREE_H_
#define TEST_TOP100_TREE_H_

#include <iostream>
#include <vector>
#include <queue>

using namespace std;

struct TreeNode {
  int val;
  TreeNode *left;
  TreeNode *right;
  TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

TreeNode *createTree(vector<int> vec) {
  auto len = vec.size();
  vector<TreeNode*> tree(len, nullptr);
  for (int i = 0; i < len; i++) {
    if (vec[i] == -1) continue;
    tree[i] = new TreeNode(vec[i]);
  }
  for (int i = 0; i < len; i++) {
    if (2 * i + 1 < len)
      tree[i]->left = tree[2 * i + 1];
    if (2 * i + 2 < len)
      tree[i]->right = tree[2 * i + 2];
  }
  return tree[0];
}

void in_print(TreeNode *root) {
  if(!root) return;
  in_print(root->left);
  cout << root->val << endl;
  in_print(root->right);
}

TreeNode *findNode(TreeNode *root, int val) {
  if (!root) return nullptr;
  queue<TreeNode *> q;
  q.push(root);
  while (!q.empty()) {
    auto cur = q.front();
    if (cur->val == val) return cur;
    if (cur->left) q.push(cur->left);
    if (cur->right) q.push(cur->right);
    q.pop();
  }
  return nullptr;
}
#endif //TEST_TOP100_TREE_H_
