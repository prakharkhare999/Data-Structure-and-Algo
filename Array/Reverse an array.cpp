#include<iostream>
using namespace std;
int main(){
    int arr[10]={10,20,30,40,50,60};
    int size=6;
    int start=0;
    int end=size-1;
    while(start<=end){
    	//step1
    	swap(arr[start],arr[end]);
    	//step2
    	start++;
    	//swap3
    	end--;
    	
	}
  for(int i=0;i<size;i++){
  	cout<<arr[i]<<" ";
  }

}
