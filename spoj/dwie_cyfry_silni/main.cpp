#include <iostream>

using namespace std;

int silnia(int x){
    if(x == 0 || x ==  1) return 1;
    else return x*silnia(x-1);
}

int main(){
    int x, y;

    cin>>x;

    while (x--)
    {
        cin>>y;
        if (y < 10)
        {          
            int sil = silnia(y);
            cout<<(sil/10)%10<<" "<<sil%10<<endl;
        }else{
            cout<<"0 0"<<endl;
        }
    }
    


    return 0;
}