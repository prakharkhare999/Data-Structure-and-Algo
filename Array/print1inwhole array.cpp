#include<iostream>
using namespace std;

int main(){
    int arr[10]={1,3,4,5,5};
   for(int i=0;i<4;i++){
    arr[i]=1;
   }
   for(int i=0;i<4;i++){
    cout<<arr[i];
   }
}