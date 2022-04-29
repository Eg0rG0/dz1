#include <iostream>
#include "Complex.h"

int main() {
    int vim, vr, v1r, v1im;
    cout << "enter real and imagine part of first complex number(with a space)" << endl;
    cin >> vr >> vim;
    cout << "enter real and imagine part of second complex number(with a space)" << endl;
    cin >> v1r >> v1im;
    Complex v(vr,vim);
    Complex v1(v1r,v1im);
    cout << v + v1 << " (sum)" << endl;
    cout << v - v1 << " (difference)" << endl;
    cout << v * v1 << " (product)" << endl;
    cout << v / v1 << " (quotient)" << endl;
    return 0;
}
