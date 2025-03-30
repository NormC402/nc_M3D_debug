#include <iostream>
#include <iomanip>
using namespace std;

// Constants for fixed royalties and royalty rates
const double OPTION1_DELIVERY_PAY = 5000.0; // Option 1 delivery payment
const double OPTION1_PUBLICATION_PAY = 20000.0; // Option 1 publication payment
const double OPTION2_ROYALTY_RATE = 0.125; // 12.5% royalty rate for option 2
const double OPTION3_LOWER_RATE = 0.10; // 10% royalty rate for first 4000 copies
const double OPTION3_HIGHER_RATE = 0.14; // 14% royalty rate for copies above 4000
const int OPTION3_THRESHOLD = 4000; // Threshold for higher rate in option 3

int main() {
    double netPrice; // Net price of each copy of the novel
    int estimatedCopies; // Estimated number of copies to be sold
    double option1Royalties, option2Royalties, option3Royalties; // Royalties for each option
    int bestOption; // Variable to store the best option

    // Prompt the user for input
    cout << fixed << setprecision(2); // Format output to 2 decimal places
    cout << "Enter the net price of each copy of the novel: ";
    cin >> netPrice;
    cout << "Enter the estimated number of copies to be sold: ";
    cin >> estimatedCopies;

    // Calculate royalties for option 1
    option1Royalties = OPTION1_DELIVERY_PAY + OPTION1_PUBLICATION_PAY;

    // Calculate royalties for option 2
    option2Royalties = OPTION2_ROYALTY_RATE * netPrice * estimatedCopies;

    // Calculate royalties for option 3
    if (estimatedCopies <= OPTION3_THRESHOLD) {
        option3Royalties = OPTION3_LOWER_RATE * netPrice * estimatedCopies;
    }
    else {
        option3Royalties = (OPTION3_LOWER_RATE * netPrice * OPTION3_THRESHOLD) +
            (OPTION3_HIGHER_RATE * netPrice * (estimatedCopies - OPTION3_THRESHOLD));
    }

    // Determine the best option using a switch statement
    if (option1Royalties > option2Royalties && option1Royalties > option3Royalties) {
        bestOption = 1;
    }
    else if (option2Royalties > option1Royalties && option2Royalties > option3Royalties) {
        bestOption = 2;
    }
    else {
        bestOption = 3;
    }

    // Output the royalties and the best option
    cout << "\nRoyalties under each option:\n";
    cout << "Option 1: $" << option1Royalties << endl;
    cout << "Option 2: $" << option2Royalties << endl;
    cout << "Option 3: $" << option3Royalties << endl;

    cout << "\nThe best option for the author is: ";
    switch (bestOption) {
    case 1:
        cout << "Option 1 (Fixed Payments: $5000 + $20000)" << endl;
        break;
    case 2:
        cout << "Option 2 (12.5% royalties on all copies sold)" << endl;
        break;
    case 3:
        cout << "Option 3 (10% for first 4000 copies, 14% for additional copies)" << endl;
        break;
    }

    return 0; // Indicate successful execution
}
