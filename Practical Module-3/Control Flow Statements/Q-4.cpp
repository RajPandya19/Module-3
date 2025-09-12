// - Nested loop to print right-angled triangle with '*'.

#include <iostream>
using namespace std;

int main() {
    int rows;
    // cout << "Enter number of rows: ";
    // cin >> rows;
    for (int i = 1; i <= 5; i++) {       // outer loop
        for (int j = 1; j <= i; j++) {     // inner loop
            cout << " * ";
        }
        cout << endl;
    }
    return 0;
}
