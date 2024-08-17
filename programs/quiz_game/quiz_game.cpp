#include <iostream>

int main() {
    using std::cout;
    using std::cin;
    using std::string;

    // Create arrays
    string questions[] = {"What is the capital of France?", "What is the capital of Spain?", "What is the capital of Italy?"};

    string options[][3] = {{"1) Paris", "2) Madrid", "3) Rome"}
                            , {"1) London", "2) Paris", "3) Madrid"}
                            , {"1) Rome", "2) Milan", "3) Venice"}};

    int answers[] = {1, 3, 1};

    // Display questions and options
    int correct;

    cout << "-------Welcome to the quiz game!-------\n\n";
    for (int i = 0; i < 3; i++) {
        cout << questions[i] << "\n";
        for (int j = 0; j < 3; j++) {
            cout << options[i][j] << "\n";
        }
        cout << "Enter your answer: ";
        int user_answer;
        cin >> user_answer;
        if (user_answer == answers[i]) {
            cout << "Correct!\n";
            correct++;
        } else {
            cout << "Incorrect!\n";
        }
    }
    
    cout << "Game has ended! You got " << correct << " out of 3 questions correct!\n";

    return 0;
}