#include <iostream>
#include <cstdlib>  // Random number generate karne ke liye
#include <ctime>    // Time ko use karne ke liye taake random numbers ko seed kar sakein

int main() {
    std::cout << "Starting The Game:" << std::endl;

    // Random seed initialize karna (taake har bar naya random number mile)
    std::srand(static_cast<unsigned int>(std::time(0)));

    // Random number ko generate karna jo 0 se 10 ke beech ho
    int private_number = std::rand() % 11;
    std::cout << "I am thinking of a number between 0 and 10..." << std::endl;

    int attempts = 0;  // Attempts ka counter initialize kar rahe hain
    const int max_attempts = 5;  // Max attempts 5 rakhe hain
    int guess_number;  // Player ke guess ka variable

    // Loop chalana hai jab tak max attempts complete na ho jaaye
    while (attempts < max_attempts) {
        std::cout << "Attempt " << (attempts + 1) << "/" << max_attempts << " - Enter a number between 0 and 10: ";
        std::cin >> guess_number;  // Player se number input lena
        attempts++;  // Attempts ka counter badha dena

        // Agar player ka guess zyada hai
        if (guess_number > private_number) {
            std::cout << "Your guess is too high" << std::endl;
        }
        // Agar player ka guess kam hai
        else if (guess_number < private_number) {
            std::cout << "Your guess is too low" << std::endl;
        }
        // Agar player ka guess bilkul sahi hai
        else {
            std::cout << "Congratulations! You guessed the number!" << std::endl;
            break;  // Game ko yahan break karenge kyunki number guess kar liya gaya hai
        }
    }

    // Agar max attempts complete ho gaye hain aur ab tak sahi guess nahi kiya
    if (attempts == max_attempts && guess_number != private_number) {
        std::cout << "Sorry, you've used all " << max_attempts << " attempts. The number was: " << private_number << std::endl;
    }

    return 0;
}
