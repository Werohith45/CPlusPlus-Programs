#include <iostream>
using namespace std;

int main() {
    int terms;
    int t1 = 0, t2 = 1, nextTerm = 0;

    cout << "Enter the number of terms you want to print: ";
    cin >> terms;

    cout << "Fibonacci Series: ";

    for (int i = 1; i <= terms; ++i) {
        // Print the current term
        cout << t1 << " ";
        
        // Calculate the next term in the sequence
        nextTerm = t1 + t2;
        
        // Shift variables to move to the next step
        t1 = t2;
        t2 = nextTerm;
    }

    cout << endl;
    return 0;
}
