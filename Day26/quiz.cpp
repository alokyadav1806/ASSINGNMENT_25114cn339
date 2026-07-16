#include <iostream>
using namespace std;

int main() {
    int answer;
    int score = 0;

    cout << "===== Quiz Application =====\n\n";

    cout << "Q1. What is the capital of India?\n";
    cout << "1. Mumbai\n2. Delhi\n3. Kolkata\n4. Chennai\n";
    cout << "Enter your answer: ";
    cin >> answer;
    if (answer == 2)
        score++;

    cout << "\nQ2. Which language is used for Object-Oriented Programming?\n";
    cout << "1. C\n2. C++\n3. HTML\n4. SQL\n";
    cout << "Enter your answer: ";
    cin >> answer;
    if (answer == 2)
        score++;

    cout << "\nQ3. How many days are there in a week?\n";
    cout << "1. 5\n2. 6\n3. 7\n4. 8\n";
    cout << "Enter your answer: ";
    cin >> answer;
    if (answer == 3)
        score++;

    cout << "\nQ4. Which planet is known as the Red Planet?\n";
    cout << "1. Earth\n2. Venus\n3. Mars\n4. Jupiter\n";
    cout << "Enter your answer: ";
    cin >> answer;
    if (answer == 3)
        score++;

    cout << "\nYour Score: " << score << " / 4\n";

    if (score == 4)
        cout << "Excellent!\n";
    else if (score >= 2)
        cout << "Good Job!\n";
    else
        cout << "Keep Practicing!\n";

    return 0;
}