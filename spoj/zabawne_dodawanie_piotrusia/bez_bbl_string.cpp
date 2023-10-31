#include <iostream>

using namespace std; 

int reverse(int x) {
    string spr = to_string(x);
    string reversed_number = "";
    for(int i = spr.length() - 1; i>=0; i--) {
        reversed_number += spr[i];
    }

    return stoi(reversed_number);
}

int main() {
    int t;
    cin>>t;

    while(t--) {
        int liczba, odw_liczba, licznik = 0;
        cin>>liczba;
        odw_liczba = reverse(liczba);

        while(liczba != odw_liczba) {
            liczba += odw_liczba;
            licznik++;
            odw_liczba = reverse(liczba);
        }
        cout<<liczba<<" "<<licznik<<endl;
    }
    return 0;
}
