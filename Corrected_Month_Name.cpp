/*
* Student Name: Jay Fisher
* File Name: M3Discussion.cpp
* Date: 03/23/2025
*/

#include <iostream>
#include <conio.h>

// Use the correct namespace
using namespace std;

int main() {
    int month; // Changed to int for compatibility with switch
    cout << "\n\n  This program will tell you the month name from the number";
    
    // Replacing `goto` with a `do-while` loop
    do {
        cout << "\n\n  Enter the number of the month (1-12): ";
        cin >> month;

        if (cin.fail()) {
            cin.clear(); // Clear error flag
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Ignore invalid input
            month = 0; // Assign an invalid value to trigger the default case
        }

        // Switch statement for month names
        switch (month) {
        case 1:
            cout << "\n  January" << endl;
            break;
        case 2:
            cout << "\n  February" << endl;
            break;
        case 3:
            cout << "\n  March" << endl;
            break;
        case 4: // Added missing colon
            cout << "\n  April" << endl;
            break;
        case 5:
            cout << "\n  May" << endl;
            break;
        case 6:
            cout << "\n  June" << endl;
            break;
        case 7:
            cout << "\n  July" << endl;
            break;
        case 8:
            cout << "\n  August" << endl;
            break;
        case 9:
            cout
