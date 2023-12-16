#include<vector>
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
void solve(Node* root,int targetSum,int currsum,vector<int>path,vector<vector<int>>&ans ){
    if(root==NULL){
        return;
    }
    //leaf node 
    if(root->left==NULL && root->right==NULL){
           path.push_back(root->val);
    currsum+=root->val;
        if(currsum==targetSum){
         
            ans.push_back(path);
            return;
        }


    }
    //include cuurrr node
    path.push_back(root->val);
    currsum+=root->val;
    solve(root->left,targetSum,currsum,path,ans);
    solve(root->right,targetSum,currsum,path,ans);


}
vector<vector<int>> pathsum(Node* root,int targetSum ){
vector<vector<int>>ans;
vector<int>temp;
int sum=0;
solve(root,targetSum,sum,temp,ans);
return ans;
}