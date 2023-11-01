#include <iostream>

using namespace std;

void reversed(int *tab, int n) {
    for(int i = n-1; i>= 0; i--) {
        cout<<tab[i]<<" ";
    }
}

int main() {
    int t, n;
    int *tab;
    cin>>t;


    while(t--) {
        cin>>n;
        tab = new int [n];

        for(int i = 0; i < n; i++) {
            cin>>tab[i];
        }

        reversed(tab, n);
        cout<<endl;

        delete [] tab;
    }

    

    return 0;
}