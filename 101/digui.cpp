bool judge(TreeNode*p,TreeNode*q){
            if(p == NULL && q == NULL) return true;
            if(p == NULL || q == NULL) return false;
            if(p ->val - q -> val) return false;
            
            return judge(p->left,q->right)&&judge(p->right,q->left);
            
        
}
bool isSymmetric(TreeNode* root) {
            if(root == NULL) return true;
            return judge(root->left,root->right);
        
}
