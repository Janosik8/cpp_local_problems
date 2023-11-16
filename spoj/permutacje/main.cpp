#include <iostream>
#include <algorithm>

using namespace std;

void printAllPermutations(string slowo) {
    do {
        cout<<slowo<<endl;
    }while(next_permutation(slowo.begin(), slowo.end()));

}

int main() {
    int t;
    cin>>t;

    while(t--) {
        int liczba;
        cin>>liczba;
        string slowo = "";
        for(int i = 97; i < liczba + 97; i++) {
            slowo += (char)i;
        }
        printAllPermutations(slowo);
    }
    return 0;
}