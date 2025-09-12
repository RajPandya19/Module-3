// - Program showing local vs global variables.

#include <iostream>
using namespace std;

int globalVar = 100; // global variable

int main() {
    int localVar = 50; // local variable

    cout << "Global variable: " << globalVar << endl;
    cout << "Local variable: " << localVar << endl;

    // Local variable can shadow global variable
    int globalVar = 10; 
    cout << "Local variable with same name as global: " << globalVar << endl;

    return 0;
}
