//count the 0 and 1
#include<iostream>
using namespace std;
int main(){


	int arr[9]={1,1,0,0,1,1,0,1,0};
	int size=9;
	int zero=0;
	int ones=0;
	for(int i=0;i<size;i++)
	{
		if(arr[i]==0){
			zero++;
		}
		if(arr[i]==1){
			ones++;
		}
	}
	cout<<"zero"<<" "<<zero<<endl;
cout<<"one"<<" "<<ones<<endl;
	}
