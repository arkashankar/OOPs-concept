#include<iostream>
using namespace std;

class Beverages{
    public:
    void drinks(){
        cout<<"all drinks are available"<<endl;
    }
};

class coffee : public Beverages{
    public:
    void mocha(){
        cout<<"Best coffee drink"<<endl;
    }
};

int main(){
    coffee c;
    c.drinks();
    c.mocha();

    return 0;
}