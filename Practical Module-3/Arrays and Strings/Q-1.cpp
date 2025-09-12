// - Program to input array, calculate sum & average.
#include <iostream>
using namespace std;

int main() {
    int n, sum = 0;
    cout << "How many numbers? ";
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        sum += arr[i];
    }

    cout << "Sum = " << sum << endl;
    cout << "Average = " << sum / (float)n << endl;

    return 0;
}
