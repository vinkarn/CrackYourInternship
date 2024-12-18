class Solution {
    private:
    int height(Node* root){
        if(root==NULL)
            return 0;
        
        int left = height(root->left);
        int right = height(root->right);
        int ans = max(left , right)+ 1;
        
        return ans;
    }
  public:
    // Function to check whether a binary tree is balanced or not.
    bool isBalanced(Node* root) {
        if(root==NULL)  
            return true;//because the child node having 0 child(no left and right child), is balanced
        
        bool left = isBalanced(root->left);//go to left
        bool right = isBalanced(root->right);//go to right
        bool third = abs(height(root->left) - height(root->right))<=1;//check if the difference b/w left and right is smaller then or equal to 1 or not
      
        
        if(left && right && third)//if all are true 
            return true;//return true
        else
            return false;
        
    }   
};

//like the previous question (diameter)
//we will optimize this using pair and reduce the complexity to O(n)


pair<bool,int> isBalancedFast(Node* root){
  // base condition
  if(root==NULL){
    pair<bool,int> p = make_pair(true,0);//the first one represents bool value,second - height 
    return p;
  }
  pair<bool,int> left = isBalancedFast(root->left);
  pair<bool,int> right = isBalancedFast(root->right);

  bool op1 = left.first;
  bool op2 = right.first;
  bool diff = abs(left.second - right.second)<=1;//checking whether the number is smaller then or equal to 1 or not
  

  pair<bool,int> ans;
  ans.first=op1 && op2 && diff;
  ans.second=max(left.second ,right.second) + 1;

  return ans;
  
}
