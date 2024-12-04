
# Basic Quiz Game in C++  

## Overview  
This is a simple **Quiz Game** written in C++. Players answer four multiple-choice questions, and their score is calculated based on the number of correct answers. Each correct answer is worth 1 point. At the end of the quiz, the player receives feedback based on their final score.  

## Features  
- Four multiple-choice questions.  
- Case-insensitive answer input (both lowercase and uppercase are accepted).  
- Scoring system to calculate performance.  
- Feedback based on the player's score.  

---

## Code Explanation (Step by Step)  

### 1. **Initializing Variables**  
```cpp  
int score = 0; // Player's score
string answer; // To store player's answers
```  
- `score` is used to keep track of the player's correct answers.  
- `answer` stores the player's input for each question.  

---

### 2. **Welcome Message**  
```cpp  
cout << "Welcome to the Basic Quiz Game!\n";
cout << "Answer the following questions by typing your answer.\n";
cout << "Each correct answer is worth 1 point. Good luck!\n\n";
```  
This section introduces the player to the quiz and explains the rules.  

---

### 3. **Question 1**  
```cpp  
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
```  
- A question is displayed along with four answer options.  
- The player's input is checked using a case-insensitive comparison (`b` or `B`).  
- If correct, the score is incremented; otherwise, the correct answer is displayed.  

---

### 4. **Question 2**  
```cpp  
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
```  
- Similar logic as Question 1 but asks about the "Red Planet".  
- Correct answer: `c) Mars`.  

---

### 5. **Question 3**  
```cpp  
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
```  
- A math question is presented, and the player's answer is evaluated.  
- Correct answer: `b) 12`.  

---

### 6. **Question 4**  
```cpp  
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
```  
- A programming-related question asks which language is used to write the quiz.  
- Correct answer: `c) C++`.  

---

### 7. **Final Score and Feedback**  
```cpp  
cout << "\nYour final score is: " << score << " out of 4.\n";

if (score == 4) {
    cout << "Excellent! You're a genius!\n";
} else if (score >= 2) {
    cout << "Good job! You did well.\n";
} else {
    cout << "Better luck next time!\n";
}
```  
- The player's final score is displayed.  
- Feedback is given based on their performance:  
  - **4 points:** Excellent!  
  - **2 or 3 points:** Good job!  
  - **0 or 1 point:** Better luck next time.  

---

## How to Run  
1. **Compile the Code:**  
   Use a C++ compiler to compile the program:  
   ```bash  
   g++ -o quiz_game quiz_game.cpp  
   ```  
2. **Run the Program:**  
   ```bash  
   ./quiz_game  
   ```  
3. **Follow the Instructions:**  
   Answer the questions as prompted.  

---

## Example Output  
```  
Welcome to the Basic Quiz Game!  
Answer the following questions by typing your answer.  
Each correct answer is worth 1 point. Good luck!  

1. What is the capital of Pakistan?  
a) Lahore  
b) Islamabad  
c) Karachi  
d) Peshawar  
Your answer: b  
Correct!  

2. Which planet is known as the Red Planet?  
a) Earth  
b) Venus  
c) Mars  
d) Jupiter  
Your answer: c  
Correct!  

3. What is 5 + 7?  
a) 10  
b) 12  
c) 13  
d) 15  
Your answer: b  
Correct!  

4. Which programming language is this quiz written in?  
a) Python  
b) Java  
c) C++  
d) C  
Your answer: c  
Correct!  

Your final score is: 4 out of 4.  
Excellent! You're a genius!  
```  

---

## Future Enhancements  
- Add more questions to the quiz.  
- Include a timer for each question to increase difficulty.  
- Implement a leaderboard to track top scores.  

## License  
This project is open-source and available under the [MIT License](LICENSE).  
