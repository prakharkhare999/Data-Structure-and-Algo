#include<iostream>
using namespace std;
int evensum(int arr,int n){
	int sum=0;
	for(int i=0;i<n+2;i=i+2){
		sum=sum+i;
	}
	return sum;
}
int main (){
	int n;
	
	int arr[100];
	cin>>n;
	cin>>arr[100];
	int result=evensum(arr,n);
	cout<<result;
	
}
