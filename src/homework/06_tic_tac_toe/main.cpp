#include "tic_tac_toe.h"
#include "tic_tac_toe_manager.h"
#include <iostream>

using std::cin;
using std::cout;


int main()
{
	TicTacToe game;
	TicTacToeManager manager; 
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
			cin >> game;
			cout << game;
			// game.display_board();
		}
		cout << "Winner for this game: " << game.get_winner() << "\n";
		cout << "\nGame Over"
			 << "\n";            
		manager.save_game(game);
		int x, o, c;
		manager.get_winner_total(x, o, c);
		cout << "\nX wins: " << x << "\n";
		cout << "O wins: " << o << "\n";
		cout << "Ties: " << c << "\n\n";
	
		game_over = game.game_over();
		cout << "Continue game? Y or N: "; 
		cin >> continue_game;

	}
	cout << "Thanks for playing my Tic Tac Toe!\n";
	return 0;
}