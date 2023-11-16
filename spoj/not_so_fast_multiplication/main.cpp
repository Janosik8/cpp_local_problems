#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int t;
    cin>>t;

    while(t--) {
        long double a, b;
        cin>>a>>b;

        cout<<setprecision(0)<<fixed<<a*b<<endl;
    }


    return 0;
}