#include <iostream>

using namespace std; 

const int czas_doby = 86400;

int main() {
   int t;
    cin>>t;

    while(t--) { 
        int liczba_osob, ilosc_ciastek_pudelko;
        cin>>liczba_osob>>ilosc_ciastek_pudelko;

        int* czasy;
        czasy = new int [liczba_osob];
        
        for(int i = 0; i < liczba_osob; i++) {
            cin>>czasy[i];
        }
        int ilosc = 0;
        for(int i = 0; i < liczba_osob; i++) {
            ilosc += (czas_doby / czasy[i]);
        }
    delete [] czasy;

        int ilosc_potrzebnych_pudelek = 0;
        int ilosc_dev_potrzeb = ilosc / ilosc_ciastek_pudelko;

        if(ilosc % ilosc_ciastek_pudelko > 0) {
            ilosc_potrzebnych_pudelek = ilosc_dev_potrzeb+ 1;
        }else {
            ilosc_potrzebnych_pudelek = ilosc_dev_potrzeb;
        }

        cout<<ilosc_potrzebnych_pudelek<<endl;


    }
    return 0;
}