#include <iostream>
#include "math_test.h"

using namespace std;

void startMathTest() {
    int score = 0;
    int answer;

    struct Question {
        string question;
        string options[4];
        int correctAnswer;
    };

    Question questions[25] = {
        {"1. What is 5 + 3?", {"1) 6", "2) 7", "3) 8", "4) 9"}, 3},
        {"2. What is 10 * 2?", {"1) 10", "2) 20", "3) 30", "4) 40"}, 2},
        {"3. What is 15 / 3?", {"1) 3", "2) 4", "3) 5", "4) 6"}, 3},
        {"4. What is 7 * 7?", {"1) 49", "2) 56", "3) 63", "4) 77"}, 1},
        {"5. What is the square root of 25?", {"1) 3", "2) 4", "3) 5", "4) 6"}, 3},
        {"6. If x + 2 = 5, what is x?", {"1) 1", "2) 2", "3) 3", "4) 4"}, 3},
        {"7. What is 12 squared?", {"1) 124", "2) 144", "3) 132", "4) 121"}, 2},
        {"8. What is the cube root of 27?", {"1) 2", "2) 3", "3) 4", "4) 5"}, 2},
        {"9. What is the value of π (pi) to 2 decimal places?", {"1) 3.12", "2) 3.14", "3) 3.16", "4) 3.18"}, 2},
        {"10. Solve: 2x = 8", {"1) 2", "2) 3", "3) 4", "4) 5"}, 3},
        {"11. What is 81 / 9?", {"1) 7", "2) 8", "3) 9", "4) 10"}, 3},
        {"12. What is 25% of 200?", {"1) 25", "2) 50", "3) 75", "4) 100"}, 2},
        {"13. What is the missing number: 4, 8, __, 16, 20", {"1) 10", "2) 12", "3) 14", "4) 15"}, 2},
        {"14. Solve: 5x - 2 = 13", {"1) 2", "2) 3", "3) 4", "4) 5"}, 3},
        {"15. Convert 0.75 to a fraction.", {"1) 1/2", "2) 3/4", "3) 2/3", "4) 4/5"}, 2},
        {"16. Find the perimeter of a square with side 5 cm.", {"1) 10 cm", "2) 15 cm", "3) 20 cm", "4) 25 cm"}, 3},
        {"17. What is the area of a triangle with base 8 cm and height 5 cm?", {"1) 10 cm²", "2) 20 cm²", "3) 30 cm²", "4) 40 cm²"}, 2},
        {"18. Solve: 2² + 3²", {"1) 5", "2) 9", "3) 13", "4) 14"}, 3},
        {"19. What is the next prime number after 11?", {"1) 12", "2) 13", "3) 14", "4) 15"}, 2},
        {"20. A rectangle has a length of 10 cm and width of 4 cm. Find its area.", {"1) 20 cm²", "2) 30 cm²", "3) 40 cm²", "4) 50 cm²"}, 3},
        {"21. Convert 0.2 to a percentage.", {"1) 2%", "2) 20%", "3) 200%", "4) 0.2%"}, 2},
        {"22. Solve for x: 3x = 12", {"1) 2", "2) 3", "3) 4", "4) 5"}, 3},
        {"23. How many degrees are in a right angle?", {"1) 45", "2) 60", "3) 90", "4) 120"}, 3},
        {"24. What is 2³?", {"1) 4", "2) 6", "3) 8", "4) 10"}, 3},
        {"25. If a car travels 60 km in 1 hour, how far will it go in 3 hours?", {"1) 120 km", "2) 180 km", "3) 240 km", "4) 300 km"}, 2},
    };

    for (int i = 0; i < 25; i++) {
        cout << questions[i].question << endl;
        for (int j = 0; j < 4; j++) {
            cout << questions[i].options[j] << "  ";
        }
        cout << "\nYour answer (1-4): ";

        while (true) {
            cin >> answer;
            if (cin.fail() || answer < 1 || answer > 4) {
                cin.clear();
                cin.ignore(1000, '\n');
                cout << "Invalid input! Please enter 1, 2, 3, or 4: ";
            } else {
                break;
            }
        }

        if (answer == questions[i].correctAnswer) {
            score++;
        }
    }

    cout << "\nTest completed! Your score: " << score << "/25\n";
}
