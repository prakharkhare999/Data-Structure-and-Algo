#include<iostream>
using namespace std;
class Cqueue{
    public:
    int size;
    int *arr;
    int front;
    int rear;
    Cqueue(int size){
        this->size=size;
        arr=new int[size];
        front =-1;
        rear=-1;

    
    }

void push(){
    //queue full




    //single element case->




    //circular natue

    //normal flow
    if(front ==0 && rear ==size-1){
        cout<<"queue is full can not insert"<<endl;
    }
    else if(front==-1){
        front=rear=0;
        arr[rear]=data;

    }
    else if(rear == size-1 && front !=0){
        rear=0;
        arr[rear]=data;
    }
    else{
        rear++;
        arr[rear]=data;
    }

}
void pop(){
    //empty cheack
    //single element
    ////circular narue
    //normal flow
    if(front ==-1){
        cout<<"q is empty"<<endl;

    }
    else if(front==rear){
        arr[front]=-1;
        front=-1;
        rear=-1;


    }
    else if(front==size-1){
        front=0;


    }
    else{
        front++;
    }

}















































    
};
int main(){

}