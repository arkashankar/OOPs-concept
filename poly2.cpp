//This is the Example for operator overloading 
#include<iostream>
using namespace std;

class Overload{
    private:
    int n1;
    int n2;

    public:
    Overload(int num1, int num2){
        int res;
        n1 = num1;
        n2 = num2;
        res = n1 - n2;
        cout<<"res : "<<res<<endl;
    }

    void operator-()
    {
        n1 = -n1;
        n2 = -n2;
    }

    void display(){
        cout<<"n1 : "<<n1<<" n2 : "<<n2<<endl;
    }
};

int main(){
    Overload o1(6,8);
    -o1;
    o1.display();
    return 0;
}