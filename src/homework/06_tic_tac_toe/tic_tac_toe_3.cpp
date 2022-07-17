#include "tic_tac_toe_3.h"
 
 //this is constructor chaining
tictactoe3 :: tictactoe3(): TicTacToe(3){

}

bool tictactoe3::check_column_win()
{
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

bool tictactoe3::check_row_win()
{   // Checks for row win in marked values 1,2,3 or 
   //4,5,6 or 7,8,9 with X's or O's
    if((pegs[0] == get_player() && pegs[1] == get_player() && pegs[2] == get_player()) || 
    (pegs[3] == get_player() && pegs[4] == get_player() && pegs[5] == get_player()) ||
    (pegs[6] == get_player() && pegs[7] == get_player() && pegs[8] == get_player()))
       {
           return true;
       }
    return false;
}

bool tictactoe3::check_diagonal_win()
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
