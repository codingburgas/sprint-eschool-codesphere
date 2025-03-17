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
    cout << "     ╚═╝   ╚══════╝╚══════╝   ╚═╝   ╚═╝  ╚═╝╚═╝     ╚═╝    \n";
}

int main() {
    int choice;
    
    printTitle();
    
    while (true) {
        cout << "\nWelcome to the e-testing app!" << endl;
        cout << "Please select an option from the menu below:" << endl;
        cout << "1. Choose a subject" << endl;
        cout << "2. See the results of the tests you took." << endl;
        cout << "3. Exit" << endl;
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
