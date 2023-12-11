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
bool isbalanced(Node* root){
//base case
if(root==NULL){
    return true;
}
//1 case
int left=height(root->left);
int right=height(root->right);
int diff=abs(left-right);
bool ans1=(diff<=1);
//recursion
bool leftans=isbalanced(root->left);
bool rightans=isbalanced(root->right);
if(ans1 && leftans && rightans){
    return true;
}
else{
    return false;
}

}
