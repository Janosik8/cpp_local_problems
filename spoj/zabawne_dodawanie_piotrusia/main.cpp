#include <iostream>
#include <string>

using namespace std;


bool is_palindrom(int x){
    string liczba = to_string(x);
    string reversed = liczba;

    reverse(reversed.begin(), reversed.end());

    return reversed == liczba;
}

int main() {
    int t;
    cin>>t;

    while(t--){
        int liczba, licznik = 0;
        cin>>liczba;
        while(!is_palindrom(liczba)) {
            string reversed = to_string(liczba);
            reverse(reversed.begin(), reversed.end());
            //cout<<"reversed: "<<reversed<<endl;

            liczba += stoi(reversed);
            //cout<<"liczba: "<<liczba<<endl;
            licznik++;
            }

            cout<<liczba<<" "<<licznik<<endl;

        
    }

    return 0;
}