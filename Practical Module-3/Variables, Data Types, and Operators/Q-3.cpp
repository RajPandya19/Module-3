// - Program demonstrating arithmetic, relational, logical, bitwise operators.

#include <iostream>
using namespace std;

int main() {
    int a = 10, b = 3;

    // Arithmetic Operators
    cout << "a + b = " << a + b << endl;
    cout << "a - b = " << a - b << endl;
    cout << "a * b = " << a * b << endl;
    cout << "a / b = " << a / b << endl;
    cout << "a % b = " << a % b << endl;

    // Relational Operators
    cout << (a > b) << " (a > b)" << endl;
    cout << (a < b) << " (a < b)" << endl;
    cout << (a == b) << " (a == b)" << endl;
    cout << (a != b) << " (a != b)" << endl;

    // Logical Operators
    cout << (a > 5 && b < 5) << " (a > 5 && b < 5)" << endl;
    cout << (a < 5 || b < 5) << " (a < 5 || b < 5)" << endl;
    cout << !(a == b) << " (!(a == b))" << endl;

    // Bitwise Operators
    cout << "a & b = " << (a & b) << endl;
    cout << "a | b = " << (a | b) << endl;
    cout << "a ^ b = " << (a ^ b) << endl;
    cout << "~a = " << (~a) << endl;
    cout << "a << 1 = " << (a << 1) << endl;
    cout << "a >> 1 = " << (a >> 1) << endl;

    return 0;
}
