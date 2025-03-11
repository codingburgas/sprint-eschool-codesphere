using namespace std;
#include <iostream>

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
    printTitle();
    cout << "Welcome to the e-testing app!" << endl;
    cout << "Please select an option from the menu below:" << endl;
    cout << "1. Choose a subject" << endl;
    cout << "2. See the results of the tests you took." << endl;
    cout << "3. Exit" << endl;

    int choice;
    cin >> choice;

    switch (choice) {
        case 1:
            cout << "Choose a subject" << endl;
            break;
        case 2:
            cout << "See the results of the tests you took." << endl;
            break;
        case 3:
            cout << "Exit" << endl;
            break;
        default:
            cout << "Invalid selection. Please try again." << endl;
            break;
    }

    return 0;
}