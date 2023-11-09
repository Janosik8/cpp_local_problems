#include <iostream>

using namespace std;


class Account{
    public:
    int balance;
    
    void setup();
    void deposit(int money);
    void check_current_balance();
    void withdraw(int amount);

};