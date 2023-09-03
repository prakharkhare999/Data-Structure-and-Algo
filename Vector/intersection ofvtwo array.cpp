#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>arr1{2,3,4,5};
    vector<int>arr2{2,3,5};
    vector<int>ans;
    for(int i=0;i<arr1.size();i++){
        for(int j=0;j<arr2.size();j++){
            if(arr1[i]==arr2[j]){
                //mark for duplicate
                arr2[j]=-1;

                ans.push_back(arr1[i]);

            }
        }
    }
    for(int i=0;i<ans.size();i++){
        cout<<ans[i];
    }
}