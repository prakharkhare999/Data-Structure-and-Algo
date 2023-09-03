#include<bits/stdc++.h>
using namespace std;
void kreverse(queue<int>&q,int k){
//step 1'
stack<int>s;
int count=0;
int n=q.size();

//common sense
if(k<=0 || k>n){
    return;
}


//queue se element stack me dal do

while(!q.empty()){
    int temp=q.front();
    q.pop();
    s.push(temp);
    count++;

     if(count ==k){
        break;
     }
}
    //fir srack se bapas queue me dal do

    while(!s.empty()){
        int temp=s.top();
        s.pop();
        q.push(temp);
    }

    //push n-k element from q front to back
    count =0;
    while(!q.empty() && n-k!=0){
        int temp=q.front();
        q.pop();
        q.push(temp);
        count++;
        
        if(count==n-k){
            break;
        }
    }




}
int main(){
    queue<int>q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);

kreverse(q,3);
while(!q.empty()){
    cout<<q.front()<<" ";
    q.pop();

}
return 0;

}