#include<iostream>
using namespace std;
//super class
class Animal{
public:
int age=9;
int weight;

void eat(){
    cout<<"eatibng"<<endl;
}
};
//child class
class Dog:public Animal{

};

int main(){
    Dog p1;
   cout<< p1.age<<endl;
    return 0;
}
////types of inhertance
// -single 
// -multi 
// -multiple 
// -hybried  
// -hierachcal