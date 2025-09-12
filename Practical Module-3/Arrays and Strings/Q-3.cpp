// - String palindrome check.

#include <iostream>
#include <string>

using namespace std;

int main() {
    string str, reversedStr;

    // Ask the user to enter a string
    cout << "Enter a string: ";
    cin >> str;

    // Reverse the input string
    for (int i = str.length() - 1; i >= 0; i--) {
        reversedStr += str[i];  // Add characters from end to start
    }

    // Compare original string with reversed string
    if (str == reversedStr) {
        cout << "Palindrome" << endl;  // It's a palindrome
    } else {
        cout << "Not a palindrome" << endl;  // It's not a palindrome
    }

    return 0;
}
