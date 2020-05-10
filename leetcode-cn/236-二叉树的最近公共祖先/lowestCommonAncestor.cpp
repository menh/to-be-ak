struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Solution {
public:
   TreeNode* node;
   TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
       Dfs(root, p, q);
       return node;
   }
   bool Dfs(TreeNode* root, TreeNode* p, TreeNode* q) {
       if(root == nullptr) {
           return false;
       }
       bool lson = Dfs(root->left, p, q);
       bool rson = Dfs(root->right, p, q);
       if ((lson && rson) || ((root->val == p->val || root->val == q->val) && (lson || rson))) {
           node = root;
       }
       return lson || rson || (root->val == p->val || root->val == q->val);
   }
};
