//cpp
#include "tic_tac_toe.h"
#include <iostream>

using std::cout;



bool TicTacToe::game_over()
{

    if (TicTacToe::check_row_win() == true || TicTacToe::check_column_win() == true || TicTacToe::check_diagonal_win() == true) //check for win
    {
        set_winner(); //set winner
        return true;
    }
    else if (check_board_full() == true)
    {
        TicTacToe::winner = "C"; //tie 
        return true;
    }
    else
    {
        return false;
    }
}

bool TicTacToe::check_column_win()
{
    if (TicTacToe::pegs[0] == TicTacToe::pegs[3] && TicTacToe::pegs[3] == TicTacToe::pegs[6] && TicTacToe::pegs[0] != " ") //first column
    {
        return true;
    }
    else if (TicTacToe::pegs[1] == TicTacToe::pegs[4] && TicTacToe::pegs[4] == TicTacToe::pegs[7] && TicTacToe::pegs[1] != " ") //mid column
    {
        return true;
    }
    else if (TicTacToe::pegs[2] == TicTacToe::pegs[5] && TicTacToe::pegs[5] == TicTacToe::pegs[8] && TicTacToe::pegs[2] != " ") //last column
    {
        return true;
    }
    else {
        return false;
    }
}

bool TicTacToe::check_row_win()
{
    if (TicTacToe::pegs[0] == TicTacToe::pegs[1] && TicTacToe::pegs[1] == TicTacToe::pegs[2] && TicTacToe::pegs[0] != " ") //first row
    {
        return true;
    }
    else if (TicTacToe::pegs[3] == TicTacToe::pegs[4] && TicTacToe::pegs[4] == TicTacToe::pegs[5] && TicTacToe::pegs[3] != " ") //mid row
    {
        return true;
    }
    else if (TicTacToe::pegs[6] == TicTacToe::pegs[7] && TicTacToe::pegs[7] == TicTacToe::pegs[8] && TicTacToe::pegs[6] != " ") //last row
    {
        return true;
    }
    else {
        return false;
    }
}

bool TicTacToe::check_diagonal_win()
{
    if (TicTacToe::pegs[0] == TicTacToe::pegs[4] && TicTacToe::pegs[4] == TicTacToe::pegs[8] && TicTacToe::pegs[0] != " ")  //first diagonal
    {
        return true;
    }
    else if (TicTacToe::pegs[2] == TicTacToe::pegs[4] && TicTacToe::pegs[4] == TicTacToe::pegs[6] && TicTacToe::pegs[2] != " ") //second diagonal
    {
        return true;
    }
    else {
        return false;
    }

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

// void TicTacToe::display_board() const
// {
//     for (int i = 0; i < 9; i += 3)
//     {
//         cout << TicTacToe::pegs[i] << "|" << TicTacToe::pegs[i + 1] << "|" << TicTacToe::pegs[i + 2]
//              << "\n";
//     }
// }

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

void TicTacToe::set_winner()
{
    if (TicTacToe::player == "X")
    {
        TicTacToe::winner = "O";
    }
    else if (TicTacToe::player == "O")
    {
        TicTacToe::winner = "X";
    }
    else {
        TicTacToe::winner = "C";
    }
}


string TicTacToe::get_winner() const
{
    return winner;
}

std::ostream &operator<<(std::ostream &out, const TicTacToe &game)
{
    for (int i = 0; i < 9; i += 3)
    {
        out << game.pegs[i] << "|" << game.pegs[i + 1] << "|" << game.pegs[i + 2]
            << "\n";
    }
    return out;
}

std::istream &operator>>(std::istream &in, TicTacToe &game)
{
    int position;
    cout << "Enter position 1-9: ";
    in >> position;
    game.mark_board(position);
    return in;
}
