#include<iostream>
#include<limits.h>
using namespace std;
int main(){
    int a[10]={2,5,6,1,8,9};
    int size=6;
    int minimum=INT_MAX;
    for(int i=0;i<size;i++){
        if(a[i]<minimum){
        minimum=a[i];
        }
    }
cout<<"minimum"<<" "<<minimum;
}