//count 2
#include<iostream>
using namespace std;
int main(){
	int a[6]={2,3,4,2,2,2};
	int size=6;
	int two=0;
	for(int i=0;i<size;i++){
		if(a[i]==2){
			two++;
			
		}
	}
	cout<<"two"<<" "<<two<<endl;
	return 0;
}
