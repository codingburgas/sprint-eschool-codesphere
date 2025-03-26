#include <iostream>
#include "history_test.h"

using namespace std;

void startHistoryTest() {
    int score = 0;
    char answer;

    cout << "\n========== History Test ==========\n";

    struct Question {
        string text;
        string options[4];
        char correctAnswer;
    };

    Question questions[25] = {
        {"Who was the first President of the United States?", 
            {"A) George Washington", "B) Abraham Lincoln", "C) Thomas Jefferson", "D) John Adams"}, 'A'},
        {"Which year did World War II end?", 
            {"A) 1942", "B) 1945", "C) 1948", "D) 1950"}, 'B'},
        {"What was the name of the ship that brought the Pilgrims to America in 1620?", 
            {"A) Titanic", "B) Santa Maria", "C) Mayflower", "D) Beagle"}, 'C'},
        {"Who was known as the 'Iron Lady'?", 
            {"A) Angela Merkel", "B) Margaret Thatcher", "C) Queen Elizabeth II", "D) Indira Gandhi"}, 'B'},
        {"Which ancient civilization built the pyramids?", 
            {"A) Romans", "B) Greeks", "C) Egyptians", "D) Mayans"}, 'C'},
        {"What year did the French Revolution begin?", 
            {"A) 1789", "B) 1804", "C) 1812", "D) 1765"}, 'A'},
        {"Who wrote the 'Declaration of Independence'?", 
            {"A) Benjamin Franklin", "B) George Washington", "C) Thomas Jefferson", "D) John Hancock"}, 'C'},
        {"What was the name of the wall that separated East and West Berlin?", 
            {"A) Great Wall of China", "B) Berlin Wall", "C) Iron Curtain", "D) Cold War Wall"}, 'B'},
        {"Which battle marked the end of Napoleon’s reign?", 
            {"A) Battle of Trafalgar", "B) Battle of Waterloo", "C) Battle of Hastings", "D) Battle of Normandy"}, 'B'},
        {"Who was the first man to walk on the moon?", 
            {"A) Neil Armstrong", "B) Buzz Aldrin", "C) Yuri Gagarin", "D) Michael Collins"}, 'A'},
        {"In which year did the Titanic sink?", 
            {"A) 1905", "B) 1912", "C) 1918", "D) 1923"}, 'B'},
        {"Who was the leader of Nazi Germany during World War II?", 
            {"A) Joseph Stalin", "B) Adolf Hitler", "C) Winston Churchill", "D) Benito Mussolini"}, 'B'},
        {"What was the capital of the Roman Empire?", 
            {"A) Athens", "B) Rome", "C) Constantinople", "D) Carthage"}, 'B'},
        {"Which empire was ruled by Genghis Khan?", 
            {"A) Roman Empire", "B) Mongol Empire", "C) Ottoman Empire", "D) Persian Empire"}, 'B'},
        {"Who was the first Emperor of China?", 
            {"A) Confucius", "B) Mao Zedong", "C) Qin Shi Huang", "D) Sun Yat-sen"}, 'C'},
        {"What was the name of the first human civilization?", 
            {"A) Ancient Rome", "B) Mesopotamia", "C) Ancient Greece", "D) Indus Valley"}, 'B'},
        {"Which war was fought between the North and South regions of the United States?", 
            {"A) American Revolution", "B) World War I", "C) American Civil War", "D) Vietnam War"}, 'C'},
        {"Who was assassinated in Sarajevo in 1914, sparking World War I?", 
            {"A) Kaiser Wilhelm II", "B) Franz Ferdinand", "C) Tsar Nicholas II", "D) Winston Churchill"}, 'B'},
        {"Which country gifted the Statue of Liberty to the United States?", 
            {"A) France", "B) Germany", "C) Italy", "D) Spain"}, 'A'},
        {"What year did Christopher Columbus discover America?", 
            {"A) 1492", "B) 1510", "C) 1607", "D) 1776"}, 'A'},
        {"Which war was known as 'The Great War' before World War II?", 
            {"A) Napoleonic Wars", "B) World War I", "C) American Civil War", "D) Seven Years' War"}, 'B'},
        {"What was the name of the U.S. project to develop the atomic bomb?", 
            {"A) Operation Overlord", "B) Manhattan Project", "C) Apollo Program", "D) Cold War Initiative"}, 'B'},
        {"Which ancient city was buried under volcanic ash from Mount Vesuvius?", 
            {"A) Athens", "B) Troy", "C) Carthage", "D) Pompeii"}, 'D'},
        {"Who was the famous queen of Egypt known for her relationships with Julius Caesar and Mark Antony?", 
            {"A) Nefertiti", "B) Hatshepsut", "C) Cleopatra", "D) Isis"}, 'C'},
        {"Who was the first person to circumnavigate the globe?", 
            {"A) Christopher Columbus", "B) Ferdinand Magellan", "C) Marco Polo", "D) James Cook"}, 'B'}
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
