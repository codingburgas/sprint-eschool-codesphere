#include <iostream>
using namespace std;

void chooseSubject() {
    cout << "Select a subject:\n";
    cout << "1. Mathematics\n";
    cout << "2. Physics\n";
    cout << "3. Chemistry\n";
    cout << "Enter your choice: ";
    
    int subjectChoice;
    cin >> subjectChoice;

    switch (subjectChoice) {
        case 1:
            cout << "You selected Mathematics.\n";
            break;
        case 2:
            cout << "You selected Physics.\n";
            break;
        case 3:
            cout << "You selected Chemistry.\n";
            break;
        default:
            cout << "Invalid choice. Please try again.\n";
            break;
    }
}
