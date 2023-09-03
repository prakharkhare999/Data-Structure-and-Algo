#include<iostream>
#include<vector>
using namespace std;
int main(){
    int arr[5]={2,4,5,6,7};
    int size=5;
    int size2=3;

    int brr[3]={1,3,9};
    vector<int>ans;
    for(int i=0;i<size;i++){
        ans.push_back(arr[i]);

    }
      for(int i=0;i<size2;i++){
        ans.push_back(brr[i]);
        
    }
for(int i=0;i<ans.size();i++){
    cout<<ans[i];
}
}