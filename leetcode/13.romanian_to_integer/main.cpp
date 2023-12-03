#include <iostream>

using namespace std;

 int romanToInt(string s) {
    int wynik = 0;
    for(int i = 0; i < s.length(); i++) {
                if(s[i] == 'I'){
                    if(i+1 < s.length()){
                        switch (s[i+1])
                        {
                            case 'X': wynik += 9; i++; break;
                            case 'V': wynik += 4; i++; break;
                            default: wynik += 1; 
                        }
                    }else wynik += 1;
                }



                else if(s[i] == 'X'){
                    if(i+1 < s.length()){
                        switch (s[i+1])
                        {
                            case 'L': wynik += 40; i++; break;
                            case 'C': wynik += 90; i++; break;
                            default: wynik += 10; 
                        }
                    }else wynik += 10;
                }


                else if(s[i] == 'C'){
                    if(i+1 < s.length()){
                        switch (s[i+1])
                        {
                            case 'D': wynik += 400; i++; break;
                            case 'M': wynik += 900; i++; break;
                            default: wynik += 100; 
                        }
                    }else wynik += 100;
                }

                else if(s[i] == 'V'){
                    wynik += 5;
                }
                else if(s[i] == 'L'){
                    wynik += 50;
                }
                else if(s[i] == 'D'){
                    wynik += 500;
                }
                
                else if(s[i] == 'M'){
                    wynik += 1000;
                }
                

                



    }
    return wynik;
}



int main() {

    string s;
    cin>>s;

    cout<<romanToInt(s)<<endl;

    return 0;
}
