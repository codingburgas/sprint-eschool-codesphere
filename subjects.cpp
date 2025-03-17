#include <iostream>
#include "subjects.h"
using namespace std;

void chooseSubject() {
    int subjectChoice;
    
    cout << "Select a subject:\n";
    cout << "1. Mathematics\n";
    cout << "2. Physics\n";
    cout << "3. Computer Science\n";
    cout << "Enter your choice: ";
    cin >> subjectChoice;

    switch (subjectChoice) {
        case 1:
            cout << "You selected Mathematics.\n";
            break;
        case 2:
            cout << "You selected Physics.\n";
            break;
        case 3:
            cout << "You selected Computer Science.\n";
            break;
        default:
            cout << "Invalid choice. Please try again.\n";
    }
}
