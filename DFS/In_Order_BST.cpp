/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int kthSmallest(TreeNode* root, int k) {
        
        stack<TreeNode*>st;
        TreeNode*p=root;
        
        while(p||!st.empty()){
            while(p){
                st.push(p);
                p=p->left;
            }
            p=st.top();
            cout<<p->val<<" ";
            st.pop();
            k--;
            if(k==0) return p->val;
            p=p->right;
        }
        
        return -1;  
    }
};
