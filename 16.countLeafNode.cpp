/**********************************************************
    Note : this part is  given by the platform

    Following is the Binary Tree Node class structure:

    template <typename T>
    class BinaryTreeNode {
      public :
        T data;
        BinaryTreeNode<T> *left;
        BinaryTreeNode<T> *right;

        BinaryTreeNode(T data) {
                this -> data = data;
                left = NULL;
                right = NULL;
        }
    };
    
***********************************************************/

void countLeafNodes(BinaryTreeNode<int> *root,int &cnt){

    if(root==NULL){
        return;
    }
    countLeafNodes(root->left,cnt);
    
    if(root->left == NULL && root->right==NULL){
        cnt++;
    }

    countLeafNodes(root->right, cnt);
}



int noOfLeafNodes(BinaryTreeNode<int> *root){
    // Write your code here.
    int cnt = 0;
    countLeafNodes(root, cnt);
    return cnt;
}
