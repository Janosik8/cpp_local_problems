//
// Created by Jan Ogiegło on 03/12/2023.
//
#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include <map>

using namespace std;


int main(){
    ifstream file("2.12/puzzle.txt");

    if(!file.is_open()) {
        return 1;
    }

    map<string, int>def;

    def.insert(make_pair("red", 12));
    def.insert(make_pair("green", 13));
    def.insert(make_pair("blue", 14));



    string linia;
    int licznik = 0;
    int pwr_counter = 0;


    while(getline(file, linia)){
        string slowo;
        int id = 0;
        int liczba = 0;
        int czy_mozna = 1;

        map<string, int> min;
        min.insert(make_pair("red", 0));
        min.insert(make_pair("green", 0));
        min.insert(make_pair("blue", 0));

        istringstream ss(linia);
        ss >> slowo;
        ss >> id;
        ss >> slowo;

        while(ss >> liczba, ss>> slowo){
            slowo.erase(std::remove(slowo.begin(), slowo.end(),';'), slowo.end());
            slowo.erase(std::remove(slowo.begin(), slowo.end(),','), slowo.end());

            if(def[slowo] < liczba){
                czy_mozna = 0;
            }

            if(min[slowo] < liczba){
                min[slowo] = liczba;
            }
        }

        if (czy_mozna){
            licznik += id;
        }
       // cout<<linia<<endl<<czy_mozna<<" "<<licznik<<endl;

        pwr_counter += min["red"]*min["blue"]*min["green"];
    }

    cout<<licznik<<endl;
    cout<<pwr_counter;




    return 0;
}