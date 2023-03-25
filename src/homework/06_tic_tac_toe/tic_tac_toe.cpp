//cpp
#include "tic_tac_toe.h"
#include <iostream>

using std::cout;

bool TicTacToe::game_over()
{
    return TicTacToe::check_board_full();
}

void TicTacToe::start_game(string first_player)
{
    TicTacToe::player = first_player; //step2 missing
    TicTacToe::clear_board();
}

void TicTacToe::mark_board(int position)
{
    TicTacToe::pegs[position - 1] = TicTacToe::player;
    TicTacToe::set_next_player();
}

string TicTacToe::get_player() const
{
    return TicTacToe::player;
}

void TicTacToe::display_board() const
{
    for (int i = 0; i < 9; i += 3)
    {
        cout << TicTacToe::pegs[i] << "|" << TicTacToe::pegs[i + 1] << "|" << TicTacToe::pegs[i + 2] 
             << "\n";
    }
}

void TicTacToe::set_next_player()
{
    if (TicTacToe::player == "X")
    {
        TicTacToe::player = "O";
    }
    else
    {
        TicTacToe::player = "X";
    }
}

bool TicTacToe::check_board_full()
{
    for (int i = 0; i < 9; i++)
    {
        if (TicTacToe::pegs[i] == " ")
        {
            return false;
        }
    }
    return true;
}

void TicTacToe::clear_board()
{
    for (int i = 0; i < 9; i++)
    {
        TicTacToe::pegs[i] = " ";
    }
}
