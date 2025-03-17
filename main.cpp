#include <iostream>
#include "subjects.h"

using namespace std;

int main() {
    int choice;
    
    while (true) {
        cout << "Welcome to the e-testing app!" << endl;
        cout << "Please select an option from the menu below:" << endl;
        cout << "1. Choose a subject" << endl;
        cout << "2. See the results of the tests you took." << endl;
        cout << "3. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                chooseSubject();
                break;
            case 2:
                cout << "Results are not implemented yet." << endl;
                break;
            case 3:
                cout << "Exiting..." << endl;
                return 0;
            default:
                cout << "Invalid choice. Please try again." << endl;
        }
    }
}
