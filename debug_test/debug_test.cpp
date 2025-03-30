#include <iostream>
using namespace std;

int main()
{
    int age;
    cout << "Enter your age: ";
    cin >> age;

    if age >= 18 // ? ERROR 1: Missing parentheses around condition
        cout << "You are eligible to vote!" << endl;
    else if (age < 0) // This condition comes *after* the first, which is logically out of order
        cout << "Invalid age entered." << endl
    else // ? ERROR 2: Missing semicolon on the previous line
        cout << "You are not eligible to vote!" << endl

        return 0 // ? ERROR 3: Missing semicolon at the end
}
