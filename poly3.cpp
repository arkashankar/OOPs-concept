//This is example of Function overloading 
#include<iostream>
using namespace std;

class Parent{
    public:
    void print(){
        cout<<"this is from Base class";
    }
};

class child : public Parent{
    public:
    void print(){
        cout<<"this is from derived class";
    }
};

int main(){
    child c1;
    c1.print();
    return 0;
}