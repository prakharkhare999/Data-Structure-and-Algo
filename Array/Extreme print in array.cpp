#include<iostream>
using namespace std;
int main(){
    //extreme print 
    int arr[]={10,20,30,40,50,60,70,80};
    //we can do for odd elements in array
    //we can add one more operation
    //if(start==end)
    //cout<<arr[start]<<" ";
    //do not print the element double
    
    int size=8;
    int start=0;
    int end=size-1;
    while(true){
        if(start>end)
        break;
    
    cout<<arr[start]<<" ";
    cout<<arr[end]<<" ";
    start++;
    end--;
    }
}