#include<iostream>
#include<string> 
using namespace std;
void permutation(string &str,int i){
    //base case
    if(i>=str.length()){
        cout<<str<<" ";
        return;
    }
    //swaping
    for(int j=i;j<str.length();j++){
        //swap
        swap(str[i],str[j]);
        //recursive call
        permutation(str,i+1);
        //backtracing ki line
        swap(str[i],str[j]);
    }

}
int main(){
    string str="abc";
    int i=0;
    permutation(str,i);
    return 0;

     

}