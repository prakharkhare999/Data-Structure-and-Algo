#include <iostream>
using namespace std;
bool find(int arr[],int key){
	//linear search
for(int i=0;i<=4;i++){

	if(arr[i]==key){
		return true;
	}
}
return false;
	



}
int main() {
int arr[5]={2,4,5,6,7};
int n;

cin>>n;
if(find(arr,n)==true){
	cout<<"find";
}
else if(find(arr,n)==false){
	cout<<"not find";
}
return 0;

}
