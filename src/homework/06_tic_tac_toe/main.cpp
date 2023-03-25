#include "tic_tac_toe.h"
#include <iostream>

using std::cin;
using std::cout;

int main()
{
	TicTacToe game;
	int position;
	bool game_over = false;
	string player;
	char continue_game = 'Y';
	while ((continue_game == 'y' || continue_game == 'Y') || game_over == false)
	{
		cout << "Enter X or O: ";
		cin >> player;
		if (player == "q" || player == "Q")
			{
				break;
			}
		game.start_game(player);
		while (game.game_over() == false)
		{
			cout << "Enter position from 1 to 9: ";
			cin >> position;
			game.mark_board(position);
			game.display_board();
		}
		cout << "\nGame Over"
			 << "\n";
	
		game_over = game.game_over();
		cout << "Continue game? Y or N: "; 
		cin >> continue_game;
	}
	cout << "Thanks for playing my Tic Tac Toe!\n";
	return 0;
}