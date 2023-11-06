#include <iostream>

using namespace std;

class Car{
    public:
    string marka, model;
    int rocznik, przebieg;

    void wczytaj() {
        cout<<"Dodawanie nowego samochodu do bazy!"<<endl;
        cout<<"Podaj marke: "<<endl;
        cin>>marka;
        cout<<"Podaj model: "<<endl;
        cin>>model;
        cout<<"Podaj rocznik: "<<endl;
        cin>>rocznik;
        cout<<"Podaj przebieg: "<<endl;
        cin>>przebieg;
    }

    void wypisz() {
        cout<<"INFORMACJE O SAMOCHODZIE!"<<endl;
        cout<<"Marka auta: "<<marka<<endl;
        cout<<"Model auta: "<<model<<endl;
        cout<<"Rocznik auta: "<<rocznik<<endl;
        cout<<"Przebieg auta: "<<przebieg<<endl;
    }
};

int main() {

    Car s1; 
    Car s2;

    s1.wczytaj();
    s2.wczytaj();
    
    s1.wypisz();
    cout<<endl;

    s2.wypisz();


    return 0;
}