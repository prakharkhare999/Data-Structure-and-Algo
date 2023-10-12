#include <iostream>

using namespace std;
void reversearr(int arr[],int i,int j){
if(i>=j){
    return ;
}
swap(arr[i],arr[j]);
reversearr(arr,i+1,j-1);
}
int main(){
    int arr[5]={2,4,7,5,8};
    int i=0;
    int j=4;
    reversearr(arr,i,j);
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }

}