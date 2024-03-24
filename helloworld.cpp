#include <iostream>
using namespace std;

const char ROCK = 'r';
const char PAPER = 'p';
const char SCISSORS = 's';

char computerRandom () {
    srand(time(0));
    int num = rand() % 3 + 1;

    if (num == 1) return 'r';
    if (num == 2) return 'p';
    if (num == 3) return 's';
}

char userInput () {
    char c;
    cout << "Welcome to the game rock, paper, scissors!\n";
    cout << "Choose Rock, Paper or Scissors.\n";
    cout << "-------------------------------\n";
    cout << "(r) for Rock\n (p) for Papen\n (s) for Scissors\n";
    cin >> c;

    while (c != 'r' && c != 'p' && c != 's') {
        cout << "Not correct, you can only choose between (r) for Rock, (p) for Papen and (s) for Scissors\n";
        cin >> c;}

    return c;
}

void showInput (char option) {
    if (option == 'r') cout << "Rock\n";
    if (option == 'p') cout << "Paper\n";
    if (option == 's') cout << "Scissors\n";
}

void chooseWinner (char uChoice, char cChoice) {
    if (uChoice == ROCK && cChoice == PAPER) {
        cout << "Computer wins! Paper wins Rock!";
    }
    else if (uChoice == PAPER && cChoice == SCISSORS) {
        cout << "Computer wins! Scissors win Paper!";
    }
    else if (uChoice == SCISSORS && cChoice == ROCK) {
        cout << "Computer wins! Rock wins Scissors";
    }
    else if (uChoice == PAPER && cChoice == ROCK) {
        cout << "You win! Paper wins Rock!";
    }
    else if (uChoice == ROCK && cChoice == SCISSORS) {
        cout << "You win! Paper wins Rock!";
    }
    else if (uChoice == SCISSORS && cChoice == PAPER) {
        cout << "You win! Scissors win Paper!";
    }  else {
        cout << "Tie! Choose again!";
    }
}


int main () {
    char user;
    char computer;

    user = userInput();
    cout << "Your choice is "<< endl;
    showInput(user);

    computer = computerRandom();
    cout << "Computer choice is "<< endl;
    showInput(computer);

    chooseWinner(user, computer);

    return 0;
}