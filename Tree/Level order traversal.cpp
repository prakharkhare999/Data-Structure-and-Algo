#include<iostream>
#include"treenode.h"
#include<queue>
using namespace std;
//level wise traversal using queue
Node* levelorder(Node* root){
    queue<Node*>q;
    //inititally
    q.push(root);
    //nul for level wise printing
    q.push(NULL);
    while(!q.empty()){
        //A
        Node* temp=q.front();
        //B
        q.pop();
         if(temp==NULL){
            cout<<endl;
            if(!q.empty()){
                q.push(NULL);
            }

         }
         else{
            //c
        cout<<temp->data<<" ";
        //d
        if(temp->left){
            q.push(temp->left);
        }
        if(temp->right){
            q.push(temp->right);
        }

         }
        

    }
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
int main(){
    Node* root=NULL;
      root=buildtree();
      //levelorderprinting
    levelorder(root);


}