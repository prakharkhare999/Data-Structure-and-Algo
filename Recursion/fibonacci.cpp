#include <iostream>
using namespace std;
int  func(int n){
  if(n<=1){
    return n;
  }
  int last=func(n-1);
  int start=func(n-2);
  return last+start;


   



}
int main() {
 int n;
 cin>>n;
 cout<<func(n);

}