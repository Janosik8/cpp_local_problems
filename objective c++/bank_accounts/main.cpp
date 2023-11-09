#include <iostream>
#include "account.h"

using namespace std;

void showMenu();

int main() {
    int action;
    Account a1;
    a1.setup();


do{
        showMenu();
        cin>>action;
        system("clear");

        switch (action)
        {
            case 1: a1.check_current_balance(); break;
            case 2: cout<<"How much: ";int how_much; cin>>how_much; a1.deposit(how_much); break;
            case 3: cout<<"How much: ";int how_much_withdraw; cin>>how_much_withdraw; a1.withdraw(how_much_withdraw); break;
        }
}while(action != 4);


}

void showMenu() {
    cout<<"**********MENU**********"<<endl;
    cout<<"1: check balance"<<endl;
    cout<<"2: deposit"<<endl;
    cout<<"3: withdraw"<<endl;
    cout<<"4: exit"<<endl;
    cout<<"************************"<<endl;
    cout<<"type option: ";
}