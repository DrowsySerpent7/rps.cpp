#include <cstdlib>
#include <ctime>
#include <iostream>

using namespace std;

int handleScore(int score, bool playerScored, bool compScored);
void gameLoop();

int main() {
  bool gameOver{false};
  while (!gameOver) {
    cout << "Let's play Rock, Paper, Scissors!\n";
    cout << "The first player to score 5 points wins!\n";
    gameLoop();
  }
  return 0;
  
}
int handleScore(int score, bool playerScored, bool compScored) {
  if (playerScored) {
    score += 1;
    cout << "round win!\n";
  }

  else if (compScored) {
    score += 1;
    cout << "round loss!\n";
  }
  return score;
}

void gameLoop() {
  //  0. Rock
  //  1. Paper
  //  2. Scissors
  char playerChoice{};
  int compChoice = rand() % 3;
  int playerScore{};
  int compScore{};

  cout << "Enter r, p, or s: ";
  cin >> playerChoice;
  cout << "Computer chose: " << compChoice << endl;

  if (playerChoice == 'r' && compChoice == 0) {
    cout << "It's a tie!\n";
  } else if (playerChoice == 'r' && compChoice == 1) {
    cout << "Computer wins!\n";
    compScore = handleScore(compScore, false, true);
  } else if (playerChoice == 'r' && compChoice == 2) {
    cout << "Player wins!\n";
    playerScore = handleScore(playerScore, true, false);
  } else if (playerChoice == 'p' && compChoice == 1) {
    cout << "It's a tie!\n";
  } else if (playerChoice == 'p' && compChoice == 2) {
    cout << "Computer wins!\n";
    compScore = handleScore(compScore, false, true);
  } else if (playerChoice == 'p' && compChoice == 0) {
    cout << "Player wins!\n";
    playerScore = handleScore(playerScore, true, false);
  } else if (playerChoice == 's' && compChoice == 2) {
    cout << "It's a tie!\n";
  } else if (playerChoice == 's' && compChoice == 0) {
    cout << "Computer wins!\n";
    compScore = handleScore(compScore, false, true);
  } else if (playerChoice == 's' && compChoice == 1) {
    cout << "Player wins!\n";
    playerScore = handleScore(playerScore, true, false);
  } else {
    cout << "Invalid input! Please enter r, p, or s.\n";
  }
}