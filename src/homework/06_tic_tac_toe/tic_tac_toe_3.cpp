#include "tic_tac_toe_3.h"



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
{   /*
        0   1   2
        3   4   5
        6   7   8
    */
    if(
        (pegs[0] != " " && pegs[1] == pegs[0] && pegs[2] == pegs[0]) || 
        (pegs[3] != " " && pegs[4] == pegs[3] && pegs[5] == pegs[3]) ||
        (pegs[6] != " " && pegs[7] == pegs[6] && pegs[8] == pegs[6]) 
    )
       {
           return true;
       }
    return false;

}

bool tictactoe3::check_diagonal_win()
{  /*   0 1 2
        3 4 5
        6 7 8
    */
    if((pegs[0] == "X" && pegs[4] == "X" && pegs[8] == "X") ||
    (pegs[2] == "X" && pegs[4] == "X" && pegs[6] == "X") ||
    (pegs[0] == "O" && pegs[4] == "O" && pegs[8] == "O") ||
    (pegs[2] == "O" && pegs[4] == "O" && pegs[6] == "O"))
        {
            return true;
        }
    return false;
}

