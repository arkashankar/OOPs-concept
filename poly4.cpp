#include<iostream>
using namespace std;

class Base{
    public:

    virtual void print(){
        cout<<"this is function of base class"<<endl;
    }
};

class Derived : public Base{
    public:

    void print(){
        cout<<"this is function of child class"<<endl;
    }
};

int main(){
    Base* b; //Here we are creating a pointer for base class
    Derived d; //Here we are creating a object for derived class

    b = &d; //in the pointer we are storing the address of derived class

    b->print(); // This will print from derived class as b has been assigned the value of d address
    return 0;
}