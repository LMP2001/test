#include <iostream>
using namespace std;

int gcd(int a, int b) {
    int m = a;
    int n = b;
    int xm = 1, ym = 0;
    int xn = 0, yn = 1;
    int q, r;
    while (n != 0) {
        q = m / n;
        r = m % n;
        m = n;
        n = r;
        int xr = xm - q * xn;
        int yr = ym - q * yn;
        
        xm = xn;xn = xr;
        ym = yn;yn = yr;

    }
    cout << "x= " << xm << "; y= " << ym << endl;
    return m;
}

int main() {
    int a, b;
    cout << "a: ";cin >> a;
    cout << "b: "; cin >> b;
    cout << "GCD(" << a << ", " << b << ") = " << gcd(a, b) << endl;
}
//hi
