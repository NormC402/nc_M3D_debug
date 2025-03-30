#include <iostream>
#include <limits>

using namespace std;

int main() {
    // Get number
    int n;
    cout << "Enter a whole number between 1 and 100: ";
    // Keep asking for input until input is valid
    while (!(cin >> n) || n < 1 || n > 100) {
        cin.clear(); // Clear error flag
        cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Ignore invalid input
        cout << "Invalid input. Please enter a whole number between 1 and 100: " << endl;
    }

    // Iterate from 1 to the input number
    for (int i = 1; i <= n; i++) {

        // If the number is divisible by both 3 and 5
        if (i % 15 == 0) {
            cout << "FizzBuzz" << endl;
        // If the number is divisible by 3
        } else if (i % 3 == 0) {
            cout << "Fizz" << endl;
        // If the number is divisible by 5
        } else if (i % 5 == 0) {
            cout << "Buzz" << endl;
        // If the number is divisible by neither 3 nor 5
        } else {
            cout << i << endl;
        }
    }

    return 0;
}
