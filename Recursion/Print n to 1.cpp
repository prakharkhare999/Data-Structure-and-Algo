#include<iostream>
using namespace std;

void j(int i,int n){
    if(i<1){
        return ;
    }
    cout<<i<<" ";
    
    j(i-1,n);
}
int main(){
  

int n;
cin>>n;

j(n,n);

 
}