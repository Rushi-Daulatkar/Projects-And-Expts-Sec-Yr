/*2. Write a C++ program that swaps two variables without using a third
variable.*/

#include <iostream>
using namespace std;

int main() {
    int a, b;

    cout << "Enter the value of a: ";
    cin >> a;
    cout << "Enter the value of b: ";
    cin >> b;

    // Swapping the values without using a third variable
    a = a + b;
    b = a - b;
    a = a - b;

    cout << "After swapping, value of a: " << a << endl;
    cout << "After swapping, value of b: " << b << endl;

    return 0;
}
