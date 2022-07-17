//h
#include "TicTacToe.h"

class tictactoe3 : public TicTacToe 
{
	public:
    		tictactoe3(): TicTacToe(3){};
	private:

    		bool check_column_win()override;	
    		bool check_row_win()override;
    		bool check_diagonal_win()override;
		void display_board()override;
    
};