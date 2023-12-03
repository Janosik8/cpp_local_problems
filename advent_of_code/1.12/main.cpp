#include <iostream>
#include <fstream>

using namespace std;
	
int main(){

	ifstream file("puzzle.txt");

	if(!file.is_open()){
		cout<<"file error!"<<endl;
        return 1;
	}

    int licznik = 0;
    string linia;

    while(getline(file, linia)){
            int czy_1 = 0;
            string cur_num = "";
        for(char digit  : linia) {
                if((int)digit - 48 < 10){
                    cur_num += digit;
                }
        }

        if(cur_num.length() > 0){
            string num = "";
            num += cur_num[0];
            num += cur_num[cur_num.length() - 1];
            licznik += stoi(num);
        }
cout<<linia<<" "<<licznik<<endl;
    }


    cout<<licznik<<endl;


	return 0;
}
