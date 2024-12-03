#include <iostream>
#include <cstdlib>  // Random number generation ke liye
#include <ctime>    // Random number generator ko seed karne ke liye (time ke sath)
using namespace std;

// Function jo validate karti hai ke input valid hai ya nahi
bool isValidChoice(int choice, int min, int max) {
    return (choice >= min && choice <= max);  // Agar choice min aur max ke beech hai to true return karega
}

int main() {
    int n, choice, rule, count = 0, sum = 0;
    int startRange, endRange, difficulty;

    // Random number generator ko seed karte hain
    srand(time(0));

    do {
        // Game ki introduction
        cout << "\nWelcome to the Enhanced Number Counting Game!" << endl;
        cout << "Choose a game mode:" << endl;
        cout << "1. Count even numbers" << endl;
        cout << "2. Sum even numbers" << endl;
        cout << "3. Count odd numbers" << endl;
        cout << "4. Sum odd numbers" << endl;
        cout << "5. Count multiples of a number" << endl;
        cout << "6. Count or Sum random numbers" << endl;
        cout << "Enter your choice (1-6): ";
        cin >> choice;

        // Choice ko validate kar rahe hain
        if (!isValidChoice(choice, 1, 6)) {
            cout << "Invalid choice! Please choose a valid option." << endl;
            continue; // Agar choice invalid hai toh loop dobara chalaye
        }

        // Difficulty level select karne ka option
        cout << "Select Difficulty Level: (1: Easy, 2: Medium, 3: Hard): ";
        cin >> difficulty;

        // Agar difficulty invalid ho toh default Easy rakh rahe hain
        if (!isValidChoice(difficulty, 1, 3)) {
            cout << "Invalid difficulty level! Defaulting to Easy." << endl;
            difficulty = 1;
        }

        // Difficulty ke hisaab se number ka range set kar rahe hain
        switch (difficulty) {
            case 1:
                startRange = 1;
                endRange = 50;
                break;
            case 2:
                startRange = 1;
                endRange = 100;
                break;
            case 3:
                startRange = 1;
                endRange = 200;
                break;
        }

        // Agar user ne random numbers select kiye hain
        if (choice == 6) {
            cout << "How many random numbers do you want to process? ";
            cin >> n;
        } else {
            // Agar normal numbers ko check karna ho
            cout << "How many numbers do you want to check? ";
            cin >> n;
        }

        // Agar user ne "multiples of a number" rule select kiya hai toh specific divisor input le rahe hain
        if (choice == 5) {
            cout << "Enter the number for checking multiples: ";
            cin >> rule;
            if (rule == 0) {
                cout << "The number cannot be zero." << endl;
                continue;
            }
        }

        // Loop jisme numbers ko check kar rahe hain
        for (int i = 1; i <= n; i++) {
            // Agar random number mode select kiya gaya ho toh random number generate karenge
            int num = (choice == 6) ? rand() % (endRange - startRange + 1) + startRange : i;

            bool applyRule = false;

            // Different rules ke liye cases
            switch (choice) {
                case 1: // Even numbers count karna
                    if (num % 2 == 0) {
                        count++;  // Agar number even hai toh count badhaye
                    }
                    break;
                case 2: // Even numbers ka sum karna
                    if (num % 2 == 0) {
                        sum += num;  // Agar number even hai toh sum me add karenge
                    }
                    break;
                case 3: // Odd numbers count karna
                    if (num % 2 != 0) {
                        count++;  // Agar number odd hai toh count badhaye
                    }
                    break;
                case 4: // Odd numbers ka sum karna
                    if (num % 2 != 0) {
                        sum += num;  // Agar number odd hai toh sum me add karenge
                    }
                    break;
                case 5: // Multiples of a number count karna
                    if (num % rule == 0) {
                        count++;  // Agar number divisor ke multiples mein hai toh count badhaye
                    }
                    break;
                case 6: // Random numbers ko count ya sum karna
                    cout << "Random Number: " << num << endl;
                    if (num % 2 == 0 && choice == 1) { // Even random numbers ko count karna
                        count++;
                    }
                    if (num % 2 == 0 && choice == 2) { // Even random numbers ka sum karna
                        sum += num;
                    }
                    if (num % 2 != 0 && choice == 3) { // Odd random numbers ko count karna
                        count++;
                    }
                    if (num % 2 != 0 && choice == 4) { // Odd random numbers ka sum karna
                        sum += num;
                    }
                    break;
                default:
                    cout << "Invalid choice!" << endl;
                    break;
            }
        }

        // Result dikhana
        if (choice != 6) {
            cout << "\nResult: ";
            if (choice == 1 || choice == 3 || choice == 5) {
                cout << "You have counted " << count << " numbers that match the rule." << endl;
            } else if (choice == 2 || choice == 4) {
                cout << "The sum of numbers that match the rule is " << sum << "." << endl;
            }
        }

        // Player se poochna ke wo dobara khelna chahta hai ya nahi
        cout << "Do you want to play again? (y/n): ";
        char playAgain;
        cin >> playAgain;

        if (playAgain != 'y' && playAgain != 'Y') {
            cout << "Thank you for playing! Goodbye." << endl;
            break; // Agar player ne 'y' nahi kaha toh loop khatam karenge
        }

        // Next round ke liye reset karte hain
        count = 0;
        sum = 0;

    } while (true);

    return 0;
}
