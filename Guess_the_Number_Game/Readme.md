 
# Number Guessing Game in C++  

## Overview  
This project is a simple **Number Guessing Game** developed in C++. The program generates a random number between 0 and 10, and the player gets five attempts to guess it. With each guess, the program provides feedback on whether the guess is too high, too low, or correct.  

## How It Works  
1. The program initializes a random number using the system clock as the seed.  
2. The random number is kept secret, and the player tries to guess it within 5 attempts.  
3. Feedback is provided after each guess:
   - "Your guess is too high" if the guess is greater than the secret number.  
   - "Your guess is too low" if the guess is less than the secret number.  
   - "Congratulations! You guessed the number!" if the guess is correct.  
4. If the player fails to guess the number in 5 attempts, the program reveals the secret number.  

## Features  
- Random number generation using `std::srand` and `std::rand`.  
- Clear and user-friendly feedback system.  
- Limit of 5 attempts for guessing to increase difficulty.  

## How to Run  
1. Compile the program using a C++ compiler. For example:  
   ```bash  
   g++ -o number_guessing_game number_guessing_game.cpp  
   ```  
2. Run the compiled executable:  
   ```bash  
   ./number_guessing_game  
   ```  
3. Follow the on-screen instructions to play the game.  

## Code Snippet  
```cpp  
#include <iostream>
#include <cstdlib>  // Random number generation
#include <ctime>    // Time for random seed initialization

int main() {
    std::cout << "Starting The Game:" << std::endl;

    std::srand(static_cast<unsigned int>(std::time(0)));
    int private_number = std::rand() % 11;
    std::cout << "I am thinking of a number between 0 and 10..." << std::endl;

    int attempts = 0;
    const int max_attempts = 5;
    int guess_number;

    while (attempts < max_attempts) {
        std::cout << "Attempt " << (attempts + 1) << "/" << max_attempts << " - Enter a number between 0 and 10: ";
        std::cin >> guess_number;
        attempts++;

        if (guess_number > private_number) {
            std::cout << "Your guess is too high" << std::endl;
        } else if (guess_number < private_number) {
            std::cout << "Your guess is too low" << std::endl;
        } else {
            std::cout << "Congratulations! You guessed the number!" << std::endl;
            break;
        }
    }

    if (attempts == max_attempts && guess_number != private_number) {
        std::cout << "Sorry, you've used all " << max_attempts << " attempts. The number was: " << private_number << std::endl;
    }

    return 0;
}
```  

## Future Enhancements  
- Add difficulty levels with different ranges for random numbers.  
- Include a scoring system based on the number of attempts.  
- Allow the player to restart the game without exiting the program.  

## License  
This project is open-source and available under the [MIT License](LICENSE).  

```  

Save this content as a `README.md` file in your repository.