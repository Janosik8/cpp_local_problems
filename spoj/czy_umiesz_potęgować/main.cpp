#include <iostream>
using namespace std;

int main(){
        int x, podstawa, wykladnik;
        cin>>x;

        while (x--)
        {
            cin>>podstawa>>wykladnik;
            podstawa %= 10;
            int wynik = podstawa;
            wykladnik--;
            wykladnik %= 4;
            if (wykladnik > 0) {
            for (int i = 0 ; i < wykladnik; i++) {
                wynik *= podstawa;
            }
                wynik %= 10;
                cout<<wynik<<endl;
            }else{
                cout<<podstawa<<endl;
            }
        }
        

    return 0;
}