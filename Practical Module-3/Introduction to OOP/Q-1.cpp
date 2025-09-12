// - Class Calculator with add, subtract, multiply, divide methods.
#include <iostream>
using namespace std;

class Calculator {
public:
    int add(int a, int b)
     { return a + b; }
    int sub(int a, int b) 
    { return a - b; }
    int mul(int a, int b) 
    { return a * b; }
    float div(int a, int b) 
    { return (float)a / b; }
};

int main() {
    Calculator c;
    cout << "Add: " << c.add(5, 3) << endl;
    cout << "Sub: " << c.sub(5, 3) << endl;
    cout << "Mul: " << c.mul(5, 3) << endl;
    cout << "Div: " << c.div(5, 3) << endl;
    return 0;
}