#include<iostream>
using namespace std;

class Animals{
    //state or properties
    public:
    int age;
    string name;
//behaviour
void eat(){
cout<<"i am hungry"<<endl;
}
void sleep(){
cout<<"i want one peice"<<endl;
}

};


int main(){
//  size  ---   cout<<sizeof(Animals);
//object creationg

 // static

// Animals ramesh;
// ramesh.age=12;
//  cout<<ramesh.age<<endl;
// ramesh.eat();
// ramesh.sleep();

//getter or setter for access the private properties
//google

//dynamic 
//  Animal *suresh=new Animal;
// (*suresh).age=15;
// (*suresh).name="hello";

// alternative method
// suresh->age=17;
// suresh->name="krsna"

 //this keyword
// this->w; // same w honge to ek kon this define krke seprate kr skte
// this is a pointer to current object

}