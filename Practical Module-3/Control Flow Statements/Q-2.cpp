// - Number guessing game (1–100) using loops.

#include <iostream>
using namespace std;

int main() {
    int secret = 42;
    int guess;

    cout << "Guess a number between 1 and 100: ";
    do {
        cin >> guess;
        if (guess > secret)
            cout << "Too high! Try again: ";
        else if (guess < secret)
            cout << "Too low! Try again: ";
    } while (guess != secret);

    cout << "Congratulations! You guessed it!" << endl;
    return 0;
}
