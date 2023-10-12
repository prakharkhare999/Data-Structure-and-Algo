#include <iostream>
#include<bits/stdc++.h>
using namespace std;
bool func(string &s,int i,int n){
    if(i>=n/2){
        return true;
    }
    else if(s[i]!=s[n-i-1]){
        return false;
    }
   return func(s,i+1,n);
}
int main() {
  string s;
  cin>>s;
  int n=s.length();
 int i=0;
  cout<<func(s,i,n);
  
}