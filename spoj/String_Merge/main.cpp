 #include <iostream> 
 using namespace std;  
 
 string string_merge(string slowo1, string slowo2);  
 int main(){   
    int t; 
    string slowo1, slowo2;
    cin>>t;

    while(t--) {
        cin>>slowo1>>slowo2;
        string wynik = string_merge(slowo1,slowo2);
        string* wynik_wskaznik = &wynik;
        cout<<wynik<<endl;

    }
 }

 string string_merge(string slowo1, string slowo2){
    int dlugosc;
    string wynik = "";

    if(slowo1.length() > slowo2.length()) dlugosc = slowo2.length(); 
    else dlugosc = slowo1.length();

    for(int i = 0; i < dlugosc; i++) {
        wynik += slowo1[i];
        wynik += slowo2[i];
    }

    return wynik;
 }
