/*4. Write a C++ program to compute the quotient and remainder.*/

#include <iostream>
using namespace std;

int main() {
    int dividend, divisor, quotient, remainder;

    cout << "Enter the dividend: ";
    cin >> dividend;
    cout << "Enter the divisor: ";
    cin >> divisor;

    quotient = dividend / divisor;
    remainder = dividend % divisor;

    cout << "Quotient: " << quotient << endl;
    cout << "Remainder: " << remainder << endl;

    return 0;
}
