#include <iostream>

using namespace std; 

int euklides_NWD(int a, int b)
{
	while(b)
		swap(a %= b, b);
 
	return a;
}

int NWW (int a, int b) {
    return (a*b)/ euklides_NWD(a, b);
}

int main() {
    int n, a, b;
    cin>>n;

    while (n--) {
        cin>>a>>b;//a liczba dzieci w 1 grupie, b w 2 grupie
        cout<<NWW(a, b)<<endl;
    }
        
    return 0;
}