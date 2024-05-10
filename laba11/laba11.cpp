#include <iostream>

using namespace std;

int main() {

    double a, b;


    cout << "Enter the value of a: ";
    cin >> a;
    cout << "Enter the value of b: ";
    cin >> b;


    double* ptrA = &a;
    double* ptrB = &b;


    *ptrA *= 3;
    *ptrB /= 3;


    cout << "Updated value of a: " << a << endl;
    cout << "Updated value of b: " << b << endl;

    return 0;
}
