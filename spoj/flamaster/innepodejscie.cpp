#include <iostream>

using namespace std;



int main(){
    int x;
    cin>>x;

    string wynik = "", slowo;

    while(x--){
        cin>>slowo;
        char aktualny_znak = slowo[0];
        
        int ile = 1;
        int iterator = 1;
    while(iterator <= slowo.length()){
        for(int i = iterator; i<=slowo.length() && slowo[i] == aktualny_znak; i++ ){
            ile++;
            }

        if(ile == 1){
            wynik += aktualny_znak;
        }else if(ile == 2){
            wynik += aktualny_znak;
            wynik += aktualny_znak;
        }else{
            wynik += aktualny_znak;
            wynik += to_string(ile);
        }

        iterator += ile;
        aktualny_znak = slowo[iterator-1];
        ile = 1;
    }
    cout<<wynik<<endl;
    wynik = "";

    }

    return 0;
}