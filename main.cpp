#include <iostream>
#include <vector>
#include <stack>
using namespace std;

/**
 * Definition for a binary tree node.*/
 struct TreeNode {
     int val;
     TreeNode *left;
     TreeNode *right;
     TreeNode() : val(0), left(nullptr), right(nullptr) {}
     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 };

class Solution {
public:
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> vec;
        if (root ==  nullptr) {return vec;}
        stack<TreeNode*> stc;
        int count = 0;
        while ((root != nullptr || !stc.empty()) && count <100){
            while (root != nullptr){
                stc.push(root);
                root = root->left;
            }
            root = stc.top();
            stc.pop();
            vec.push_back(root->val);
            count++;
            root = root->right;
        }
        return vec;
    }
};


int main(){

    return 0;
}