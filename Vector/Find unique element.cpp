#include<iostream>
#include<vector>
using namespace std;
int unique(vector<int> arr){
    int ans=0;
    for(int i=0;i<arr.size();i++){
        ans=ans^arr[i];
    }
    return ans;
}



//every elementoccurs twice ecpect 1
int main(){
// 1^1=0= 1 cancel 1
// 2^2=0= same
// 2^2^3=3= 2 cancel 2,only left 3
// xor case
int n;
cin>>n;
vector<int>arr(n);
//there is no nedd to declare size because we use size fumnction in vector.
for(int i=0;i<arr.size();i++){
    cin>>arr[i];
}
cout<<unique(arr);



}