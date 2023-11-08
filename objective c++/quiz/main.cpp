#include <iostream>
#include "pytanie.h"

using namespace std;

int main() {

    Pytanie p[5];
    int liczni_punktow = 0;

    for(int i = 0; i < 5; i++) {
        p[i].numer_pytania = i + 1;
        p[i].wczytaj();
        p[i].wypisz();
        p[i].zweryfikuj();
        liczni_punktow += p[i].punkt;
    }


    cout<<endl<<"Liczba zdobytych punktow: "<<liczni_punktow<<endl;



    return 0;
}