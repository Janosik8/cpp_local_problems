#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;

int main() {
    double r, d;
    cout.flags(ios::fixed);
        cin>>r>>d;
        d /=2;
        double promien = r*r - d*d;
        double pole = promien * 3.141592654;
        cout<<setprecision(2)<<round(pole*100)/ 100;

    return 0;
}