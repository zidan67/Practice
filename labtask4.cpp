#include <iostream>
using namespace std;
float RemainingBalance;

void Deposit(float amount){
    RemainingBalance+=amount;
    cout<<"Updated account balance after deposit:"<<RemainingBalance<<endl;
}
void Withdraw(float amount) {
     if (amount<=RemainingBalance){
            RemainingBalance-=amount;
            cout<<"Updated account balance after withdraw: "<<RemainingBalance<<endl;
        }
     else{
        cout<<"Withdrawing failed."<<endl;
        }
}
int main() {
    cout<<"Total Balance before deposit or withdraw: ";
    cin>>RemainingBalance;
    Deposit(600.22);
    Withdraw(5867.7);
    Withdraw(330.55);
    Deposit(422.43);
    cout <<"Final ammount of balance: " <<RemainingBalance<<" Taka "<<endl;
}

