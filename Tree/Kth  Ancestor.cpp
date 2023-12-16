 #include<iostream>
using namespace std;
class Node{
    public:
    int val;
    Node* left;
    Node* right;
    Node(int val){
        this->val=val;
        left=NULL;
        right=NULL;
    }
};
bool kthancestor(Node* root,int& k,Node* p){
 //base case
 if(root==NULL){
    return false;
 }   
 if(root->val==p->val){
    return true;
 }
 bool leftans=kthancestor(root->left,k,p);
 bool rightans=kthancestor(root->right,k,p);
if(leftans==true || rightans==true){
    k--;
}
if(k==0){
    cout<<root->val<<endl;

}

}