#include <iostream>
#include <string>

using namespace std;

int main(){
    int ilosc;
    cin>>ilosc;
    string slowo;
    while(ilosc--){
        cin>>slowo;
        string slowo_skrocone = "";
        int licznik = 1;
        
                if(slowo.length() > 1){
                        for(int i =1; i<slowo.length(); ++i){
                            if(slowo[i] == slowo[i-1]){licznik++;}

                            else if(licznik >2){
                                slowo_skrocone += slowo[i-1];
                                slowo_skrocone += to_string(licznik);
                                licznik = 1;
                            }else if(licznik == 2){
                            slowo_skrocone += slowo[i-1];
                            slowo_skrocone += slowo[i-1];
                            licznik = 1;
                           }else{
                            slowo_skrocone += slowo[i-1];
                           }

                           if(i == slowo.length()-1){
                                    if(licznik >2){
                                        slowo_skrocone += slowo[i-1];
                                        slowo_skrocone += to_string(licznik);
                                    } else if(licznik == 2){
                                        slowo_skrocone += slowo[i-1];
                                        slowo_skrocone += slowo[i-1];
                                    }else slowo_skrocone += slowo[i];
                           }
                           //cout<<slowo_skrocone;
                        }
                }
    else{
        cout<<slowo<<endl;
    }
    cout<<slowo_skrocone<<endl;
    slowo_skrocone=  "";
        
    }
}