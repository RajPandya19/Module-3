// - Program showing implicit and explicit type conversion.

#include <iostream>
using namespace std;

int main() {
    int a = 10;
    float b = a;
    cout << "Implicit: " << b << endl;

    float pi = 3.14;
    int c = int(pi); 
    cout << "Explicit: " << c << endl;

    return 0;
}
