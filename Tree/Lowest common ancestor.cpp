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

Node* lca(Node* root,Node* p ,Node* q){
        if(root==NULL){
            return NULL;
        }
        //check p ans q 
        if(root->val==p->val ){
            return p;
        }
           if(root->val==q->val ){
            return q;
        }
          Node*  leftans=lca(root->left,p,q);
         Node* rightans=lca(root->right,p,q);
if(leftans==NULL && rightans==NULL){
    return NULL;
}
else if(leftans!=NULL && rightans==NULL){
    return leftans;
}
else if(leftans==NULL && rightans!=NULL){
    return rightans;
}
else {
    return root;
}
}
 