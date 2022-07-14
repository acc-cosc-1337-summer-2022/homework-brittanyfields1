//h
#include "TicTacToe.h"

class tictactoe3 : public TicTacToe {
    public:
    tictactoe3();
    bool check_column_win();	
    bool check_row_win();
    bool check_diagonal_win();
    
}