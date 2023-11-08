#include <iostream>

using namespace std;

class Pytanie{
    public:
    int numer_pytania;
    string tresc;
    string a;
    string b;
    string c;
    string d;
    string odpowiedz;
    string poprawna;
    int punkt;

    void wczytaj();
    void zweryfikuj();
    void wypisz();


};