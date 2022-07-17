//h
#ifndef TIC_TAC_TOE_3_H
#define TIC_TAC_TOE_3_H
#include "tic_tac_toe.h"

class tictactoe3 : public TicTacToe 
{
	public:
    		tictactoe3(): TicTacToe(3){};
	private:

    		bool check_column_win()override;	
    		bool check_row_win()override;
    		bool check_diagonal_win()override;

    
};

#endif