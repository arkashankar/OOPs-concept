#include<iostream>
using namespace std;

class party{
    public:
    int meals;

    void food(){
        cout<<"The total quantity of meals : ";
        cin>>meals;
    }
};

class Drinks{
    public:
    int drinks;

    void Liquor(){
        cout<<"Please enter the total quantity of drinks : ";
        cin>>drinks;
    }
};

class Bill : public party, public Drinks{
    public:
    int total_meal;
    int total_drinks;
    int total_bill;
    void total(){
        total_meal = meals * 90;
        total_drinks = drinks * 110;
        total_bill = total_meal + total_drinks;

        cout<< "Total bill calculated is :"<<total_bill<<endl;
    }
};

int main(){
    Bill bill;
    bill.food();
    bill.Liquor();
    bill.total();
}