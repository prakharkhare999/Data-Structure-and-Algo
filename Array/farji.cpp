//find maximum number in array 
#include<iostream>
using namespace std;
int main(){
	int a[]={2,44,5,6,7,84,4,7779};
	int size=8;
	int maxnum=INT_MIN;
	for(int i=0;i<size;i++){
		if(a[i]>maxnum){
		
		maxnum=a[i];
	}
	}
	cout<<"maximum"<<" "<<maxnum;
	
}