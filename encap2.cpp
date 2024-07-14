#include<iostream>
using namespace std;

class bankAccount{
    private:
    string accountHolderName;
    double balance;
    

    public:
    //creating constructor
    bankAccount(const string& name, double initialbalance):accountHolderName(name),balance(initialbalance){}

    void deposit(double amount){
        if(amount>0){
            balance = balance + amount;
        }
        else
        {
            cout<< "INvalid amount"<<endl;
        }
        
    } 

    void withdrawn(double amount){
        if(amount>0  && amount< balance){
            balance = balance - amount;
        }
        else
        {
            cout<<"Please enter valid amount"<< endl;
        }
        
    }

    int getBalance(){
        return balance;
    }

    string getName() {
        return accountHolderName;
    }
};

int main(){
    bankAccount b ("Arka", 1000000.0);
    cout<<"the initial amount in the bank "<<b.getBalance()<<endl;
    cout<<"Name of the holder "<<b.getName()<<endl;

}