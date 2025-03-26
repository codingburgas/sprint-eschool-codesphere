#include <iostream>
#include "subjects.h"

using namespace std;

void printTitle() {
    cout << "  CCCCC   OOOOO   DDDD    EEEEE  SSSSS   PPPPP   H   H   EEEEE  RRRRR   EEEEE   \n";
    cout << " C        O   O   D   D   E      S       P   P   H   H   E      R   R   E       \n";
    cout << " C        O   O   D   D   EEEE   SSSSS   PPPPP   HHHHH   EEEE   RRRRR   EEEE    \n";
    cout << " C        O   O   D   D   E          S   P       H   H   E      R  R    E           \n";
    cout << "  CCCCC   OOOOO   DDDD    EEEEE  SSSSS   P       H   H   EEEEE  R   R   EEEEE   \n";
    cout << "           TTTTT  EEEEE  SSSSS  TTTTT        A     PPPPP    PPPPP               \n";
    cout << "             T    E      S        T         A A    P    P   P    P              \n";
    cout << "             T    EEEE   SSSSS    T        AAAAA   PPPPP    PPPPP               \n";
    cout << "             T    E          S    T        A   A   P        P                   \n";
    cout << "             T    EEEEE  SSSSS    T       A     A  P        P                   \n";
}

int main() {
    int choice;

    printTitle();

    while (true) {
        cout << "\nWelcome to the e-testing app!\n";
        cout << "1. Choose a subject\n";
        cout << "2. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        if (cin.fail()) {
            cin.clear();
            cin.ignore(1000, '\n');
            cout << "Invalid input! Please enter a number.\n";
            continue;
         
        }

        switch (choice) {
            case 1:
                chooseSubject();
                break;
            case 2:
                cout << "Exiting... Goodbye!\n";
                return 0;
            default:
                cout << "Invalid choice. Please try again.\n";
        }
    }
}
