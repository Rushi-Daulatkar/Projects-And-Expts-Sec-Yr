/*5. Write a Program to Check Whether a Number is an Armstrong Number or Not .*/

#include <iostream>
using namespace std;

int main() {
    int num, originalNum, remainder, result = 0;

    cout << "Enter an integer: ";
    cin >> num;

    originalNum = num;

    // Calculate the sum of the cubes of each digit
    while (originalNum != 0) {
        remainder = originalNum % 10;
        result += remainder * remainder * remainder;
        originalNum /= 10;
    }

    // Check if the result is equal to the original number
    if (result == num)
        cout << num << " is an Armstrong number." << endl;
    else
        cout << num << " is not an Armstrong number." << endl;

    return 0;
}
