#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int handleScore(int score);
void gameLoop();

int main()
{
	//  0. Rock
	//  1. Paper 
	//  2. Scissors
	char rock{'r'};
	char paper{'p'};
	char scissors{'s'};
	char playerChoice{};
	int compChoice  = rand() % 3;	
	int playerScore{};
	int compScore{};
	bool gameOver{false};

	while(!gameOver)
	{
		cout << "Let's play Rock, Paper, Scissors!\n";
	  cout << "The first player to score 5 points wins!\n";
		gameLoop();
	}
	
	return 0;
}

int handleScore(int score)
{
	bool playerScored{false};
	bool compScored{false};
	int playerScore{};
	int compScore{};
	
	if (playerScored)
	{
		score += 1;
		cout << "round win!\n";
		compScored = false;
	}
		
	else if (compScored)
	{
		score += 1;
		cout << "round loss!\n";
		playerScored = false;
	}
	return score;
}

void gameLoop()
{
	//  0. Rock
	//  1. Paper 
	//  2. Scissors
	char rock{'r'};
	char paper{'p'};
	char scissors{'s'};
	char playerChoice{};
	int compChoice  = rand() % 3;

	int playerScore{};
	int compScore{};

	cout << "Enter r, p, or s: ";
	cin >> playerChoice;
	cout << "Computer chose: " << compChoice << endl;
	
	if (playerChoice == 'r' && compChoice == 0)
		{
			cout << "It's a tie!\n";
		}

		else if (playerChoice == 'r' && compChoice == 1)
		{
			cout << "Computer wins!\n";
			handleScore(compScore);
		}

		else if (playerChoice == 'r' && compChoice == 2)
		{
			cout << "Player wins!\n";
		}

		else if (playerChoice == 'p' && compChoice == 1)
		{
			cout << "It's a tie!\n";
		}

		else if (playerChoice == 'p' && compChoice == 2)
		{
			cout << "Computer wins!\n";
		}

		else if (playerChoice == 'p' && compChoice == 0)
		{
			cout << "Player wins!\n";
		}

		else if (playerChoice == 's' && compChoice == 2)
		{
			cout << "It's a tie!\n";
		}

		else if (playerChoice == 's' && compChoice == 0)
		{
			cout << "Computer wins!\n";
		}

		else if (playerChoice == 's' && compChoice == 1)
		{
			cout << "Player wins!\n";
		}
}