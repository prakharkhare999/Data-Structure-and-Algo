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
int height(Node* root){
    if(root==NULL){
        return 0;
    }
    int leftlength=height(root->left);
    int rightlength=height(root->right);
    int ans=max(leftlength,rightlength)+1;
    return ans;
  

}

int convertintosumtree(Node*root){
    if(root==NULL){
        return 0;
    }
    int leftans=convertintosumtree(root->left);
    int rightans=convertintosumtree(root->right);
    root->data=leftans+rightans+root->data;
    return root->data;
}
 
int main(){
Node* root=NULL;
root=buildtree();
 
    

}