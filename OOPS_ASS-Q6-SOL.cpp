/*6. Write a Program to Check Whether a Number is an palindrome Number or Not .*/

#include <iostream>
using namespace std;

int main() {
    int num, originalNum, reversedNum = 0, remainder;

    cout << "Enter an integer: ";
    cin >> num;

    originalNum = num;

    // Reverse the number
    while (originalNum != 0) {
        remainder = originalNum % 10;
        reversedNum = reversedNum * 10 + remainder;
        originalNum /= 10;
    }

    // Check if the reversed number is equal to the original number
    if (reversedNum == num)
        cout << num << " is a palindrome number." << endl;
    else
        cout << num << " is not a palindrome number." << endl;

    return 0;
}
