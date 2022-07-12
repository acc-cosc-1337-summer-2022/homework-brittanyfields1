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

bool TicTacToe::check_column_win() 
{   // Checking for column win in marked values 1,4,7 
   //or 2,5,8, or 3,6,9 with all Xs or Os
    if((pegs[0] == "X" && pegs[3] == "X" && pegs[6] == "X") || 
    (pegs[1] == "X" && pegs[4] == "X" && pegs[7] == "X") ||
    (pegs[2] == "X" && pegs[5] == "X" && pegs[8] == "X") ||
    (pegs[0] == "O" && pegs[3] == "O" && pegs[6] == "O") ||
    (pegs[1] == "O" && pegs[4] == "O" && pegs[7] == "O") ||
    (pegs[2] == "O" && pegs[5] == "O" && pegs[8] == "O"))
    {
        return true;
    }
    return false;
}

bool TicTacToe::check_row_win()
{   // Checks for row win in marked values 1,2,3 or 
   //4,5,6 or 7,8,9 with X's or O's
    if((pegs[0] == "X" && pegs[1] == "X" && pegs[2] == "X") || 
    (pegs[3] == "X" && pegs[4] == "X" && pegs[5] == "X") ||
    (pegs[6] == "X" && pegs[7] == "X" && pegs[8] == "X") ||
    (pegs[0] == "O" && pegs[1] == "O" && pegs[2] == "O") ||
    (pegs[3] == "O" && pegs[4] == "O" && pegs[5] == "O") ||
    (pegs[6] == "O" && pegs[7] == "O" && pegs[8] == "O"))
       {
           return true;
       }
    return false;
}

bool TicTacToe::check_diagonal_win()
{   // checks for diagonal win in marked values 
   //1,5,9 or 7,5,3 with all Xs or Os
    if((pegs[0] == "X" && pegs[4] == "X" && pegs[8] == "X") ||
    (pegs[2] == "X" && pegs[4] == "X" && pegs[6] == "X") ||
    (pegs[0] == "O" && pegs[4] == "O" && pegs[8] == "O") ||
    (pegs[2] == "O" && pegs[4] == "O" && pegs[6] == "O"))
        {
            return true;
        }
    return false;
}

void TicTacToe :: set_winner()
    {
        winner = player;
    }