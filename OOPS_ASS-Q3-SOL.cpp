/*3. Write a C++ program to enter length in centimeters and convert it into
meters and kilometers*/

#include <iostream>
using namespace std;

int main() {
    double centimeters, meters, kilometers;

    cout << "Enter length in centimeters: ";
    cin >> centimeters;

    meters = centimeters / 100;
    kilometers = centimeters / 100000;

    cout << "Length in meters: " << meters << endl;
    cout << "Length in kilometers: " << kilometers << endl;

    return 0;
}
