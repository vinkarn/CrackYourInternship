#include<iostream>
#include<queue>
using namespace std;

class node{
    public:
        int data;
        node* left;
        node* right;

    node(int a){
        this->data = a;
        this->left = NULL;
        this->right = NULL;
    }    
};

node* buildTree(node* root){
    int data;
    cout<<"enter data ";//this will take data for each node out there
    cin>>data;
    
    root = new node(data);

    if(data == -1){
        return NULL;
    }

    cout<<"enter node left to "<<data<<endl;
    root->left = buildTree(root->left);
    cout<<"enter node right to "<<data<<endl;
    root->right = buildTree(root->right);

    return root;
}

void levelOrderTraversal(node* root){
    queue<node*> q;
    q.push(root);
    q.push(NULL);//adding null after the root node
                //we will use this for printing data in more readable manner
                //basically for next line or enter in between the level nodes
// NOTE for understanding:- null works as counter variable , we can use counter variable also for the same
    while(!q.empty()){//till the time queue is not empty
        node* temp= q.front();//pick the first node present in the queue
        q.pop();//remove the first node from the queue

        if(temp==NULL){//if you find null
            cout<<endl;//move to next line
            if(!q.empty()){
                q.push(NULL);//this is for adding null for each level completion
            }
        }
        else{
            cout<<temp->data<<" ";
            if(temp->left)
                q.push(temp->left);
            if(temp->right)
                q.push(temp->right);    
        }

    }            
}

void inorderTraversal(node* root){//this is a recursive function
    if(root==NULL)//base condition
        return;

    inorderTraversal(root->left);//move to left , till extreme
    cout<<root->data<<" ";//print the root node
    inorderTraversal(root->right);//go to right
}
// NOTE: the code for post and pre order will remain same
// Just place the root node printing first and then last 

void preorderTraversal(node* root){
    if(root==NULL)//base condition
        return;

    cout<<root->data<<" ";
    preorderTraversal(root->left);
    preorderTraversal(root->right);
}
void postorderTraversal(node* root){
    if(root==NULL)//base condition
        return;

    postorderTraversal(root->left);
    postorderTraversal(root->right);
    cout<<root->data<<" ";
}

void buildFromLevelOrder(node* &root){
    queue<node*> q;
    int rootData;
    cout<<"enter data for root node: ";
    cin>>rootData;
    root = new node(rootData);
    q.push(root);

    while(!q.empty()){
        node* temp= q.front();
        q.pop();
        
        int leftData;
        cout<<"Enter left data :"<<temp->data;
        cin>>leftData;

        if(leftData!=-1){
            temp->left = new node(leftData);
            q.push(temp->left);
        }

        int rightData;
        cout<<"Enter right data :"<<temp->data;
        cin>>rightData;

        if(rightData!=-1){
            temp->right = new node(rightData);
            q.push(temp->right);
        }
    }// input:- 1 3 5 7 11 17 -1 -1 -1 -1 -1 -1 -1(7 time -1)
}

int main(){

    node* root = NULL;
    
    /*
    root = buildTree(root);

    cout<<"Level order traversal of the tree"<<endl;
    levelOrderTraversal(root);

    cout<<endl<<"Inorder traversal"<<endl;
    inorderTraversal(root);
    
    cout<<endl<<"Preorder traversal"<<endl;
    preorderTraversal(root);

    cout<<endl<<"Postorder traversal"<<endl;
    postorderTraversal(root);
    */

    //checking build tree from level order
    buildFromLevelOrder(root);

    cout<<"Level order traversal of the tree"<<endl;
    levelOrderTraversal(root);
    return 0;
}
