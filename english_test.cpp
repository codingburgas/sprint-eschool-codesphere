#include <iostream>
#include "english_test.h"

using namespace std;

void startEnglishTest() {
    int score = 0;
    char answer;

    cout << "\n========== English Test ==========\n";

    struct Question {
        string text;
        string options[4];
        char correctAnswer;
    };

    Question questions[25] = {
        {"Which word is a noun?", {"A) Quickly", "B) Run", "C) Happiness", "D) Beautiful"}, 'C'},
        {"What is the past tense of 'go'?", {"A) Goed", "B) Gone", "C) Went", "D) Go"}, 'C'},
        {"Choose the correct sentence:", {"A) She don’t like ice cream.", "B) She doesn’t like ice cream.", "C) She not likes ice cream.", "D) She isn’t liking ice cream."}, 'B'},
        {"What is the opposite of 'happy'?", {"A) Sad", "B) Angry", "C) Excited", "D) Bored"}, 'A'},
        {"Which word is an adjective?", {"A) Dance", "B) Fast", "C) Sing", "D) Write"}, 'B'},
        {"What is the plural of 'child'?", {"A) Childs", "B) Childes", "C) Children", "D) Childen"}, 'C'},
        {"Which word is a verb?", {"A) Quickly", "B) Running", "C) Happiness", "D) Bright"}, 'B'},
        {"What is the superlative form of 'fast'?", {"A) Faster", "B) Fastest", "C) Most fast", "D) More fast"}, 'B'},
        {"Which sentence is correct?", {"A) He go to school.", "B) He goes to school.", "C) He going to school.", "D) He wented to school."}, 'B'},
        {"Which word is a preposition?", {"A) Quickly", "B) Under", "C) Beautiful", "D) Happiness"}, 'B'},
        {"What is the synonym of 'big'?", {"A) Large", "B) Small", "C) Tiny", "D) Light"}, 'A'},
        {"Which word is spelled correctly?", {"A) Diffrent", "B) Different", "C) Diferrent", "D) Differant"}, 'B'},
        {"Which sentence is grammatically correct?", {"A) She don't like coffee.", "B) She doesn't like coffee.", "C) She not like coffee.", "D) She isn't like coffee."}, 'B'},
        {"What is the past participle of 'eat'?", {"A) Eat", "B) Eated", "C) Ate", "D) Eaten"}, 'D'},
        {"Which word is a pronoun?", {"A) He", "B) Happy", "C) Run", "D) Fast"}, 'A'},
        {"Which of these is a complete sentence?", {"A) Because I was tired.", "B) I went home early.", "C) Running fast.", "D) In the morning."}, 'B'},
        {"What is the antonym of 'hot'?", {"A) Cold", "B) Warm", "C) Light", "D) Bright"}, 'A'},
        {"What is the correct contraction for 'do not'?", {"A) Don", "B) Dont", "C) Don’t", "D) Doesnt"}, 'C'},
        {"Which of these is an interrogative sentence?", {"A) I love pizza.", "B) Do you like pizza?", "C) He eats pizza.", "D) She is eating pizza."}, 'B'},
        {"What is the correct comparative form of 'good'?", {"A) More good", "B) Gooder", "C) Best", "D) Better"}, 'D'},
        {"Choose the correct sentence:", {"A) She can sings.", "B) She cans sing.", "C) She can sing.", "D) She singing can."}, 'C'},
        {"Which word is a conjunction?", {"A) And", "B) Running", "C) Quickly", "D) Apple"}, 'A'},
        {"What is the synonym of 'angry'?", {"A) Happy", "B) Mad", "C) Calm", "D) Excited"}, 'B'},
        {"Which sentence is correct?", {"A) She readed a book.", "B) She reads a book.", "C) She reading a book.", "D) She is read book."}, 'B'},
        {"What is the plural of 'mouse'?", {"A) Mouses", "B) Mouse", "C) Mice", "D) Mousies"}, 'C'}
    };

    for (int i = 0; i < 25; i++) {
        cout << "\n" << (i + 1) << ". " << questions[i].text << endl;
        for (int j = 0; j < 4; j++) {
            cout << questions[i].options[j] << endl;
        }

        cout << "Your answer (A, B, C, D): ";
        cin >> answer;
        answer = toupper(answer);

        if (answer == questions[i].correctAnswer) {
            cout << " Correct!\n";
            score++;
        } else {
            cout << " Wrong! The correct answer was: " << questions[i].correctAnswer << "\n";
        }
    }

    cout << "\nTest completed! Your score: " << score << "/25\n";
}
