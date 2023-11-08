#include <fstream> 
#include <cstdlib> 
#include "pytanie.h"


void Pytanie::wczytaj(){
    fstream plik;
    plik.open("quiz.txt", ios::in);

    if(plik.good()==false) {
        cout<<"blad otwarcia pliku"<<endl;
        exit(0);
    }
    int numer_lini_pytania = (numer_pytania-1) * 6 + 1;
    int aktualny_numer_lini = 1;
    string linia;

    while(getline(plik, linia)) {
        if(aktualny_numer_lini == numer_lini_pytania) {tresc = linia;}
        else if(aktualny_numer_lini == numer_lini_pytania + 1) {a = linia;}
        else if(aktualny_numer_lini == numer_lini_pytania + 2) {b = linia;}
        else if(aktualny_numer_lini == numer_lini_pytania + 3) {c = linia;}
        else if(aktualny_numer_lini == numer_lini_pytania + 4) {d = linia;}
        else if(aktualny_numer_lini == numer_lini_pytania + 5) {poprawna = linia; break;}
        
         aktualny_numer_lini++;
    }

    plik.close();
}

void Pytanie::wypisz() {
    cout<<"PYTANIE NR: "<<numer_pytania<<endl;
    cout<<tresc<<endl;
    cout<<"a: "<<a<<endl;
    cout<<"b: "<<b<<endl;
    cout<<"c: "<<c<<endl;
    cout<<"d: "<<d<<endl;
    cout<<endl<<"Podaj odpowiedz: ";
    cin>>odpowiedz;
    cout<<endl;
}

void Pytanie::zweryfikuj() {
    if(odpowiedz[0] == poprawna[0]) {punkt = 1;}
    else punkt = 0;
}