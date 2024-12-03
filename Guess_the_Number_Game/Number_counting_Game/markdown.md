
# Enhanced Number Counting Game in C++  

## Overview  
This is an interactive **Number Counting Game** in C++ that provides multiple modes for processing numbers. Players can choose to count or sum even/odd numbers, count multiples of a number, or work with randomly generated numbers based on a chosen difficulty level.  

## Features  
- **Game Modes:**  
  1. Count even numbers.  
  2. Sum even numbers.  
  3. Count odd numbers.  
  4. Sum odd numbers.  
  5. Count multiples of a specific number.  
  6. Process random numbers (count or sum).  
- **Difficulty Levels:**  
  - Easy (1–50)  
  - Medium (1–100)  
  - Hard (1–200)  
- Interactive and user-friendly input validation.  
- Option to replay the game or exit.  

## How It Works  
1. The program starts with a game mode selection (1–6).  
2. Players choose a difficulty level to define the range of numbers.  
3. Depending on the mode:
   - The program counts or sums even/odd numbers.
   - The program counts multiples of a specific number entered by the player.
   - Random numbers can also be processed.  
4. Results are displayed based on the selected mode.  
5. Players can replay the game or exit.  

## Code Explanation  
### Key Components  
1. **Input Validation:**  
   - Ensures the player selects valid game modes and difficulty levels.  
   - Uses a helper function `isValidChoice` to validate input.  

2. **Game Modes Logic:**  
   - Each game mode uses conditional checks (`if`, `switch`) to determine if a number matches the selected rule (e.g., even, odd, multiple).  
   - Modes 1 and 3 count numbers, while 2 and 4 calculate the sum.  

3. **Difficulty Levels:**  
   - Sets the range of numbers based on the chosen difficulty.  
   - Easy: 1–50, Medium: 1–100, Hard: 1–200.  

4. **Random Numbers:**  
   - For mode 6, the program generates random numbers within the defined range.  

5. **Replay Option:**  
   - After displaying results, the player can choose to play again or exit.  

### Code Snippet  
```cpp  
#include <iostream>
#include <cstdlib>  // For random number generation
#include <ctime>    // To seed the random number generator
using namespace std;

// Validates if the player's choice is within the given range
bool isValidChoice(int choice, int min, int max) {
    return (choice >= min && choice <= max);
}

int main() {
    int n, choice, rule, count = 0, sum = 0;
    int startRange, endRange, difficulty;

    srand(time(0));  // Seed the random number generator

    do {
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

        if (!isValidChoice(choice, 1, 6)) {
            cout << "Invalid choice! Please choose a valid option." << endl;
            continue;
        }

        // Code continues to process the chosen game mode
        ...
    } while (true);
    return 0;
}
```

## How to Run  
1. **Compile the Code:**  
   Use a C++ compiler to compile the program:  
   ```bash  
   g++ -o enhanced_game enhanced_game.cpp  
   ```  
2. **Run the Program:**  
   ```bash  
   ./enhanced_game  
   ```  
3. **Play the Game:**  
   Follow the on-screen instructions to select modes, difficulty levels, and process numbers.  

## Future Improvements  
- Add a scoring system based on the accuracy and speed of inputs.  
- Include more game modes like finding prime numbers.  
- Allow for a graphical user interface (GUI) in future iterations.  

## License  
This project is open-source and available under the [MIT License](LICENSE).  
```  

Save this content as a `README.md` file in your repository!