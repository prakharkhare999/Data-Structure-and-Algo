#include<iostream>
using namespace std;

void j(int i,int n){
    if(i>n){
        return ;
    }
    cout<<i<<" ";
    i+=1;
    j(i,n);
}
int main(){
  

int n;
cin>>n;

j(1,n);

 
}