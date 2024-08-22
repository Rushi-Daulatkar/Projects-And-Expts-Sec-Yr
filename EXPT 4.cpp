#include <iostream>
using namespace std;

// Global variable declaration
int globalVar = 10;

void display() {
    cout << "Inside display function:" << endl;
    cout << "Global variable: " << globalVar << endl;
}

int main() {
    cout << "Inside main function:" << endl;
    cout << "Global variable: " << globalVar << endl;

    
    display();

    return 0;
}


#include <iostream>
using namespace std;

void display() {
    // Local variable declaration
    int localVar = 20;
    cout << "Inside display function:" << endl;
    cout << "Local variable: " << localVar << endl;
}

int main() {
    
    int localVar = 30;
    cout << "Inside main function:" << endl;
    cout << "Local variable: " << localVar << endl;

    display();

    return 0;
}
