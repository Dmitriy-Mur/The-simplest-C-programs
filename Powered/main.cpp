#include <iostream>
using namespace std;

double recurion_power(double basis, int exponent);
double direct_power(double basis, int exponent);

int main() {
    for (int i = -7; i < 7; i++) {
        for (int j = -7; j < 7; j++) {
            cout << i << "^" << j << " = " << pow(i, j) << " = " << recurion_power(i, j) << " = " << direct_power(i, j) << '\n';
        }
    }
    return 0;
}

double recurion_power(double basis, int exponent) {
    if (exponent == 0) {
        return 1.0;
    }
    else if (exponent < 0) {
        return (1.0 / recurion_power(basis, -exponent));
    }
    return (basis * recurion_power(basis, exponent - 1));
}

double direct_power(double basis, int exponent) {
    double ans = basis;
    if (exponent < 0) {
        if (basis == 0) {
            return 0.0;
        }
        for (int i = 1; i > exponent; i--) {
            ans = ans / basis;
        }
    }
    else {
        for (int i = 1; i < exponent; i++) {
            ans = ans * basis;
        }
    }
    return ans;
}