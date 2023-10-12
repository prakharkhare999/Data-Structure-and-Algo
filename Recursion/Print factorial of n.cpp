#include <iostream>
using namespace std;
void func(int i,int fact){
    if(i<1){
        cout<<fact;
        return;

    }
    func(i-1,fact*i);

}
int main() {
    int n;
    cin>>n;
    func(n,1);
}