#include <iostream>
#include "subjects.h"

using namespace std;

void printTitle() {
    cout << "  ██████╗ ██████╗ ██████╗  ███████╗ ███████╗██████╗ ██╗  ██╗███████╗██████╗  ███████╗\n";
    cout << " ██╔════╝██╔═══██╗██╔══██╗ ██╔════╝ ██╔════╝██╔══██╗██║  ██║██╔════╝██╔══██╗ ██╔════╝\n";
    cout << " ██║     ██║   ██║██║  ██║╝█████╗   █████╗  ██████╔╝███████║█████╗  ██████╔╝ █████╗  \n";
    cout << " ██║     ██║   ██║██║  ██║ ██╔══╝  ╚════██╗ ██╔═══╝ ██╔══██║██╔══╝  ██╔██═╝  ██╔══╝  \n";
    cout << " ╚██████╗╚██████╔╝██████╔╝ ███████╗██████╔╝ ██║     ██║  ██║███████╗██║ ██║  ███████╗ \n";
    cout << "  ╚═════╝ ╚═════╝ ╚═════╝  ╚══════╝╚═════╝  ╚═╝     ╚═╝  ╚═╝╚══════╝ ═╝ ╚═╝  ╚══════╝\n";

    cout << "  ████████╗███████╗███████╗████████╗ █████╗ ██████╗ ██████╗ \n";
    cout << "  ╚══██╔══╝██╔════╝██╔════╝╚══██╔══╝██╔══██╗██╔══██╗██╔══██╗\n";
    cout << "     ██║   █████╗  ███████╗   ██║   ███████║██████╔╝██████╔╝\n";
    cout << "     ██║   ██╔══╝  ╚════██║   ██║   ██╔══██║██╔═══╝ ██╔═══╝ \n";
    cout << "     ██║   ███████╗███████║   ██║   ██║  ██║██║     ██║     \n";
    cout << "     ╚═╝   ╚══════╝╚══════╝   ╚═╝   ╚═╝  ╚═╝╚═╝     ╚═╝     \n";
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
