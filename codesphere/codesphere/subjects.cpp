#include <iostream>
#include "subjects.h"
#include "math_test.h"
#include "history_test.h"
#include "science_test.h"
#include "english_test.h"

using namespace std;

void chooseSubject() {
    int subjectChoice;
    while (true) {
        cout << "\nSelect a subject:\n";
        cout << "1. Math\n";
        cout << "2. History\n";
        cout << "3. Science\n";
        cout << "4. English\n";
        cout << "5. Back to Main Menu\n";
        cout << "Enter your choice: ";
        cin >> subjectChoice;

        switch (subjectChoice) {
            case 1:
                startMathTest();
                break;
            case 2:
                startHistoryTest();
                break;
            case 3:
                startScienceTest();
                break;
            case 4:
                startEnglishTest();
                break;
            case 5:
                return;
            default:
                cout << "Invalid choice! Please try again.";
                return;

                break;

        }
    }
}
