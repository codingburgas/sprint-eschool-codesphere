#include <iostream>
#include "science_test.h"

using namespace std;

void startScienceTest() {
    int score = 0;
    char answer;

    cout << "\n========== Science Test ==========\n";

    struct Question {
        string text;
        string options[4];
        char correctAnswer;
    };

    Question questions[25] = {
        {"What is the chemical symbol for water?", 
            {"A) H2O", "B) O2", "C) CO2", "D) HO2"}, 'A'},
        {"Which planet is known as the Red Planet?", 
            {"A) Earth", "B) Venus", "C) Mars", "D) Jupiter"}, 'C'},
        {"What is the process by which plants make their own food?", 
            {"A) Respiration", "B) Photosynthesis", "C) Fermentation", "D) Digestion"}, 'B'},
        {"Which gas do humans breathe in for survival?", 
            {"A) Carbon dioxide", "B) Nitrogen", "C) Oxygen", "D) Hydrogen"}, 'C'},
        {"What is the hardest natural substance on Earth?", 
            {"A) Iron", "B) Gold", "C) Diamond", "D) Quartz"}, 'C'},
        {"Which organ pumps blood throughout the human body?", 
            {"A) Brain", "B) Liver", "C) Heart", "D) Lungs"}, 'C'},
        {"What is the force that keeps us on the ground?", 
            {"A) Magnetism", "B) Gravity", "C) Friction", "D) Pressure"}, 'B'},
        {"What is the largest planet in the Solar System?", 
            {"A) Earth", "B) Mars", "C) Jupiter", "D) Saturn"}, 'C'},
        {"What is the main gas found in Earth's atmosphere?", 
            {"A) Oxygen", "B) Nitrogen", "C) Carbon dioxide", "D) Helium"}, 'B'},
        {"Which part of the plant is responsible for photosynthesis?", 
            {"A) Root", "B) Stem", "C) Leaf", "D) Flower"}, 'C'},
        {"What is the boiling point of water at sea level?", 
            {"A) 50C", "B) 75C", "C) 100C", "D) 150C"}, 'C'},
        {"What type of energy is produced by the sun?", 
            {"A) Nuclear", "B) Solar", "C) Chemical", "D) Mechanical"}, 'B'},
        {"What is the basic unit of life?", 
            {"A) Atom", "B) Molecule", "C) Cell", "D) Organ"}, 'C'},
        {"What do bees collect from flowers to make honey?", 
            {"A) Nectar", "B) Pollen", "C) Water", "D) Seeds"}, 'A'},
        {"Which part of the body helps humans balance?", 
            {"A) Eyes", "B) Inner ear", "C) Nose", "D) Hands"}, 'B'},
        {"What is the smallest bone in the human body?", 
            {"A) Femur", "B) Tibia", "C) Stapes", "D) Radius"}, 'C'},
        {"Which gas do plants absorb from the atmosphere?", 
            {"A) Oxygen", "B) Carbon dioxide", "C) Nitrogen", "D) Hydrogen"}, 'B'},
        {"What causes tides in the ocean?", 
            {"A) Wind", "B) Earth's rotation", "C) Moon's gravity", "D) Ocean currents"}, 'C'},
        {"What do we call animals that only eat plants?", 
            {"A) Carnivores", "B) Herbivores", "C) Omnivores", "D) Insectivores"}, 'B'},
        {"How many bones are in the adult human body?", 
            {"A) 100", "B) 206", "C) 300", "D) 150"}, 'B'},
        {"Which scientist developed the theory of relativity?", 
            {"A) Isaac Newton", "B) Nikola Tesla", "C) Albert Einstein", "D) Galileo Galilei"}, 'C'},
        {"Which planet is closest to the sun?", 
            {"A) Venus", "B) Earth", "C) Mercury", "D) Mars"}, 'C'},
        {"What type of blood cells help fight infections?", 
            {"A) Red blood cells", "B) Platelets", "C) White blood cells", "D) Plasma"}, 'C'},
        {"Which layer of Earth's atmosphere protects us from the sun's UV radiation?", 
            {"A) Troposphere", "B) Ozone layer", "C) Stratosphere", "D) Mesosphere"}, 'B'},
        {"What is the main ingredient in table salt?", 
            {"A) Potassium", "B) Sodium chloride", "C) Calcium", "D) Magnesium"}, 'B'}
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
