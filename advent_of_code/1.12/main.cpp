#include <iostream>
#include <fstream>
#include <map>

using namespace std;

char first_digit(string* linia, map<string, char>* digi){
    
    for(int i = 0; i < (*linia).length(); i ++){
        if(isdigit((*linia)[i])){
            return (*linia)[i];
        }else{
            for(const auto& pair: *digi){
                if((*linia).compare(i, pair.first.length(), pair.first) == 0){
                    return pair.second;
                }
            }
        }

    }

}

char last_digit(string* linia, map<string, char>* digi){

    for(int i = linia->length() - 1; i >= 0; i--){
        if(isdigit((*linia)[i])){
            return (*linia)[i];
        }else{
            for(const auto& pair: *digi){
                if((*linia).compare(i, pair.first.length(), pair.first) == 0){
                    return pair.second;
                }
            }
        }

    }

}
	
int main(){

	ifstream file("1.12/puzzle.txt");

	if(!file.is_open()){
		cout<<"file error!"<<endl;
        return 1;
	}

    int licznik_1 = 0;
    int licznik_2 = 0;
    string linia;

    while(getline(file, linia)){
        //part 1
          string digits = "";

          for(int i = 0; i < linia.length(); i++){
              if(isdigit(linia[i])){
                  digits += linia[i];
              }
          }

          string wynik = "";
          wynik += digits[0];
          wynik += digits[digits.length() - 1];

          licznik_1 += stoi(wynik);

          //part 2

          map<string, char>digi;

          digi["one"] = '1';
          digi["two"] = '2';
          digi["three"] = '3';
          digi["four"] = '4';
          digi["five"] = '5';
          digi["six"] = '6';
          digi["seven"] = '7';
          digi["eight"] = '8';
          digi["nine"] = '9';

          char digi_1 = first_digit(&linia, &digi);
          char digi_2 = last_digit(&linia, &digi);

          string wynik_2 = "";

          wynik_2 += digi_1;
          wynik_2 += digi_2;
          licznik_2 += stoi(wynik_2);
    }
//part 1
    cout<<licznik_1<<endl;
//part 2
    cout<<licznik_2<<endl;
	return 0;
}
