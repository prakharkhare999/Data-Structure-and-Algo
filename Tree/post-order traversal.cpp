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
void postorder(Node* root){
    //base case
    if(root==NULL){
        return ;
    }
    //LRN
    postorder(root->left);
    
    postorder(root->right);
    cout<<root->data<<ends;

}
int main(){
Node* root=NULL;
root=buildtree();
postorder(root);

}