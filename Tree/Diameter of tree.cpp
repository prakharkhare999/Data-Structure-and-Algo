 #include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* left;
    Node* right;
    Node(int data){
        this->data=data;
        left=NULL;
        right=NULL;
    }
};
int height(Node* root){
    if(root==NULL){
        return 0;
    }
    int leftlength=height(root->left);
    int rightlength=height(root->right);
    int ans=max(leftlength,rightlength)+1;
    return ans;
  

}
Node* buildtree(){
    int data;
    cout<<"enter the data"<<endl;
    cin>>data;
    if(data==-1){
        return NULL;
    }
    //step a
    Node *root=new Node(data);
    cout<<"enter data for left part of"<<data<<"node"<<endl;
    //step b
    root->left=buildtree();
     cout<<"enter data for right part of"<<data<<"node"<<endl;
    //step b
    //step c
    root->right=buildtree();
return root;

}
int diameter(Node* root){
    if(root==NULL){
        return 0;
    }
    int op1=diameter(root->left);
    int op2=diameter(root->right);
    int op3=height(root->left)+1+height(root->right);
    int ans=max(op1,max(op2,op3));
    return ans;
}
int main(){
    Node* root=NULL;
    root=buildtree();
    int ans=diameter(root);
    cout<<ans<<endl;
}