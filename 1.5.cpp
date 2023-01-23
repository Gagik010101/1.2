#include <iostream>
using namespace std;

int gcd(int a, int b) {
    if (a == 0) {
        return b;
    }
    if (b == 0) {
        return a;
    }
    if (a == b) {
        return a;
    }
    if (a > b) {
        return gcd(a - b, b);
    }
    else {
        return gcd(a, b - a);
    }
}
int lcm(int a, int b) {
    int c = gcd(a, b);
    return (a * b / c);
}

int main() {
    int a, b;
    cout << "Enter the first number - ";
    cin >> a;
    cout << "Enter the second number - ";
    cin >> b;
    cout << "Greatest common divisor of " << a << " and " << b << " is " << gcd(a, b) << endl;
    cout << "Least common multiple of " << a << " and " << b << " is " << lcm(a, b);
    return 0;
}