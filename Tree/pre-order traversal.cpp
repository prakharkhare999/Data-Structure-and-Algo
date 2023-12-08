 #include"treenode.h"
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
void preorder(Node* root){
    //base case
    if(root==NULL){
        return ;
    }
    //NLR
       cout<<root->data<<ends;
    preorder(root->left);
 
    preorder(root->right);

}
int main(){
Node* root=NULL;
root=buildtree();
preorder(root);

}