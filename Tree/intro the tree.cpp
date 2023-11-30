 #include <iostream>
#include<vector>
using namespace std;
template <typename T>
class Treenode{
public:
T data;
vector<Treenode<T>*> children;

Treenode(T data){
  this->data=data;
}
};
int main() {
  Treenode<int>* root=new Treenode<int>(1);
    Treenode<int>* child1=new Treenode<int>(4);
      Treenode<int>* child2=new Treenode<int>(3);
      root->children.push_back(child1);
       root->children.push_back(child2);
       cout<<root->data<<endl<<root->children[0]->data<<endl<<root->children[1]->data<<endl;
        
      }