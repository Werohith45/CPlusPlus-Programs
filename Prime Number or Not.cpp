#include <iostream>
#include <cmath> 
using namespace std;


bool checkPrime(int n) {
    if (n <= 1) return false; 
    
    for (int i = 2; i <= sqrt(n); ++i) {
        if (n % i == 0) {
            return false; 
        }
    }
    return true; 
}

int main() 
{
    int m1, m2, m3;
    
    cout << "Enter the First Number: ";
    cin >> m1;
    cout << "Enter the Second Number: ";
    cin >> m2;
    cout << "Enter the Third Number: ";
    cin >> m3;

    // Check the First Number
    if (checkPrime(m1)) {
        cout << "\nThe First number is Prime: " << m1;
    } else {
        cout << "\nThe First Number is Not Prime: " << m1;
    }

    // Check the Second Number
    if (checkPrime(m2)) {
        cout << "\nThe Second number is Prime: " << m2;
    } else {
        cout << "\nThe Second Number is Not Prime: " << m2;
    }

    // Check the Third Number
    if (checkPrime(m3)) {
        cout << "\nThe Third number is Prime: " << m3;
    } else {
        cout << "\nThe Third Number is Not a Prime Number: " << m3;
    }


}
