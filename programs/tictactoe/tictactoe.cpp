#include <iostream>

using std::string;
using std::fill;
using std::cin;
using std::cout;

void drawBoard(char *spaces);
bool playerMove(char *spaces, char player);
void computerMove(char *spaces, char computer);
bool checkWinner(char *spaces, char player, char computer);
bool checkTie(char *spaces);

int main() {
    cout << "------Tic Tac Toe------!\n";
    char spaces[9];
    char player = 'X';
    char computer = 'O';
    bool running = true;
    
    fill(spaces, spaces + 9, ' ');
    drawBoard(spaces);

    while (running) {
        if (playerMove(spaces, player)){
            drawBoard(spaces);
            if (checkWinner(spaces, player, computer)){
                running = false;
                break;
            }
            else if (checkTie(spaces)){
                running = false;
                break;
            }
            computerMove(spaces, computer);
            drawBoard(spaces);
            if (checkWinner(spaces, player, computer)){
                running = false;
                break;
            }
            else if (checkTie(spaces)){
                running = false;
                break;
            }
        }
    }
    cout << "Game over!\nThanks for playing!";

    return 0;
}

void drawBoard(char *spaces){
    cout << " _____ _____ _____\n";
    for (int i = 0 ; i < 9; i+=3){
        cout << "|     |     |     |\n";
        cout << "|  " << spaces[i] << "  |  " << spaces[i+1] << "  |  " << spaces[i+2] << "  |\n";
        cout << "|_____|_____|_____|\n";
    }
}

bool playerMove(char *spaces, char player){
    bool moved = false;
    int number;
    do {
        cout << "Enter a number between 1 and 9: ";
        cin >> number;
        if (spaces[number-1] == ' '){
            spaces[number-1] = player;
            moved = true;
        }
        else{
            cout << "Invalid move!\n";
        }
        // Reset error flags
        std::cin.clear();

        // Clear input buffer
        fflush(stdin);
    } while (number < 0 || number > 9);
    return moved;
}

void computerMove(char *spaces, char computer){
    int number;
    srand(time(NULL));

    while (true){
        number = rand() % 9;
        if (spaces[number] == ' '){
            spaces[number] = computer;
            break;
        }
    }
}

bool checkWinner(char *spaces, char player, char computer){
    // Check winner
    // Check horizontal rows
    if ((spaces[0] != ' ') && (spaces[0] == spaces[1]) && (spaces[1] == spaces[2])){
        spaces[0] == player ? cout << "You win!\n": cout << "You lose :(\n";
    }
    else if ((spaces[3] != ' ') && (spaces[3] == spaces[4]) && (spaces[4] == spaces[5])){
        spaces[3] == player ? cout << "You win!\n": cout << "You lose :(\n";
    }
    else if ((spaces[6] != ' ') && (spaces[6] == spaces[7]) && (spaces[7] == spaces[8])){
        spaces[6] == player ? cout << "You win!\n": cout << "You lose :(\n";
    }
    // Check vertical rows
    else if ((spaces[0] != ' ') && (spaces[0] == spaces[3]) && (spaces[3] == spaces[6])){
        spaces[0] == player ? cout << "You win!\n": cout << "You lose :(\n";
    }
    else if ((spaces[1] != ' ') && (spaces[1] == spaces[4]) && (spaces[4] == spaces[7])){
        spaces[1] == player ? cout << "You win!\n": cout << "You lose :(\n";
    }
    else if ((spaces[2] != ' ') && (spaces[2] == spaces[5]) && (spaces[5] == spaces[8])){
        spaces[2] == player ? cout << "You win!\n": cout << "You lose :(\n";
    }
    // Check diagonal rows
    else if ((spaces[0] != ' ') && (spaces[0] == spaces[4]) && (spaces[4] == spaces[8])){
        spaces[0] == player ? cout << "You win!\n": cout << "You lose :(\n";
    }
    else if ((spaces[2] != ' ') && (spaces[2] == spaces[4]) && (spaces[4] == spaces[6])){
        spaces[2] == player ? cout << "You win!\n": cout << "You lose :(\n";
    }
    else{
        return false; // Return that there is no winner
    }
    return true; // Return that there is a winner
}

bool checkTie(char *spaces){
    for (int i = 0; i < 9; i++){
        if (spaces[i] == ' '){
            return false;
        }
    }
    cout << "It's a tie!\n";

    return true;
}