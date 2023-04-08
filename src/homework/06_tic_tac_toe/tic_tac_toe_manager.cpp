//cpp

#include "tic_tac_toe.h"
#include "tic_tac_toe_manager.h"
#include <iostream>

#include <iostream>


void TicTacToeManager::get_winner_total(int& x, int& o, int& c)
{
    //Use references to get the winners
    x = x_win;
    o = o_win;
    c = ties;
}

void TicTacToeManager::save_game(TicTacToe game)
{
    games.push_back(game); // add the TicTacToe to the games vector
    std::string winner = game.get_winner(); // get the winner of the game
    if (winner == "X") {
        x_win++; // increment the X win count
                std::cout << "X wins!" << "\n";

    } else if (winner == "O") {
        o_win++; // increment the O win count
                std::cout << "O wins!" << "\n" ;

    } else {
        ties++; // increment the tie count
                std::cout << "C wins!" << "\n";

    }
}

void TicTacToeManager::update_winner_count(string winner)
{
    //update the winner count
    if (winner == "X")
    {
        x_win++;
    }
    else if (winner == "O")
    {
        o_win++;
    }
    else
    {
        ties++;
    }
}

std::ostream& operator<<(std::ostream& os, TicTacToeManager manager)
{    //loop through the games vector and display each game
    for (const auto& game : manager.games) {
        os << game << "\n";
    }
    //display the winner totals
    os << "X wins: " << manager.x_win << "\n";
    os << "O wins: " << manager.o_win << "\n";
    os << "Ties: " << manager.ties << "\n";
    return os;
}

