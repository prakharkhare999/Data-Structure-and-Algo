#include<iostream>
using namespace std;
class Dqueue{
    public:
    int *arr;
    int size;
    int front;
    int rear;
    Dqueue(int size){
        this->size=size;
        arr=new int[size];
        front=-1;
        rear=-1;

    }

    void push_rear(int data){
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



    void pus_front(){
         if(front ==0 && rear ==size-1){
        cout<<"queue is full can not insert"<<endl;
        return;
    }
    else if(front==-1){
        front=rear=0;
        arr[rear]=data;

    }
    else if(front==0 && rear!=size-1){

        front=size-1;
        arr[rear]=data;
    }
    else{
        front--;
        arr[rear]=data;
    }

    }
void pop_front(){
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
void pop_rear(){
if(front ==-1){
        cout<<"q is empty"<<endl;
        return;

    }
    else if(front==rear){
        arr[front]=-1;
        front=-1;
        rear=-1;


    }
    else if(rear==0){
        rear=size-1;


    }
    else{
        rear--;
    }




}
};


int main(){

}