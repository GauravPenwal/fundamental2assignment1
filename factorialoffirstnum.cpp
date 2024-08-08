#include <iostream>
using namespace std;

// Function to calculate factorial
long long factorial(int n) {
    if (n == 0 || n == 1)
        return 1;
long long fact = 1;
    for (int i = 2; i <= n; ++i) {
        fact *= i;
    }
    return fact;
}

int main() {
    int n;

    cout << "Enter the value of n: ";
    cin >> n;

    // Check for valid input
    if (n < 0) {
        cout << "Factorial is not defined for negative numbers." << endl;
        return 1; // Exit with an error code
    }

    // Print factorials of first n numbers
    for (int i = 0; i <= n; ++i) {
        cout << "Factorial of " << i << " is " << factorial(i) << endl;
    }

    return 0;
}
