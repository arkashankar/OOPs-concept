#include<iostream>
using namespace std;

class BankAccount{
    private:
    std::string accountholdername;
    double balance;

    public:
    BankAccount(const std::string& name, double intialBalance ) : accountholdername(name), balance(intialBalance){}

    //public method to deposit money
    void deposit(double amount){
        if(amount > 0)
        {
            balance+=amount;
        }
        else
        cout<<"Amount cannot be negetive"<<endl;
    }

    void withdraw(double amount){
        if(amount >0 && amount<=balance)
        {
            balance -= amount;
        }
        else
        cout<<"Invalid withdrawl amount"<<endl;
    }

    int getBalance(){
        return balance;
    }

    string getAccountHolderName(){
        return accountholdername;
    }
};

int main(){
    BankAccount account("johnDoe", 30000);

    cout << "Account holder name :" <<account.getAccountHolderName()<<endl;
    cout<< "Account initial Balance :"<<account.getBalance()<<endl;

    account.deposit(10000);
    cout<<"account new balance :" << account.getBalance()<<endl;
    return 0;  
}