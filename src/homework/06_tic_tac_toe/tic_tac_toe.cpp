//cpp
#include "tic_tac_toe.h"

using std::cout;

bool TicTacToe::game_over()
{
    if(check_column_win() || check_row_win() || check_diagonal_win()) 
    {
        set_winner(); 
        return true;
    }
    else if (check_board_full()) 
    {
        winner = "C"; 
        return true;
    }
    else
    {
        return false;
    }
}

void TicTacToe::start_game(std::string first_player)
{
    player = first_player;
    clear_board();
}

void TicTacToe::mark_board(int position)
{
    pegs[position-1] = player;
    set_next_player();
}

void TicTacToe::display_board() const
{
    for (long unsigned int i=0; i<pegs.size(); i+=3)
    {
        cout<<pegs[i]<<"|"<<pegs[i+1]<<"|"<<pegs[i+2]<<"\n";
        
    }
}

//private functions
void TicTacToe::clear_board()
{
    for (auto& peg: pegs)
    {
        peg = " ";
    }
}

void TicTacToe::set_next_player()
{
    if (player == "X")
        player = "O";
    else
    {
        player = "X";
    }
}

bool TicTacToe::check_board_full()
{
    for(long unsigned int i=0; i<pegs.size(); i++)
    {
        if(pegs[i]==" ")
        {
            return false;
        }
    }
    return true;
}
/*
class function check_column_win
Win by column if and return true if
0,3, and 6 are equal
1, 4, and 7
2, 5, and 8
else
false
*/
bool TicTacToe :: check_column_win()
{
    if (pegs[0] == player && pegs[3] == player && pegs[6] == player)
        return true;
    if (pegs[1] == player && pegs[4] == player && pegs[7] == player)
        return true;
    if (pegs[2] == player && pegs[5] == player && pegs[8] == player)
        return true;
}



/*
class function check_row_win
Win by row if
0, 1, 2 are equal
3,4,5 are equal
6,7,8 are equal
*/
bool TicTacToe :: check_row_win()
{
    if (pegs[0] == player && pegs[1] == player && pegs[2] == player)
        return true;
    if (pegs[3] == player && pegs[4] == player && pegs[5] == player)
        return true;
    if (pegs[6] == player && pegs[7] == player && pegs[8] == player)
        return true;
}


/*
class function check_diagonal_win
Win diagonally
0 1 2
3 4 5
6 7 8
*/
bool TicTacToe :: check_diagonal_win()
{
    if (pegs[0] == player && pegs[4] == player && pegs[8] == player)
        return true;
    if (pegs[2] == player && pegs[4] == player && pegs[6] == player)
        return true;
}

void TicTacToe :: set_winner()
    {
        winner = player;
    }