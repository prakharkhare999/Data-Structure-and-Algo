#include<iostream>
using namespace std;
class Animal{
private :
int age;
int weight;
public:
void eat(){
    cout<<"eating"<<endl;
}

void setage(int age)
{
this-> age=age;
}
int getage(){
    return this->age;
}

};



int main(){
Animal p;
p.setage(15);
cout<<p.getage()<<endl;
return 0;

}