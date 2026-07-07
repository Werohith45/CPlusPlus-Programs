#include <iostream>
using namespace std;

int main() {
    int n;
    long long factorial = 1; // Used long long because factorials grow very fast

    cout << "Enter a positive integer: ";
    cin >> n;

    // Error handling for negative numbers
    if (n < 0) {
        cout << "Error! Factorial of a negative number doesn't exist.";
    } else {
        // Loop to multiply numbers from 1 to n
        for (int i = 1; i <= n; ++i) {
            factorial *= i; // Same as: factorial = factorial * i;
        }
        cout << "Factorial of " << n << " = " << factorial;
    }

    return 0;
}
