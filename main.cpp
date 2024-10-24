//
//  main.cpp
//  validateCustomerNumber
//
//  Created by Sonia Lopchan on 10/23/24.

#include <iostream>
#include <cctype>

using namespace std;

int main() {
    string customerNumber;
    cout << "Enter customer number: ";
    cin >> customerNumber;

    // Check if the length is 6
    if (customerNumber.length() != 6) {
        cout << "Invalid customer number.\n";
        return 0; // Exit if the length is wrong
    }

    // Check if first two characters are alphabets
    for (int i = 0; i < 2; i++) {
        if (!isalpha(customerNumber[i])) {
            cout << "Invalid customer number.\n";
            return 0; // Exit if any character is invalid
        }
    }

    // Check if last four characters are digits
    for (int i = 2; i < 6; i++) {
        if (!isdigit(customerNumber[i])) {
            cout << "Invalid customer number.\n";
            return 0; // Exit if any character is invalid
        }
    }

    cout << "Valid customer number.\n";
    
    return 0;
}
