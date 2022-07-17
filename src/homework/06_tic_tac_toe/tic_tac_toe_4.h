//h
#include "tic_tac_toe.h"

class tictactoe4 : public TicTacToe 
{
	public:
    		tictactoe4() : TicTacToe(4){};
	private:

    		bool check_column_win()override;	
    		bool check_row_win()override;
    		bool check_diagonal_win()override;
		void display_board()override;
};
