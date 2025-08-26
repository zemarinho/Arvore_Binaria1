#include <iostream>
#include <vector>
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
        vector<int> temp, auxv;
        if (root != nullptr){
            if (root->left != nullptr){
                auxv = inorderTraversal(root->left);
                temp.insert(temp.end(), auxv.begin(), auxv.end());
            }
            temp.push_back(root->val);
            if (root->right != nullptr){
                auxv = inorderTraversal(root->right);
                temp.insert(temp.end(), auxv.begin(), auxv.end());
            }
        }
        return temp;
    }
};


int main(){

    return 0;
}