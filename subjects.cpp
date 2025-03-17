#include <iostream>
#include "subjects.h"

using namespace std;

void chooseSubject() {
    cout << "Available subjects:" << endl;
    cout << "1. Math" << endl;
    cout << "2. Physics" << endl;
    cout << "3. Chemistry" << endl;
    cout << "Choose a subject (1-3): ";
    
    int subject;
    cin >> subject;

    switch (subject) {
        case 1:
            cout << "You selected Math." << endl;
            break;
        case 2:
            cout << "You selected Physics." << endl;
            break;
        case 3:
            cout << "You selected Chemistry." << endl;
            break;
        default:
            cout << "Invalid subject." << endl;
    }
}
