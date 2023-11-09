#include <iostream>
#include "account.h"

using namespace std;

void Account::deposit(int money) {
    balance += money;
}

void Account::check_current_balance() {
    cout<<"Current balance is: "<<balance<<"$"<<endl;
}

void Account::withdraw(int amount) {
    if((amount <= balance)&&(amount > 0)){
        balance -= amount;
    }else {
        cout<<"Not enough money!"<<endl;
    }
}

void Account::setup() {
    balance = 0;
}

