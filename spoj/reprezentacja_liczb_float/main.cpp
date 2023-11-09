#include <iostream>
#include <math.h>

using namespace std;

void printFloat(float wejscie);

int main() {
    int t;
    float wejscie;
    cin>>t;

    while(t--) {
        cin>>wejscie;
        printFloat(wejscie);
        cout<<endl;
    }

    return 0;
}

void printFloat(float wejscie) {
    unsigned char adres[4];					   //bo float ma 4 bajty
unsigned char *wtab = adres;
*(reinterpret_cast<float*>(wtab)) = wejscie;			 //do z rzutowanego wskaźnika char na float przypisujemy liczbę float

for(int i = 3; i >= 0; --i)   //kolejne bajty zmiennej float
	cout << hex << static_cast<int>(adres[i]) << " ";
}