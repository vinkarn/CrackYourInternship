class Solution {
    private:
        int height(Node* root){
            if(root==NULL)  
                return 0;
            int left = height(root->left);
            int right = height(root->right);
            int maxi = max(left, right) + 1;
            
            return maxi;
        }
  public:
  
  
    // Function to return the diameter of a Binary Tree.
    int diameter(Node* root) {
        // Your code here
        if(root==NULL)  
            return 0;
        
        int op1=diameter(root->left);
        int op2 = diameter(root->right);
        int op3 = height(root->left)+height(root->right);
        
        int ans = max(op1,max(op2,op3));
        
        return ans;
    }
};

// NOTE: the above code will run diameter then call height function, both in recursive manner
//       this leads to increasing the time complexity to O(n^2)
//       we will reduce it in the below code


class Solution {
    public:
    
    pair<int,int>  diameterFast(Node* root){
        if(root==NULL){
            pair<int,int> p = make_pair(0,0);
            return p;
        }
        
        pair<int,int> left = diameterFast(root->left);
        pair<int,int> right= diameterFast(root->right);
        
        int op1 = left.first;
        int op2 = right.first;
        int op3 = left.second + right.second + 1;
        
        pair<int,int> ans;
        ans.first = max(op1,max(op2,op3));
        ans.second = max(left.second, right.second)+1;
        
        return ans;
        
        
            
    }
    int diameter(Node* root){
        return (diameterFast(root).first -1);
    }//the -1 is for matching the asnswer expected by the compiler
  //add it or remove it as per your need
};
