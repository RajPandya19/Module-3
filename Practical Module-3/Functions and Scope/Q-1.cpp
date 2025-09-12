// - Calculator using functions (add, subtract, multiply, divide).
#include <iostream>
using namespace std;

// Function declarations
int add(int a, int b) { return a + b; }
int subtract(int a, int b) { return a - b; }
int multiply(int a, int b) { return a * b; }
float divide(float a, float b) { return a / b; }

int main() {
    int x, y;
    cout << "Enter two numbers: ";
    cin >> x >> y;

    cout << "Add: " << add(x, y) << endl;
    cout << "Subtract: " << subtract(x, y) << endl;
    cout << "Multiply: " << multiply(x, y) << endl;
    cout << "Divide: " << divide(x, y) << endl;

    return 0;
}
