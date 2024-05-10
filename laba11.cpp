#include <iostream>

using namespace std;

int main() {

    int* ptr;


    ptr = new int;


    cout << "Enter a value: ";
    cin >> *ptr;


    *ptr += 2;


    cout << "Updated value: " << *ptr << endl;


    delete ptr;

    return 0;
}
