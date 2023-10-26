#include <iostream>
using namespace std;

int potegowanie(int x, int y){
    if(y == 0) return 1;
    else return potegowanie(x, y-1)*x;
}

int main(){
        int x, podstawa, wykladnik;
        cin>>x;

        while (x--)
        {
            cin>>podstawa>>wykladnik;
            cout<<potegowanie(podstawa, wykladnik)<<endl; 
        }
        

    return 0;
}