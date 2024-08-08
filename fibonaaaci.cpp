#include <iostream>
using namespace std;

// Function to print the first n Fibonacci numbers
void printFibonacci(int n) {
    if (n <= 0) {
        cout << "The value of n should be a positive integer." << endl;
        return;
    }

    // Special cases for n = 1 and n = 2
    if (n == 1) {
        cout << "Fibonacci number 1: 0" << endl;
        return;
    }
    if (n == 2) {
        cout << "Fibonacci number 1: 0" << endl;
        cout << "Fibonacci number 2: 1" << endl;
        return;
    }

    // Variables to store Fibonacci numbers
    unsigned long long a = 0, b = 1, c;

    cout << "Fibonacci number 1: " << a << endl;
    cout << "Fibonacci number 2: " << b << endl;

    for (int i = 3; i <= n; ++i) {
        c = a + b;
        cout << "Fibonacci number " << i << ": " << c << endl;
        a = b;
        b = c;
    }
}

int main() {
    int n;

    cout << "Enter the value of n: ";
    cin >> n;

    // Print the first n Fibonacci numbers
    printFibonacci(n);

    return 0;
}
