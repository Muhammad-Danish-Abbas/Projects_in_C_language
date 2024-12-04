#include <iostream>
#include <string>
using namespace std;

int main() {
    int score = 0; // Player's score
    string answer; // To store player's answers

    cout << "Welcome to the Basic Quiz Game!\n";
    cout << "Answer the following questions by typing your answer.\n";
    cout << "Each correct answer is worth 1 point. Good luck!\n\n";

    // Question 1
    cout << "1. What is the capital of Pakistan?\n";
    cout << "a) Lahore\nb) Islamabad\nc) Karachi\nd) Peshawar\n";
    cout << "Your answer: ";
    cin >> answer;
    if (answer == "b" || answer == "B") {
        cout << "Correct!\n";
        score++;
    } else {
        cout << "Wrong! The correct answer is 'b) Islamabad'.\n";
    }

    // Question 2
    cout << "\n2. Which planet is known as the Red Planet?\n";
    cout << "a) Earth\nb) Venus\nc) Mars\nd) Jupiter\n";
    cout << "Your answer: ";
    cin >> answer;
    if (answer == "c" || answer == "C") {
        cout << "Correct!\n";
        score++;
    } else {
        cout << "Wrong! The correct answer is 'c) Mars'.\n";
    }

    // Question 3
    cout << "\n3. What is 5 + 7?\n";
    cout << "a) 10\nb) 12\nc) 13\nd) 15\n";
    cout << "Your answer: ";
    cin >> answer;
    if (answer == "b" || answer == "B") {
        cout << "Correct!\n";
        score++;
    } else {
        cout << "Wrong! The correct answer is 'b) 12'.\n";
    }

    // Question 4
    cout << "\n4. Which programming language is this quiz written in?\n";
    cout << "a) Python\nb) Java\nc) C++\nd) C\n";
    cout << "Your answer: ";
    cin >> answer;
    if (answer == "c" || answer == "C") {
        cout << "Correct!\n";
        score++;
    } else {
        cout << "Wrong! The correct answer is 'c) C++'.\n";
    }

    // Display final score
    cout << "\nYour final score is: " << score << " out of 4.\n";

    if (score == 4) {
        cout << "Excellent! You're a genius!\n";
    } else if (score >= 2) {
        cout << "Good job! You did well.\n";
    } else {
        cout << "Better luck next time!\n";
    }

    return 0;
}
