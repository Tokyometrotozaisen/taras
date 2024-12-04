








#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

string getComputerChoice() {
    srand(time(0));
    int randomNum = rand() % 3;
    if (randomNum == 0) return "Rock";
    else if (randomNum == 1) return "Paper";
    else return "Scissors";
}

string getUserChoice() {
    string choice;
    cout << "Enter Rock, Paper, or Scissors: ";
    cin >> choice;
    return choice;
}

void determineWinner(string userChoice, string computerChoice) {
    if (userChoice == computerChoice) {
        cout << "It's a tie!" << endl;
    } else if ((userChoice == "Rock" && computerChoice == "Scissors") ||
               (userChoice == "Paper" && computerChoice == "Rock") ||
               (userChoice == "Scissors" && computerChoice == "Paper")) {
        cout << "You win!" << endl;
    } else {
        cout << "You lose!" << endl;
    }
}

int main() {
    string userChoice = getUserChoice();
    string computerChoice = getComputerChoice();
    
    cout << "Computer chose: " << computerChoice << endl;
    determineWinner(userChoice, computerChoice);
    
    return 0;
}