class Solution {
    private:
        pair<bool,int> isSum(Node* root){
            //base conditions
            if(root==NULL){
                pair<bool,int> p = make_pair(true,0);
                return p;
            }
            if(root->left==NULL && root->right==NULL){
                pair<bool,int> p = make_pair(true,root->data);
                return p;
            }
            
            //calling left and right
            pair<bool,int> left = isSum(root->left);
            pair<bool,int> right = isSum(root->right);
            
            //finding answer
            bool op1 = left.first;
            bool op2 = right.first;
            
            bool op3 = (root->data) == (left.second + right.second);
            
            pair<bool,int> ans;
            if(op1 && op2 && op3){//all are true
                ans.first = true;
                ans.second = root->data + left.second + right.second;
                // it can be replaced with 2*(root->data);
                // as (root->data) , (left.second + right.second) will be equal
            }
            else{
                ans.first= false;
                //no need to add anything in second as ans comes out to be false
                //it will be wastage of space
                
            }
            return ans;
        }
  public:
    bool isSumTree(Node* root) {
        return isSum(root).first;
    }
};
