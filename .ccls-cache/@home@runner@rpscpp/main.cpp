#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

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
	
	int playerScore = 0;
	int compScore = 0;
	cout << "Let's play Rock, Paper, Scissors!\n";
	cout << "The first player to score 5 points wins!\n";
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
	
	return 0;
}